#include<iostream>
using namespace std;
int main(){
	int x,y,kq,A,B,C,D,E;
	cout<<"nhap x va y: ";
	cin>>x>>y;
	A=y+3;
	B=y-2;
	C=y*5;
	D=x/y;
	E=x%y;
	cout<<"Gtri x   Gtri y    Bieu Thuc   Ket Qua\n";
	cout<<x<<"|"<<"        "<<y<<"|"<<"        A=y+3"<<"        A="<<A<<"\n";
	cout<<x<<"|"<<"        "<<y<<"|"<<"        B=y-2"<<"        B="<<B<<"\n";
	cout<<x<<"|"<<"        "<<y<<"|"<<"        C=y*5"<<"        C="<<C<<"\n";
	cout<<x<<"|"<<"        "<<y<<"|"<<"        D=x/y"<<"        D="<<D<<"\n";
	cout<<x<<"|"<<"        "<<y<<"|"<<"        E=x%y"<<"        E="<<E;
	return 0;
	
}

