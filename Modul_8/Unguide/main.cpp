#include <iostream>
#include "queue.h"
using namespace std;

int main() {

    cout << "Hello world!" << endl;
    cout << "===============================" << endl;
    cout << "     H - T | Queue Info" << endl;
    cout << "===============================" << endl;

    Queue Q1;
    createQueue(Q1);

    printInfo(Q1);

    enqueue(Q1, 5); printInfo(Q1);
    enqueue(Q1, 2); printInfo(Q1);
    enqueue(Q1, 7); printInfo(Q1);
    dequeue(Q1);    printInfo(Q1);
    dequeue(Q1);    printInfo(Q1);
    enqueue(Q1, 4); printInfo(Q1);
    dequeue(Q1);    printInfo(Q1);
    dequeue(Q1);    printInfo(Q1);

    cout << endl << endl;


    cout << "==========================================" << endl;
    cout << "  QUEUE ALTERNATIF 2 (HEAD BERGERAK)" << endl;
    cout << "==========================================" << endl;

    Queue Q2;
    createQueue(Q2);

    printInfo(Q2);
    enqueue2(Q2, 5); printInfo(Q2);
    enqueue2(Q2, 2); printInfo(Q2);
    enqueue2(Q2, 7); printInfo(Q2);

    dequeue2(Q2);    printInfo(Q2);
    dequeue2(Q2);    printInfo(Q2);

    enqueue2(Q2, 4); printInfo(Q2);
    dequeue2(Q2);    printInfo(Q2);
    dequeue2(Q2);    printInfo(Q2);

    cout << endl << endl;


    cout << "==========================================" << endl;
    cout << "    QUEUE ALTERNATIF 3 (CIRCULAR QUEUE)" << endl;
    cout << "==========================================" << endl;

    Queue Q3;
    createQueue3(Q3);

    printInfo(Q3);
    enqueue3(Q3, 5); printInfo(Q3);
    enqueue3(Q3, 2); printInfo(Q3);
    enqueue3(Q3, 7); printInfo(Q3);
    enqueue3(Q3, 8); printInfo(Q3);
    enqueue3(Q3, 9); printInfo(Q3);

    dequeue3(Q3); printInfo(Q3);
    enqueue3(Q3, 4); printInfo(Q3);   // tail berputar
    dequeue3(Q3); printInfo(Q3);
    dequeue3(Q3); printInfo(Q3);
    dequeue3(Q3); printInfo(Q3);

    return 0;
}
