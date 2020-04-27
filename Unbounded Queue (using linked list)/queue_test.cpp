/*
The program should use all these methods to make the operations as follows:
1) create a queue containing the numbers given by the user,
2) print the contents of the queue,
3) remove two values from the queue and print them,
4) print the first and the last number,
5) print the number of values in the queue if it is nonempty, or an appropriate message
otherwise,
6) clear the queue.
*/
#include "stdafx.h"
#include <iostream>
#include "unbounded_queue.h"

using namespace std;

int main()
{
	Queue q1;

	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.push(5);

	q1.print(); //1 2 3 4 5
	cout << "Size: " << q1.size() << endl; //5
	cout << "Pop: " << q1.pop() << endl; //1
	cout << "Size: " << q1.size() << endl; //4
	cout << "First: " << q1.front() << endl; //2
	cout << "Last: " << q1.back() << endl; //5
	q1.print(); //2 3 4 5

	Queue q2 = q1;

	q2.print(); //2 3 4 5
	q2.push(6);
	q2.print(); //2 3 4 5 6

	q1 = q2;

	if (q1 == q2)
		cout << "The queues are equal." << endl; //yes

	cout << "Pop: " << q1.pop() << endl; //2
	q1.print(); //3 4 5 6
	q2.print(); //2 3 4 5 6

	q2.clear();
	q1.print(); //3 4 5 6
	q2.print(); //empty
	
    return 0;
}

