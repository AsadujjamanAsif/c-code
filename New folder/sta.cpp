#include <iostream>
#include <stack>

int main() {
    // Creating a stack of integers
    std::stack<int> myStack;

    // Pushing data onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Displaying the elements in reverse order
    std::cout << "Stack elements in reverse order: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
