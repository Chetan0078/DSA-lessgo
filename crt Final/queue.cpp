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

class Queue {
private:
    Node* frontNode;
    Node* rearNode;
    int count;

public:
    Queue() {
        frontNode = nullptr;
        rearNode = nullptr;
        count = 0;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (rearNode == nullptr) {  
            frontNode = rearNode = newNode;
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        Node* temp = frontNode;
        frontNode = frontNode->next;
        if (frontNode == nullptr)
            rearNode = nullptr;  
        delete temp;
        count--;
    }

    int front() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;  
        }
        return frontNode->data;
    }
    bool isEmpty() {
        return frontNode == nullptr;
    }

    int size() {
        return count;
    }
};
int main() {
    Queue q;
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl;  

    q.dequeue();
    cout << "Front element after dequeue: " << q.front() << endl;  

    cout << "Queue size: " << q.size() << endl;  

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;  

    q.dequeue();
    q.dequeue();
    cout << "Is queue empty after removing all? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
