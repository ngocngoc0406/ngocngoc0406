#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}
 
int main()
{
    int num1,num2;
 
    cout<<"Nhap v�o so th? nh?t: ";
    cin>>num1;
    cout<<"Nhap v�o so thu hai: ";
    cin>>num2;
   
    cout<<"Truoc khi �oi: \n"<<"So thu nhat = " <<num1<<"\nSo tho hai = "<<num2;
 
    swap(&num1,&num2);
 
    cout<<"\nSau khi �oi: \n"<<"So thu nhat = " <<num2<<"\nSo thu hai = "<<num1;
}
