#include<iostream>
using namespace std;
int main()
{
  int i, n, temp;
  int max = 0;
  
  do
  {
    cout<<"\nNhap v�o so nguy�n duong n: ";
    cin>>n;
  }while(n < 0 && cout<<"\nSo n phai lon hon hoac bang 0!!");
  temp = n;
  //n?u n = 0 th� max = 0
  if(n == 0)
    max = 0;
 
  do
  {
    i = n % 10;
    if(i > max)
    {
      max = i;
    }
  }while(n /= 10);
  cout<<"\nChu so lon nhat trong "<<temp<<" l�: "<<max;
 
  cout<<"\n-----------------------------------\n";
 
}
