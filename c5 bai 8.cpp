#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  //khai báo bien
  long temp, n;
  int P = 1;
  //su dung dowhile ðe yêu cau ngoui dùng nhap vào só lon hõn 0
  //neu n < 0 thi yêu cau nhap lai
  do
  {
    cout<<"\nNhap vao so ngguyen lon hon 0: ";
    cin>>n;
    if(n <= 0)
    {
      cout<<"\n So n phai lon hon 0, vui long nhap lai !";
    }
  }while(n <= 0);
  //gán bien n cho temp, ta se su dung temp ðe dem cac chu so
  temp = n;
  while(temp != 0)
  {
     P = P * (temp % 10);
     temp = temp / 10;
  }
  cout<<"\nTích cua cac chu so cua "<<n<<" là: "<< P;
 
  cout<<"\n--------------------------------------\n";
 
}
