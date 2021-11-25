#include <bits/stdc++.h>
using namespace std;

struct QNode {
	int info;
	QNode* next;
	QNode(int d)
	{
		info = d;
		next = NULL;
	}
};

struct Queue {
	QNode *depan, *belakang;
	Queue()
	{
		depan = belakang = NULL;
	}

	void enQueue(int x)
	{

		// Create a new LL node
		QNode* temp = new QNode(x);

		// If queue is empty, then
		// new node is front and rear both
		if (depan == NULL) {
			depan = belakang = temp;
			return;
		}

		// Add the new node at
		// the end of queue and change rear
		belakang->next = temp;
		belakang = temp;
	}

	// Function to remove
	// a key from given queue q
	void deQueue()
	{
		// If queue is empty, return NULL.
		if (depan == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		QNode* temp = depan;
		depan = depan->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (depan == NULL)
			belakang = NULL;

		delete (temp);
	}
};

// Driven Program
int main()
{

	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Depan : " << (q.depan)->info << endl;
	cout << "Queue Belakang: " << (q.belakang)->info;
}
