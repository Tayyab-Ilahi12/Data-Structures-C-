#include<iostream>
using namespace std;

class abc
{
	int *front;
	int *rare;
	int *arr;
	int *t;
	int current;
	int cp;
	int max;

public:
	abc()
	{
		cp = 0;
		cout << "Enter the size of Queue: ";
		cin >> max;
		arr = new int[max];
		front = NULL;
		current = 0;
	}
	void enqueue()
	{
		if (front == NULL)
		{
			front = arr;
			cin >> *front;
			rare = front;
			current++;
			cp = current;
		}
		else if (current!=max||cp!=max)
		{
			rare++;
			current++;
			cp = current;
			cin >> *rare;
			t = rare;
			t++;
		}
		else if (cp == 0)
		{
			rare = arr;
			front = rare;

		}
		else
		{
			cout << "Queue Overflow" << endl;
		}
	}

	void dequeue()
	{
		if (front != (t))
		{
			
			
			cp--;
			cout << *front << " ";
			front++;
		}
		else 
		{
			cout << "Queue UnderFlows" << endl;
		}
	}
};
int main()
{
	abc a;
	a.enqueue();
	a.enqueue();
	a.enqueue();
	a.enqueue();
	a.dequeue();
	a.dequeue();
	a.dequeue();
	a.dequeue();
	a.enqueue();
	a.enqueue();
	a.enqueue();
	a.enqueue();
	a.dequeue();
	a.dequeue();
	a.dequeue();
	a.dequeue();
}
