#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* front;
    Node* rear;

public:
    Queue();
    ~Queue();
    void enqueue(int value);
    void mostrar() const;
};

#endif // QUEUE_H
#include <iostream>
#include "queue.h"

Queue::Queue() : front(nullptr), rear(nullptr) {}

Queue::~Queue() {
    while (front != nullptr) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

void Queue::enqueue(int value) {
    Node* newNode = new Node{value, nullptr};
    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Queue::mostrar() const {
    Node* current = front;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
#include <iostream>
#include "queue.h"

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "Contenido de la cola: ";
    q.mostrar();

    return 0;
}
