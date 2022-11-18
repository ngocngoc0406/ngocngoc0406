#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout<<" Enter three angle of a triangle"<<endl;
	cin>>a>>b>>c;
	int sum=a+b+c;
	if(sum==180 && a!=0 && b!=0 && c!=0)
	     {
	        cout<<" The triangle is valid"<<endl;
         }
    else
         {
            cout<<" The triangle is not valid"<<endl;
         }
    return 0;
}
