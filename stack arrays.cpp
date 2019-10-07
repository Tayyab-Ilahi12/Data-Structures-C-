#include<iostream>
#include<string>
using namespace std;
int size;

class st
{
	private:
		char stack[];
		int top;
	public:
		st()
		{
			cin>>size;
		}
		int isEmpty()
		{
			if(top == -1)
			{
				return 1;
			}
			else
				return 0;
		}
		int isFull()
		{
			if(top == size)
			{
				return 1;
			}
			else
				return 0;
		}
		char pop()
		{
			char temp;
			if(isEmpty())
			{
				cout<<"Stack is empty. "<<endl;
			}
			else
			 	temp = stack[top];
			 	top--;
				return temp;
		}
		char push(char c)
		{
			if(isFull())
			{
				cout<<"Stack is FULL. "<<endl;
			}
			else
				++top;
				stack[top] = c;
		}
		void display()
		{
			for(int i = top; i >= 0; --i)
			{
				cout<<stack[i]<<" ";
			}
		}
};

int main()
{
	st s;
	s.push('D');
	s.push('T');
	s.push('p');
	s.display();
	return 0;
}
