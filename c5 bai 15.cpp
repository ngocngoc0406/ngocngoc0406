#include<iostream>
using namespace std;
int main()
{
  int n, max = 1;
  //su dung dowhile de yêu cau nguoi dùng so lon hon 0
  //neu n < 0 thì yêu cau nhap lai
  do
  {
    cout<<"\nNhap vào so nguyên n lon hon 0: ";
    cin>>n;
    if(n <= 0)
    {
      cout<<"\n So n phai lon hon 0, vui lòng nhap lai !";
    }
  }while(n <= 0);
  //su dung vong lap for de tim ra uoc so le
  //so sánh tung uoc so le voi max, neu lon hon max thì gán cho max
  cout<<"Các uoc so le cua "<<n<<" là: ";
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
  cout<<"\nuoc le lon nhat cua %d là: "<<n<<max;
   
  
}
