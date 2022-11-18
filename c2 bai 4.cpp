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
 
    cout<<"Nhap vào so th? nh?t: ";
    cin>>num1;
    cout<<"Nhap vào so thu hai: ";
    cin>>num2;
   
    cout<<"Truoc khi ğoi: \n"<<"So thu nhat = " <<num1<<"\nSo tho hai = "<<num2;
 
    swap(&num1,&num2);
 
    cout<<"\nSau khi ğoi: \n"<<"So thu nhat = " <<num2<<"\nSo thu hai = "<<num1;
}
