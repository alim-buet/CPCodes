
#include <iostream>
#include <cmath>
using namespace std;

class Point2D {
    int x, y;

public:
    Point2D() { x = 0; y = 0; }
    Point2D(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
    void print();
    ~Point2D() { x = 0; y = 0; }
};

Point2D::Point2D(int argx, int argy) {
    x = argx;
    y = argy;
}

void Point2D::setX(int argx) {
    x = argx;
}

void Point2D::setY(int argy) {
    y = argy;
}

int Point2D::getX() {
    return x;
}

int Point2D::getY() {
    return y;
}

void Point2D::print() {
    cout << "(" << x << "," << y << ")";
}

class Circle {
    Point2D center;
    double radius;

public:
    Circle() : center(Point2D()), radius(0.0) {}
    Circle(Point2D c, double r);
    Point2D getCenter();
    double getRadius();
    void setCenter(Point2D c) { center = c; }
    void setRadius(double r) { radius = r; }
    double area();
    void print();
    ~Circle() { radius = 0.0; }
};

Circle::Circle(Point2D c, double r) : center(c), radius(r) {}

Point2D Circle::getCenter() {
    return center;
}

double Circle::getRadius() {
    return radius;
}

double Circle::area() {
    return M_PI * radius * radius;
}

void Circle::print() {
    cout << "Center: ";
    center.print();
    cout << " Radius: " << radius;
}

class Rectangle {
    Point2D topRight, bottomLeft;

public:
    Rectangle() : topRight(Point2D()), bottomLeft(Point2D()) {}
    Rectangle(Point2D tr, Point2D bl);
    Point2D getTopRight();
    Point2D getBottomLeft();
    void setTopRight(Point2D tr) { topRight = tr; }
    void setBottomLeft(Point2D bl) { bottomLeft = bl; }
    double area();
    double perimeter();
    ~Rectangle() {}
};

Rectangle::Rectangle(Point2D tr, Point2D bl) : topRight(tr), bottomLeft(bl) {}

Point2D Rectangle::getTopRight() {
    return topRight;
}

Point2D Rectangle::getBottomLeft() {
    return bottomLeft;
}

double Rectangle::area() {
    int width = abs(topRight.getX() - bottomLeft.getX());
    int height = abs(topRight.getY() - bottomLeft.getY());
    return width * height;
}

double Rectangle::perimeter() {
    int width = abs(topRight.getX() - bottomLeft.getX());
    int height = abs(topRight.getY() - bottomLeft.getY());
    return 2 * (width + height);
}

int main(void) {

    Point2D center(2, 3);
    Circle c1(center, 5.0);
    cout << "Circle c1: ";
    c1.print();
    cout << "\nArea of c1: " << c1.area() << endl;

    Point2D topRight(4, 6), bottomLeft(1, 2);
    Rectangle r1(topRight, bottomLeft);
    cout << "Rectangle r1: Top-Right = ";
    r1.getTopRight().print();
    cout << ", Bottom-Left = ";
    r1.getBottomLeft().print();
    cout << "\nArea of r1: " << r1.area() << endl;
    cout << "Perimeter of r1: " << r1.perimeter() << endl;

    return 0;
}