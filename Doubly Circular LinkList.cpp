#include<iostream>
using namespace std;

struct node
{
	int data;
	node *prev;
	node *next;
};

class cl
{
	private:
		node *head;
	public:
		cl()
		{
			head = NULL;
		}
		void insert(int x)
		{
			node *temp = new node;
			temp->data = x;
			if(head == NULL)
			{
				temp->next = temp;
				temp->prev = temp;
				head = temp;
				delete temp;
			}
				node *last = head->prev;
				temp->next = head;
				head->prev = temp;
				temp->prev = last;
				last->next = temp;
				delete temp;
		}
		void insertBegin(int x)
		{
			node *temp = new node;
			temp->data = x;
			if(head == NULL)
			{
				temp->next = temp;
				temp->prev = temp;
				head = temp;
				delete temp;
			}
				node *last = head->prev;
				temp->next = head;
				temp->prev = last;
				head->prev = temp;
				last->next = temp;
				head = temp;
		}
		void atpos(int key, int x)
		{
			node *temp = new node;
			temp->data = x;
			node *t = head;
			while(t->data != key)
			{
				t = t->next;
			}
				temp->next = t->next;
				temp->prev = t;	
				t->next = temp;
				temp->next->prev = temp;
		}
		void display()
		{
			node *temp = head;
			while(temp->next != head)
			{
				cout<<temp->data<<" ";
				temp= temp->next;
			}
			cout<<temp->data;
		}
};






int main()
{
	cl d;
	d.insert(50);
	d.insert(40);
	d.insert(60);
	d.insert(90);
	d.insert(100);
	d.insertBegin(70);
	d.atpos(60 , 12);
	d.display();
	return 0;
}
