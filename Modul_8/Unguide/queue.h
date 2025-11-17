#ifndef QUEUE_H
#define QUEUE_H

#define MAX_QUEUE 5
typedef int infotype;

struct Queue {
    infotype info[MAX_QUEUE];
    int head;
    int tail;
};

//Alternatif 1
void createQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);

//Alternatif 2 
void enqueue2(Queue &Q, infotype x);
infotype dequeue2(Queue &Q);

//Alternatif 3
void createQueue3(Queue &Q);
bool isFullQueue3(Queue Q);
void enqueue3(Queue &Q, infotype x);
infotype dequeue3(Queue &Q);

void printInfo(Queue Q);

#endif
