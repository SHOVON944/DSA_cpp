#include <iostream>
using namespace std;

#define NULLPTR 0

void QINSERT(int QUEUE[], int N, int &FRONT, int &REAR, int ITEM)
{
    // 1. [Queue already filled?]
    if ((FRONT == 1 && REAR == N) || (FRONT == REAR + 1))
    {
        cout << "OVERFLOW" << endl;
        return;
    }

    // 2. [Find new value of REAR]
    if (FRONT == NULLPTR)        // Queue initially empty
    {
        FRONT = 1;
        REAR  = 1;
    }
    else if (REAR == N)
    {
        REAR = 1;
    }
    else
    {
        REAR = REAR + 1;
    }
    // [End of If structure]

    // 3. Insert new element
    QUEUE[REAR] = ITEM;

    return;
}

int main()
{
    int N = 5;
    int QUEUE[6];      // 1-based index
    int FRONT = NULLPTR;
    int REAR  = NULLPTR;
    int ITEM;

    // Sample calls (as in algorithm explanation)
    ITEM = 10;
    QINSERT(QUEUE, N, FRONT, REAR, ITEM);

    ITEM = 20;
    QINSERT(QUEUE, N, FRONT, REAR, ITEM);

    ITEM = 30;
    QINSERT(QUEUE, N, FRONT, REAR, ITEM);

    cout << "Queue insertion completed." << endl;

    return 0;
}
