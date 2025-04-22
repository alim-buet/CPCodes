#include<iostream>
#include<string.h>
#include<stack> // stack from standard template library(STL)
using namespace std;
char word[60];
void Reverse(char word[]) {
    int len = strlen(word);
    stack<char> stk;
    for (int i = 0;i < len;i++) {
        stk.push(word[i]);
        

    }
    for (int i = 0;i < len;i++) {
        word[i] = stk.top();
        stk.pop();
    }
}
int main() {
    cout << "Enter a word: ";
    gets(word);
    Reverse(word);
    cout << endl;
    cout << "The reversed word is : " << word << endl;



}