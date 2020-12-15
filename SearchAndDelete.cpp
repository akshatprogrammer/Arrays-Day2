// Program to search and delete any element.
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter size -> ";
	cin >> n;
	int arr[n]; // array of n size
	
	for(int i=0;i<n;i++)
		cin >> arr[i];  // inputting all elements.
	
	int k;
	cout << "Enter the element to be deleted -> ";
	cin >> k;
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i] == k)
			break;			// if element found then break
	}
	for(int j=i;j<n;j++)
	{
		arr[j] = arr[j+1];  // shift position at left side.
	}
	n = n-1;
	
		for(int i=0;i<n;i++)
			cout << arr[i] << " "; 
	
}
