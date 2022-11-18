#include <iostream>

using namespace std;
//tao ham dung de tim so fibonaci
int fibonaci(int n){
    if(n<0) cout<<"False";//n<0 loai, n=0 va n=1 la so fibonacy
    else if(n==0||n==1) return n;
    else{
        return fibonaci(n-1)+fibonaci(n-2);// so fibonaci cthuc tong quat la Fn-1 + Fn-2
    }
}
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>> n;
    for(int i=0;i<=n; i++){// dung vong lap chay tu i den n
        fibonaci(i);
        cout<<fibonaci(i)<<" ";// kiem thu i va in ra so fibonacy
    }
   
    return 0;
}
