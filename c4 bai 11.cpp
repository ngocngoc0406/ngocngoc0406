#include <iostream>
using namespace std;
#include <fstream>
std::ifstream fileInput("C:/Users/ADMIN/Desktop/my_document.txt");
int main(){
	float a, b, c;
	cin >> a >> b >> c;
	if ((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0))
	{
		cout << "a,b,c la canh cua mot tam giac" <<endl;
	if ((a==b)&&(b==c)){
		cout << "tam giac abc la tam giac deu" <<endl;
	}
	else if ((a==b)|(b==c)|(a==c)){
		cout << "tam giac abc la tam giac can" << endl;
	}
	else if ((a*a==b*b+c*c)|(c*c==b*b+a*a)|(b*b==a*a+c*c))
	{
		cout <<"tam giac abc la tam giac vuong" <<endl;
	}
	else
	{
		cout <<"tam giac abc la tam giac thuong" <<endl;
	}
}
return 0;
}
