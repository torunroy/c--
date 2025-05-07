#include <iostream>
#define SIZE 5

using namespace std;

int queue[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
bool isFull() {
    return ((rear + 1) % SIZE == front);
}

// Check if the queue is empty
bool isEmpty() {
    return (front == -1);
}

// Add element to the queue
void enqueue(int element) {
    if (isFull()) {
        cout << "Queue is full\n";
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = element;
    cout << "Inserted: " << element << endl;
}

// Remove element from the queue
int dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return -1;
    }

    int element = queue[front];

    if (front == rear) {
        front = rear = -1; // Queue becomes empty
    } else {
        front = (front + 1) % SIZE;
    }

    return element;
}

// Display the queue
void display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // Queue should be full here

    display();

    cout << "Dequeued: " << dequeue() << endl;
    cout << "Dequeued: " << dequeue() << endl;

    enqueue(60);
    enqueue(70); // Should wrap around

    display();
    

    return 0;
}
