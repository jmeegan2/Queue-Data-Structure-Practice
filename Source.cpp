/*
Queue are a type of container adaptors which operate in a first in first out (FIFO) type of 
arrangement. Elements are inserted at the back (end) and are deleted from the front.
*/
/*
queue::push()
push() function is used to insert an element at the back of the queue. The element is added
to the queue container and the size of the queue is increased by 1.
*/
/*
queue::pop()
pop() function is used to remove an element from the front of the queue(oldest element in 
the queue). The element is removed to the queue container and the size of the queue is 
decreased by 1.
*/
//CPP program to illustrate
// Application of push() and pop() function
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	
	//Empty Queue
	queue<int> myqueue;
	myqueue.push(0);
	myqueue.push(1);
	myqueue.push(2);
	//Queue become 0,1,2

	myqueue.pop();
	//Queue becomes 1,2

	//Print contents of queue
	while(!myqueue.empty()) {
		cout << ' ' << myqueue.front();
		myqueue.pop();
	
	}
	
}