//chuyen so thap phan sang nhi phan 
#include <iostream>
using namespace std;
int main()
{
    long dec,rem,i=1,sum=0;
    cout<<"nhap so thap phan :";
    cin>>dec;
    do
    {
        rem=dec%2;
        sum=sum + (i*rem);
        dec=dec/2;
        i=i*10;
    }while(dec>0);
    cout<<"nhi phan cua 1 so da cho la:"<<sum<<endl;
    cin.get();
    cin.get();
 
    return 0;
}
 
