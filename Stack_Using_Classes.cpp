// Implementation of Stacks using classes
#include <bits/stdc++.h>
using namespace std;

// Definition of the Stack class
class Stack {
private:
    int top;           
    int arr[100];     

public:
    // Constructor initializes top to -1 (empty stack)
    Stack() : top(-1) {}

    bool isEmpty() {
        return top == -1;
    }

    
    bool isFull() {
        return top == 99;
    }

    
    void push(int x) {
        if (!isFull()) {
            arr[++top] = x;  /
        } else {
            cout << "Stack Overflow\n";  
        }
    }

    
    int pop() {
        if (!isEmpty()) {
            return arr[top--];  
        } else {
            cout << "Stack Underflow\n";  
            return -1;  
        }
    }

  
    int peek() {
        return (isEmpty()) ? -1 : arr[top];
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; --i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};


int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();    
    cout <<"Top element: "<< s.peek() << endl; 
    cout <<"Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;
    s.display(); 
    s.pop();  
    s.pop();  

    return 0;
}
