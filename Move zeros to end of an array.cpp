// C++ implementation to move all zeroes at 
// the end of array 
#include <iostream> 
using namespace std; 

// function to move all zeroes at 
// the end of array 
int moveZerosToEnd(int arr[], int n) 
{ 
	// Count of non-zero elements 
	int count = 0;
	int i = 0;
	if(i == n)
	{
		count = n;
	}
	else
		count++; i++;
		swap(arr[count], arr[i]);
		
		return moveZerosToEnd(arr,arr[i]);			 
} 

// function to print the array elements 
void printArray(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
} 

// Driver program to test above 
int main() 
{ 
	int arr[] = { 9, 1, 9, 8, 4, 0, 0, 2, 
						7, 0, 6, 0, 9 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	cout << "Original array: "; 
	printArray(arr, n); 

cout<<moveZerosToEnd(arr, n); 

	cout << "\nModified array: "; 
	printArray(arr, n); 

	return 0; 
} 

