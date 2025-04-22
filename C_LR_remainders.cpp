#include <graphics.h>
#include <cmath>
#include <vector>
#include <ctime>

// Simple 2D vector structure and operations.
struct Vec2 {
    float x, y;
};

Vec2 operator+(const Vec2& a, const Vec2& b) {
    return { a.x + b.x, a.y + b.y };
}

Vec2 operator-(const Vec2& a, const Vec2& b) {
    return { a.x - b.x, a.y - b.y };
}

Vec2 operator*(const Vec2& a, float s) {
    return { a.x * s, a.y * s };
}

float dot(const Vec2& a, const Vec2& b) {
    return a.x * b.x + a.y * b.y;
}

float length(const Vec2& a) {
    return std::sqrt(a.x * a.x + a.y * a.y);
}

Vec2 normalize(const Vec2& a) {
    float len = length(a);
    return (len != 0) ? a * (1.0f / len) : Vec2{ 0, 0 };
}

// ----- Simulation Constants -----
const float PI = 3.14159265f;
const float GRAVITY = 500.0f;         // pixels per second^2
const float RESTITUTION = 0.8f;       // bounce energy loss coefficient
const float COLLISION_FRICTION = 0.2f; // friction reduces tangential speed
const float BALL_RADIUS = 10.0f;
const float HEXAGON_RADIUS = 200.0f;  // distance from center to vertex
const float HEXAGON_ANGULAR_VELOCITY = 1.0f; // radians per second

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

int main() {
    // Initialize graphics window.
    initwindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Bouncing Ball in a Spinning Hexagon (graphics.h)");

    // Simulation state: ball starts at the window center with an initial velocity.
    Vec2 ballPos = { WINDOW_WIDTH / 2.0f, WINDOW_HEIGHT / 2.0f };
    Vec2 ballVel = { 150.0f, -100.0f };
    float hexAngle = 0.0f;  // current rotation angle of the hexagon (in radians)

    // Timing: use clock() to measure frame time.
    clock_t lastTime = clock();

    // Main loop: run until a key is pressed.
    while (!kbhit()) {
        // Calculate elapsed time (in seconds)
        clock_t currentTime = clock();
        float dt = (float) (currentTime - lastTime) / CLOCKS_PER_SEC;
        // Clamp dt to avoid large jumps.
        if (dt > 0.05f) dt = 0.05f;
        lastTime = currentTime;

        // --- Update Simulation ---
        // Apply gravity to the ball.
        ballVel.y += GRAVITY * dt;
        // Update ball's position.
        ballPos = ballPos + ballVel * dt;
        // Update the hexagon's rotation.
        hexAngle += HEXAGON_ANGULAR_VELOCITY * dt;

        // Center of the hexagon (and window center)
        Vec2 center = { WINDOW_WIDTH / 2.0f, WINDOW_HEIGHT / 2.0f };
        // Compute current hexagon vertices.
        std::vector<Vec2> vertices;
        for (int i = 0; i < 6; i++) {
            float angle = hexAngle + i * (2 * PI / 6) - PI / 2;
            float x = center.x + HEXAGON_RADIUS * std::cos(angle);
            float y = center.y + HEXAGON_RADIUS * std::sin(angle);
            vertices.push_back({ x, y });
        }

        // --- Collision Detection and Response ---
        // Check collision with each edge of the hexagon.
        for (int i = 0; i < 6; i++) {
            int j = (i + 1) % 6;
            Vec2 A = vertices[i];
            Vec2 B = vertices[j];

            // Find the closest point on edge AB to the ball's center.
            Vec2 AB = B - A;
            Vec2 AP = ballPos - A;
            float t = dot(AP, AB) / dot(AB, AB);
            if (t < 0) t = 0;
            if (t > 1) t = 1;
            Vec2 closest = A + AB * t;

            // Distance from ball center to the closest point.
            Vec2 diff = ballPos - closest;
            float dist = length(diff);

            if (dist < BALL_RADIUS) {  // Collision detected.
                // Compute collision normal (from wall toward ball).
                Vec2 n;
                if (dist != 0)
                    n = normalize(diff);
                else
                    n = normalize({ -AB.y, AB.x });

                // Compute wall's velocity due to hexagon rotation: v = ω × r,
                // where r = (closest - center). In 2D, v = (-r.y, r.x) * ω.
                Vec2 r = closest - center;
                Vec2 vWall = { -r.y, r.x };
                vWall = vWall * HEXAGON_ANGULAR_VELOCITY;

                // Relative velocity between ball and moving wall.
                Vec2 relVel = ballVel - vWall;
                // Only resolve if the ball is moving into the wall.
                if (dot(relVel, n) < 0) {
                    float relDotN = dot(relVel, n);
                    Vec2 v_n = n * relDotN;
                    Vec2 v_t = relVel - v_n;
                    // Reflect the normal component (applying restitution)
                    // and reduce the tangential component (simulating friction).
                    Vec2 newRelVel = (v_n * -RESTITUTION) + (v_t * (1.0f - COLLISION_FRICTION));
                    ballVel = newRelVel + vWall;

                    // Push the ball out so it is no longer intersecting.
                    float penetration = BALL_RADIUS - dist;
                    ballPos = ballPos + n * penetration;
                }
            }
        }

        // --- Drawing ---
        cleardevice();  // clear the screen

        // Draw the hexagon (outline in white).
        setcolor(WHITE);
        for (int i = 0; i < 6; i++) {
            int j = (i + 1) % 6;
            line((int) vertices[i].x, (int) vertices[i].y, (int) vertices[j].x, (int) vertices[j].y);
        }

        // Draw the ball (filled circle in red).
        setcolor(RED);
        fillellipse((int) ballPos.x, (int) ballPos.y, (int) BALL_RADIUS, (int) BALL_RADIUS);

        delay(16);  // delay to target roughly 60 frames per second
    }

    // Clean up and close the graphics window.
    closegraph();
    return 0;
}
