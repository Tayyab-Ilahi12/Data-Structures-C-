#include<iostream>
using namespace std;

class q
{
	private:
		int arr[];
		int rear,front;
		int size;
	public:
		q()
		{
			arr[size];
			cout<<"Enter size of Q: ";
			cin>>size;
			front = -1;
			rear =  -1;
		}
		void enq(int x )
		{
			if((front == 0 && rear == size-1) || (rear == (front - 1)%(size-1)))
			{
				cout<<"FULL"<<endl;
			}
			else if(front == -1)
			{
				front = rear = 0;
				arr[rear] = x;
			}
			else if(rear == size-1 && front != 0)
			{
				rear = 0;
				arr[rear] = x;
			}
			else
			{
				rear++;
				arr[rear] = x;
			}
		}
		int deq()
		{
			int i;
			if(front == -1 && rear == -1)
			{
				return 0;
				cout<<"Q is empty"<<endl;
			}
			else if(rear == front)
			{
				rear = front = -1;
				cout<<"Element removed is: "<<arr[rear]<<endl;
			}
			else
				i = arr[front];
				cout<<"Element removed is:"<<arr[front]<<endl;
				front++;
				return i;
		}
		int maxx()
		{
			int max = 0;
			if(front != (size-1) && arr[front] > max)
			{
				max = arr[front];
				front = front + 1;
				return maxx();
			}
		}
};



int main()
{
	q d;
	d.enq(40);
	d.enq(50);
	d.enq(60);
	d.enq(70);
	d.enq(80);
	d.deq();
	d.enq(1);
	d.enq(2);
	return 0;
}
