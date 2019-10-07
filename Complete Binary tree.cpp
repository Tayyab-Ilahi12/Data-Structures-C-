#include<iostream>
#include<cmath>
using namespace std;


struct node
{
	int data;
	node *left;
	node *right;
};
class cbt
{
	private:
		node *temp;
		node *temp1;
		int h;
		int lh;	
		int count;
	public:
		node *root;
		int number;
		cbt()
		{
			temp = NULL;
			temp1 = NULL;
			root = NULL;
			h = lh = count = number = 0;
		}
		void insert(node *temp)
		{
			if(root == NULL)
			{
				temp = new node;
				temp->data = number;
				temp->left = NULL;
				temp->right = NULL;
				count++;
				h++;
				root = temp;
	//			cout<<root->data;
				delete temp;
				return;
			}
			////////////// /// first Condition
			if(temp->left != NULL)
			{
				insert(temp->left);
				return;
			}
			if(count == (pow(2,h)-1))
			{
				temp->left->data = number;
				temp->left->right = NULL;
				temp->left->left = NULL;
				count++;
				h++;
				return;
			}
			////////////////////// 2nd Condition
			if(temp->left != NULL && temp->right == NULL)
			{
				temp->right->data = number;
				temp->right->right = NULL;
				temp->right->left = NULL;
				count++;
				lh++;
				return;	
			}
			
			
			
		}
		
/////////////////////////////////////////////////		
		void inorder(node *temp)
		{
			if(temp == NULL)
			{
				cout<<"tree is empty"<<endl;
			}
			if(temp->left != NULL)
			{
				inorder(temp->left);
			}
			cout<<temp->data<<" ";
			cout<<"Height at this point is: "<<h;
			cout<<endl;
			if(temp->right != NULL)
			{
				inorder(temp->right);
			}
		}
	};
	
	
int main()
{
	cbt c;
	cin>>c.number;
	c.insert(c.root);
	cin>>c.number;
	c.insert(c.root);
	//cin>>c.number;
	//c.insert(c.root);
	c.inorder(c.root);
	return 0;
}	
