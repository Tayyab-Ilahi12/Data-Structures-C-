#include<iostream>
using namespace std;

class sorting
{
	private:
		int size1;
		int size2;
		int temp;
	public:
		sorting()
		{
			size1 = 0;
			size2 = 0;
			temp = 0;
		}
		int bubbleSort(int arr[],int n)
		{
			for(int i = 0;i < n-1;i++)
			{
				for(int j = 0;j<n-i-1;j++)
				{
					if(arr[j] > arr[j+1])
					{
						temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
					}
				}
			}
			for(int i = 0;i < n;i++)
			{
				cout<<arr[i]<<" ";
			}
		}
		void selectionSort(int a[],int size)
		{
			for(int i = 0; i < size-1;i++)
			{
				int min = i;
				for(int j = 0; j < size;j++)
				{
					if(a[j] < a[min])
					{
						min = j;
					}
				}
				temp = a[min];
				a[min] = a[i];
				a[i] = temp;
			}
			for(int i = 0;i < size;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		
};


int main()
{
	int size;
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	int arr[size];
	for(int i = 0;i < size;i++)
	{
		cin>>arr[i];
	}	
	sorting s1;
//	s1.bubbleSort(arr,size);
	s1.selectionSort(arr,size);
	return 0;
}
