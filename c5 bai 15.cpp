#include<iostream>
using namespace std;
int main()
{
  int n, max = 1;
  //su dung dowhile de y�u cau nguoi d�ng so lon hon 0
  //neu n < 0 th� y�u cau nhap lai
  do
  {
    cout<<"\nNhap v�o so nguy�n n lon hon 0: ";
    cin>>n;
    if(n <= 0)
    {
      cout<<"\n So n phai lon hon 0, vui l�ng nhap lai !";
    }
  }while(n <= 0);
  //su dung vong lap for de tim ra uoc so le
  //so s�nh tung uoc so le voi max, neu lon hon max th� g�n cho max
  cout<<"C�c uoc so le cua "<<n<<" l�: ";
  for(int i = 1; i <= n; i++)
  {
    if((n % i == 0) && (i % 2 == 1))
    {
    if(i > max)
    {
      max = i;
    }
    printf("%4d", i);
    }
  }
  cout<<"\nuoc le lon nhat cua %d l�: "<<n<<max;
   
  
}
