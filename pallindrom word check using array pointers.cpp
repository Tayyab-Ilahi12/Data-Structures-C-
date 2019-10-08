#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    char * str;
    int length;
    cin>>length;
    str = new char[length];
    bool isPalindrome = true;
 
    for(int i = 0;i<length;i++)
	{
		cin>>*(str + 1);
	}
 
    length = sizeof(str);
 
    for (int i = 0; i < (length / 2); i++)
    {
        if (*(str + i) != *(str + (length - 1) - i))
            isPalindrome = false;
    }
 
    if (isPalindrome == true)
        cout << " is a palindrome" << endl;
 
    else
        cout << " is not a palindrome" << endl;
 
//new text begins here
    return 0;
//new text ends here
}
