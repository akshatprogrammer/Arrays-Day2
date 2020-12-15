// Program to reverse an array
#include<iostream>
using namespace std;
void swap(); // swap function declaration

void swap(int *a,int *b) // function to swap two numbers.
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int n;
	cout << "Enter size -> ";
	cin >> n;
	int arr[n]; // array of n size
	
	for(int i=0;i<n;i++)
		cin >> arr[i];  // inputting all elements.
	
	for(int i=0;i<n/2;i++)
		swap(&arr[i],&arr[n-1-i]);
	
	for(int i=0;i<n;i++)
		cout << arr[i] << " ";
}


