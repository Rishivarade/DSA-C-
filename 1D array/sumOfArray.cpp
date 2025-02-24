#include<iostream>
using namespace std;

int main()
{
	int sum;
	int arr[5]={1,2,3,4,5};
	for (int i=0; i<=4; i++)
	{
		cout << "Enter Arr ["<<i<< "] : ";
		cin >> arr [i];
	}
	for(int i=0; i<=4; i++)
	{
		sum=sum+arr[i];
	}
	cout << "Total Sum Of all elemte's : "<<sum ;

    return 0;
}