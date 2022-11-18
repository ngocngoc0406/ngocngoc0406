// nhap vao ba so in ra so lon nhat
#include <iostream> 
using namespace std;
int main() {

  int a,b,c;
      cout<<"nhap vao ba so a,b,c:"<< endl;
      //in ra man hinh cac so a,b,c 
      cin>>a,b,c;
      // nhap vao 3 so a,b,c 
      int max=a;
         if (b>=max )
         {max=b;
		 }
		   if (c>=max)
		   {
		   	max=c;
      }
      cout<<"gia tri lon nhat la" <<endl;
      //in ra man hinh gia tri lon nhat 
      return 0;
  }
