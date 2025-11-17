#include <iostream>
#include <cstdio>
#include "queue.h"
using namespace std;

//Alternatif 1
void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return (Q.head == -1 && Q.tail == -1);
}

bool isFullQueue(Queue Q) {
    return (Q.tail == MAX_QUEUE - 1);
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh!" << endl;
        return;
    }

    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.tail++;
    }

    Q.info[Q.tail] = x;
}

infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -1;
    }

    infotype x = Q.info[Q.head];

    if (Q.head == Q.tail) {
        Q.head = Q.tail = -1;
    } else {
        for (int i = Q.head; i < Q.tail; i++) {
            Q.info[i] = Q.info[i + 1];
        }
        Q.tail--;
    }

    return x;
}

//Alternatif 2
void enqueue2(Queue &Q, infotype x) {
    if (Q.tail == MAX_QUEUE - 1) {
        cout << "Queue penuh (Alt2)!" << endl;
        return;
    }

    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.tail++;
    }

    Q.info[Q.tail] = x;
}

infotype dequeue2(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong (Alt2)!" << endl;
        return -1;
    }

    infotype x = Q.info[Q.head];

    if (Q.head == Q.tail) {
        Q.head = Q.tail = -1;
    } else {
        Q.head++;
    }

    return x;
}

//Alternatif 3
void createQueue3(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isFullQueue3(Queue Q) {
    return ((Q.tail + 1) % MAX_QUEUE) == Q.head;
}

void enqueue3(Queue &Q, infotype x) {
    if (isFullQueue3(Q)) {
        cout << "Queue penuh (Alt3)!" << endl;
        return;
    }

    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.tail = (Q.tail + 1) % MAX_QUEUE;
    }

    Q.info[Q.tail] = x;
}

infotype dequeue3(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong (Alt3)!" << endl;
        return -1;
    }

    infotype x = Q.info[Q.head];

    if (Q.head == Q.tail) {
        Q.head = Q.tail = -1;
    } else {
        Q.head = (Q.head + 1) % MAX_QUEUE;
    }

    return x;
}

void printInfo(Queue Q) {
    printf("%-3d - %-3d | ", Q.head, Q.tail);

    if (isEmptyQueue(Q)) {
        cout << "empty queue";
    } else {
        for (int i = Q.head; i != Q.tail; i = (i + 1) % MAX_QUEUE) {
            printf("%-3d", Q.info[i]);
        }
        printf("%-3d", Q.info[Q.tail]);
    }

    cout << endl;
}
