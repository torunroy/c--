#include <iostream>

class CircularQueue {
private:
    int *queue;
    int front, rear, size, capacity;

public:
    // Constructor to initialize the queue
    CircularQueue(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        this->front = this->rear = -1;
        this->queue = new int[capacity];
    }

    // Destructor to free the memory
    ~CircularQueue() {
        delete[] queue;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (size == 0);
    }

    // Function to check if the queue is full
    bool isFull() {
        return (size == capacity);
    }

    // Function to insert an element into the queue
    void enqueue(int data) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot insert element." << std::endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
            queue[rear] = data;
        } else {
            rear = (rear + 1) % capacity;
            queue[rear] = data;
        }

        size++;
    }

    // Function to delete an element from the queue
    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot delete element." << std::endl;
            return -1;
        }

        int data = queue[front];

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }

        size--;
        return data;
    }

    // Function to display the queue elements
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }

        int index = front;
        for (int i = 0; i < size; i++) {
            std::cout << queue[index] << " ";
            index = (index + 1) % capacity;
        }
        std::cout << std::endl;
    }
};

int main() {
    CircularQueue queue(5);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    std::cout << "Queue elements: ";
    queue.display();

    queue.dequeue();
    queue.dequeue();

    std::cout << "Queue elements after deletion: ";
    queue.display();

    queue.enqueue(6);
    queue.enqueue(7);

    std::cout << "Queue elements after insertion: ";
    queue.display();

    return 0;
}
