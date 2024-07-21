#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct {
    int* arr;
    int front;
    int rear;
    int capacity;
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* pst = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    pst->arr = (int*)malloc(sizeof(int) * (k + 1));
    pst->front = pst->rear = 0;
    pst->capacity = k + 1;
    return pst;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    assert(obj);
    return obj->front == obj->rear;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    assert(obj);
    return (obj->rear + 1) % obj->capacity == obj->front;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    assert(obj);
    if (!myCircularQueueIsFull(obj)) {
        obj->arr[obj->rear] = value;
        obj->rear = (obj->rear + 1) % obj->capacity;
        return true;
    }
    return false;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    assert(obj);
    if (!myCircularQueueIsEmpty(obj)) {
        obj->front = (obj->front + 1) % obj->capacity;
        return true;
    }
    return false;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    assert(obj);
    if (myCircularQueueIsEmpty(obj))
        return -1;
    else
        return obj->arr[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    assert(obj);
    if (myCircularQueueIsEmpty(obj))
        return -1;
    else
        return obj->arr[(obj->rear - 1 + obj->capacity) % obj->capacity];
}


void myCircularQueueFree(MyCircularQueue* obj) {
    assert(obj);
    free(obj->arr);
    free(obj);
    obj = NULL;
}

int main() {
    MyCircularQueue* queue = myCircularQueueCreate(3);
    printf("EnQueue 1: %d\n", myCircularQueueEnQueue(queue, 1)); // true
    printf("EnQueue 2: %d\n", myCircularQueueEnQueue(queue, 2)); // true
    printf("EnQueue 3: %d\n", myCircularQueueEnQueue(queue, 3)); // true
    printf("EnQueue 4: %d\n", myCircularQueueEnQueue(queue, 4)); // false
    printf("Rear: %d\n", myCircularQueueRear(queue)); // 3
    printf("IsFull: %d\n", myCircularQueueIsFull(queue)); // true
    printf("DeQueue: %d\n", myCircularQueueDeQueue(queue)); // true
    printf("EnQueue 4: %d\n", myCircularQueueEnQueue(queue, 4)); // true
    printf("Rear: %d\n", myCircularQueueRear(queue)); // 4
    printf("Front: %d\n", myCircularQueueFront(queue)); // 2
    myCircularQueueFree(queue);
    return 0;
}
