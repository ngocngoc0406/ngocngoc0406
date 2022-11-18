#include <iostream>
using namespace std;
int main()
{
     int n, count, sum = 0;
    cout<<"Nhap vào n (so luong phan tu dau tiên can tính tong): ";
    cin>>n;
    cout<<"Các so can tính là: ";
    for(count=1; count <= n; count++)
    //count gan baang 1 neu count nho gon hoac bang n , count tang len 1 don vi
    {
        sum = sum + count;
        //tong bang tong + count 
        cout<<count<<"\t";
    }
    cout<<endl<<"Tong "<<n<<" dâu tiên là: "<<sum;
}
