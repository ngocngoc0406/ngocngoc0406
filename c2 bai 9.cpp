#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a,b,c;
	cout << "Nhap vao goc thu nhat: ";
	cin >> a;
	double k=(a-int(a))*100;
	a=int(a)*60+k;
	cout <<"Nhap vao goc thu hai: ";
	cin >> b;
	double h=(b-int(b))*100;
	b=int(b)*60+h;
	c = 180*60 - a - b;
	int x,y;
	x= int(c)/60;
	y=int(c)%60;
	cout <<"Goc thu ba bang "<< x <<" do "<<y <<" phut";
	return 0;
}
