#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;
	bool LTH;
	bool RTH;
};

class imp
{
	node *dummy;
	node *root;
	node *n;
	int d = 0;
public:
	imp()
	{
		dummy = new node;
		dummy->LTH = false;
		dummy->RTH = false;
		
		dummy->right = dummy;
		dummy->data = 6553;   // To check whether it is dummy or other node value
		
		root = NULL;
	}

	node* dummyaddress()    //   Function returns the dummy address
	{
		return dummy;
	}

	node* insert(node *temp, int data)
	{

		if (root == NULL)
		{

			
			root = new node;
			root->LTH = true;
			root->RTH = true;
			
			root->data = data;
			root->left = dummy;
			root->right = dummy;
			
			temp = root;
			dummy->left = root;
			
			
			return root;

		}



		if (temp->data > data)
		{
			if (temp->LTH)
			{

				n = new node;
				n->LTH = true;
				n->RTH = true;
				
				n->data = data;
				n->left = temp->left;
				n->right = temp;
				
				
				
				temp->LTH = false;
				temp->left = n;
				temp = temp->left;
				
				
				return temp;
			}

			else
			{
				insert(temp->left, data);
			}

		}


		if (temp->data < data)
		{
			if (temp->RTH)
			{

				n = new node;
				n->LTH = true;
				n->RTH = true;
				
				n->data = data;
				n->right = temp->right;
				n->left = temp;
				
				temp->RTH = false;
				temp->right = n;
				temp = temp->right;
				
				
				return temp;

			}

			else
			{
				insert(temp->right, data);
			}

		}
	}

	


	node* nextInorde(node* p)   // Function to get the next Inorder value of tree
	{
		if (p->RTH)
			return(p->right);
		else
		{
			p = p->right;
			while (!p->LTH)
				p = p->left;
			return p;
		}
	}

	void fastInorder(node* p)  // Function to traverse the tree in Inordered manner
	{

		while ((p = nextInorde(p)) != dummy)
			cout << p->data<<" ";
	}
		
};


int main()
{
	imp bst;
	node *r = NULL;
	node *start = NULL;
	start = bst.dummyaddress(); // Get the address of Dummy
	r = bst.insert(r, 14);     // r contain the root address
	bst.insert(r, 4);
	bst.insert(r, 3);
	bst.insert(r, 9);
	bst.insert(r, 7);
	bst.insert(r, 5);
	bst.insert(r, 15);
	bst.insert(r, 18);
	bst.insert(r, 16);
	bst.insert(r, 20);
	bst.fastInorder(start);  //  Inordered traversal
}
