#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  //khai b�o bien
  long temp, n;
  int P = 1;
  //su dung dowhile �e y�u cau ngoui d�ng nhap v�o s� lon h�n 0
  //neu n < 0 thi y�u cau nhap lai
  do
  {
    cout<<"\nNhap vao so ngguyen lon hon 0: ";
    cin>>n;
    if(n <= 0)
    {
      cout<<"\n So n phai lon hon 0, vui long nhap lai !";
    }
  }while(n <= 0);
  //g�n bien n cho temp, ta se su dung temp �e dem cac chu so
  temp = n;
  while(temp != 0)
  {
     P = P * (temp % 10);
     temp = temp / 10;
  }
  cout<<"\nT�ch cua cac chu so cua "<<n<<" l�: "<< P;
 
  cout<<"\n--------------------------------------\n";
 
}
