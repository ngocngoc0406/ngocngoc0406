#include <iostream>
using namespace std;
int main()
{
     int n, count, sum = 0;
    cout<<"Nhap v�o n (so luong phan tu dau ti�n can t�nh tong): ";
    cin>>n;
    cout<<"C�c so can t�nh l�: ";
    for(count=1; count <= n; count++)
    //count gan baang 1 neu count nho gon hoac bang n , count tang len 1 don vi
    {
        sum = sum + count;
        //tong bang tong + count 
        cout<<count<<"\t";
    }
    cout<<endl<<"Tong "<<n<<" d�u ti�n l�: "<<sum;
}
