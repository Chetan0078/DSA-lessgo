#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* topNode;
    int count;

public:
    Stack() {
        topNode = nullptr;
        count = 0;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
        count++;
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        count--;
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;  // Error value
        }
        return topNode->data;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }

    int size() {
        return count;
    }
};
int main() {
    Stack st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout << "Top element: " << st.top() << endl;  
    st.pop();
    
    cout << "Top element after pop: " << st.top() << endl;  
    
    cout << "Stack size: " << st.size() << endl;  

    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl;  

    st.pop();
    st.pop();
    cout << "Is stack empty after popping all? " << (st.isEmpty() ? "Yes" : "No") << endl; 

    return 0;
}
