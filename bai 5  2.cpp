// nhap vao ba so in ra so lon nhat
#include <iostream> 
using namespace std;
int main() {

  int a;
    cin >> a;
      cout<<"nhap a";
  int b;
    cin >> b;
       cout<<"nhap b";
  int c;
    cin >>c;
       cout<<"nhap c";
   if (a>b)					
		if (a>c)
			cout<<"a lon nhat";
		else
			cout<<"c lon nhat";
	else 
		if (b>c)
			cout<<"b lon nhat";
		else 
			cout<<"c lon nhat";
	 return 0;
  }		
