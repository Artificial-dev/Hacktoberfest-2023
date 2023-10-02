// Define a class for the stack
class Stack {
private:
    static const int MAX_SIZE = 100; // Define a maximum size for the stack
    int arr[MAX_SIZE]; // Array to hold stack elements
    int top; // Index of the top element

public:
    // Constructor to initialize the stack
    Stack() {
        top = -1; // Initialize top to -1 (empty stack)
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow. Cannot push more elements." << endl;
            return;
        }
        arr[++top] = value; // Increment top and add the element
    }

    // Function to pop an element from the stack
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow. Cannot pop from an empty stack." << endl;
            return -1; // Return a sentinel value indicating failure
        }
        return arr[top--]; // Return and decrement top
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1; // If top is -1, the stack is empty
    }
};

int main() {
    Stack stack; // Create an instance of the Stack class

    stack.push(10); // Push element 10 onto the stack
    stack.push(20); // Push element 20 onto the stack
    stack.push(30); // Push element 30 onto the stack

    cout << "Popped element: " << stack.pop() << endl; // Pop an element (30)
    cout << "Popped element: " << stack.pop() << endl; // Pop an element (20)

    cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl; // Check if the stack is empty

    return 0;
}
