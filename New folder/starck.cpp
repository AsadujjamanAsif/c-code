#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int top;
    int arr[MAX_SIZE];
public:
    Stack() : top(-1) {}

    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow! Cannot push more elements.\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into the stack.\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop from an empty stack.\n";
            return;
        }
        cout << arr[top--] << " popped from the stack.\n";
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();

    stack.pop();
    stack.display();
    stack.pop();
    stack.pop();
    stack.display();

    return 0;
}

