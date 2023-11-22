#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::string userIn;
    std::stack<char, std::vector<char>> charStack;

    std::cout << "Please enter some text, preferably with any amount of parentheses.\n";
    std::getline(std::cin, userIn);

    for(char ch : userIn) {
        charStack.push(ch);
    }

    int count = 0;
    while(!charStack.empty()) {
        if(charStack.top() == '(')
            count++;
        if(charStack.top() == ')')
            count--;
        charStack.pop();
    }

    if(count == 0)
        std::cout << "The string has balanced parentheses.\n";
    else
        std::cout << "The string does not have balanced parentheses.\n";
}