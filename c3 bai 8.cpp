#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float x,y,a,b,c;
	cout <<"nhap goc";
	cin>>x;
	y=sin(x);
	a=cos(x);
	b=y/a;
	c=a/y;
	cout<<"sin("<<x<<")="<<y;
	cout<<"cos("<<x<<")="<<a;
		cout<<"tan("<<x<<")="<<b;
		cout<<"cot("<<x<<")="<<c;	
		return 0;
		}
