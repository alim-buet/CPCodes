/*Conditions of balancing:
  1. number of opening brace should be equal to number of closing brace of same type
  2. but sometimes it will not work like for ')(' number 1 is satisfied but it is not balanced. so we have
     to ensure weather the opening pair is coming at first or not.
  3. again for '[(])' - the opening braces are coming before the closing ones. But yet it is not balanced.
     it would be balance if it was'[()]' -- meaning the opening brace that is coming last must meet its
     counterpart first.
  4. algorithm: we will use a stack to store the opening braces.. while iterating, if we encounter a closing
     brace, we will check wether it is the counter-part of the last opening brace by comparing it with the
     top() element of the stack-- because the last opening brace will be on the top of the list.. if we find
     any sort of anamoly, we will say the expression is not balanced.. if the stack is empty and we encounter a
     closing brace, that too will make the expression unbalanced....     */
#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<pair<char, char>> parantheses;
    parantheses.push_back(make_pair('(', ')'));
    parantheses.push_back(make_pair('{', '}'));
    parantheses.push_back(make_pair('[', ']'));
    string expression;
    cin >> expression;
    cout << expression << endl;
    stack<char> openings;
    int flag = 1;
    for (char brace : expression) {
        if ((brace == parantheses[0].first) || (brace == parantheses[1].first) || (brace == parantheses[2].first)) {
            openings.push(brace);

        }
        else if (((brace == parantheses[0].second) || (brace == parantheses[1].second) || (brace == parantheses[2].second))) {
            if (openings.empty()) {
                flag = 0;
                break;
            }
            else {
                int is = 0;
                for (int i = 0;i < 3;i++) {
                    if ((brace == parantheses[i].second) && (openings.top() == parantheses[i].first)) {
                        is = 1;
                        break;
                    }

                }
                if (is) {
                    openings.pop();
                }
                else {
                    flag = 0;
                    break;
                }
            }
        }





    }
    if (flag) {
        cout << expression << " is a balanced expression..";
    }
    else {
        cout << expression << " is not a balanced expression..";
    }


    return 0;
}