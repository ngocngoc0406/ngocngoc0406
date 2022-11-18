#include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"number of days: ";
	cin>>n;
	cout<<"years: "<< n/365;
	cout<<"\nmonths: "<<(n%365)/30;
	cout<<"\ndays: "<<n%365%30;
	return 0;
}

