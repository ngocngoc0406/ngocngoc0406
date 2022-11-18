#include <iostream>
using namespace std;

int main()
{
	int h,m,ketqua;
	cout<<"Nhap vao so gio: ";
	cin>>h;
	cout<<"Nhap vao so phut: ";
	cin>>m;
	ketqua=h*60+m;
	cout<<"Doi ra duoc " << ketqua <<" phut";
	return 0;
}
