
#include <iostream>
using namespace std;

int main() {
	int arr[10], i, num, n, c=0, pos;
		cout<<"Enter the array size : ";
		cin>>n;
		cout<<"Enter Array Elements : ";
		for(i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		cout<<"Enter the number to be search : ";
		cin>>num;
		for(i=0; i<n; i++)
		{
			if(arr[i]==num)
			{
				pos=i+1;
				cout<<"\nFound at "<<pos;
				break;
			}else{
				cout<<"\nNumber not found at "<<pos;
			}
		}
	return 0;
}
