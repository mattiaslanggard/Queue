#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    // NULL
    Queue<int> numberQueue = Queue<int>();

    // Enqueue several numbers to the queue
    numberQueue.Enqueue(35);
    numberQueue.Enqueue(91);
    numberQueue.Enqueue(26);
    numberQueue.Enqueue(78);
    numberQueue.Enqueue(44);
    numberQueue.Enqueue(12);

    // list the element of queue
    while (!numberQueue.IsEmpty())
    {
        // Get the front element
        cout << *numberQueue.Front() << " - ";

        // Remove the front element
        numberQueue.Dequeue();
    }
    cout << "END" << endl;

    // An other way to do the loop
    /*while (numberQueue.Front()!=nullptr)
    {
        // Get the front element
        cout << *numberQueue.Front() << " - ";

        // Remove the front element
        numberQueue.Dequeue();
    }
    cout << "END" << endl;
    */
    return 0;
}
