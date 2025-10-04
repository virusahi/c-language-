// Queue implemented using Array
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100  // Maximum number of elements in the queue

// Define Queue structure using typedef
typedef struct {
    int arr[MAX_SIZE];  // Array to store queue elements
    int front;          // Index of the front element
    int rear;           // Index of the rear element
} Queue;

// Initialize the queue
void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is empty
bool isQueueEmpty(Queue *q) {
    return q->front == -1;
}

// Check if the queue is full
bool isQueueFull(Queue *q) {
    return q->rear == MAX_SIZE - 1;
}

// Enqueue (add) an element to the queue
void enqueue(Queue *q, int value) {
    if (isQueueFull(q)) {
        printf("Queue Overflow!\n");
        return;
    }

    if (isQueueEmpty(q)) {
        // First element being inserted
        q->front = 0;
    }

    q->arr[++q->rear] = value;
    printf("Enqueued %d into the queue!\n", value);
}

// Dequeue (remove) an element from the queue
int dequeue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue Underflow!\n");
        return -1;  // Invalid value
    }

    int dequeued = q->arr[q->front++];

    // If the queue becomes empty after dequeuing
    if (q->front > q->rear) {
        q->front = q->rear = -1;
    }

    printf("%d dequeued from the queue!\n", dequeued);
    return dequeued;
}

// Peek at the front element (without removing it)
int peek(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->arr[q->front];
}

// Print all elements in the queue
void printQueue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements (front to rear): ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

// Driver function to test the queue
int main() {
    Queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printQueue(&q);

    printf("Front element is: %d\n", peek(&q));

    dequeue(&q);
    printQueue(&q);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);  // Trying to dequeue from an empty queue

    return 0;
}
