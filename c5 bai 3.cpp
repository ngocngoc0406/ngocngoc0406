#include<iostream> 
using namespace std;
int main (){
	int a, n,power, i;
	cout<<"enter number: ";
	cin>>a;
	cout<<"enter exponent: ";
	cin>>n;
	power=1;
	i=1;
	do
	{
		power=power*a;
		i++;
	}
	while(i<=n);
	cout<<a<<"power of"<<n<<"is: "<<power;
	return 0;
}
