#include <iostream>

using namespace std;

template <typename T>
class Stack {
private:
    T* elements;
    size_t capacity;
    size_t currentSize;

public:
    Stack(size_t size) : capacity(size), currentSize(0) {
        elements = new T[capacity];
    }

    ~Stack() {
        delete[] elements;
    }

    // Function to push an element onto the stack
    void push(const T& value) {
        if (currentSize < capacity) {
            elements[currentSize++] = value;
        } else {
            cerr << "Stack is full. Cannot push." << endl;
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (currentSize > 0) {
            --currentSize;
        } else {
            cout << "Stack is empty. Cannot pop." << endl;
        }
    }

    // Function to get the top element of the stack
    T top() const {
        if (currentSize > 0) {
            return elements[currentSize - 1];
        } else {
            cerr << "Stack is empty. No top element." << endl;
            // You might want to handle this case differently based on your needs
            // For simplicity, we are returning a default-constructed object.
            return T();
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return currentSize == 0;
    }

    // Function to get the size of the stack
    size_t size() const {
        return currentSize;
    }
};

int main() {
    size_t numElements;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    Stack<int> intStack(numElements);

    for (size_t i = 0; i < numElements; ++i) {
        int element;
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        intStack.push(element);
    }

    cout << "Elements in the stack:" << endl;
    while (!intStack.isEmpty()) {
        cout << intStack.top() << " ";
        intStack.pop();
    }

    return 0;
}
