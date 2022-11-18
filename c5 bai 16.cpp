#include<iostream>
using namespace std;
#include<math.h>
#define MAX 100
/* h�m nh?p c�c ph?n t? trong m?ng */
void nhap (int a[], int &n)
{
  // su dung vong lap do...while de nhap cac phan tu trong mang 
  do
  {
    cout<<"\nhap vao so phan tu cua mang  : ";
    cin>>n;
    if(n <= 0 || n > MAX)
    {
      cout<<"\nso phan tu khong hop le vui long kiem tra lai!!!!";
    }
  }while(n <= 0 || n > MAX);
  //su dung vong lap for de nhap cac phan tu trong mang
  for(int i = 0; i < n; i++)
  {
    cout<<"\nNhap a["<<i<<"]: ";
    cin>>a[i];
  }
}
/* h�m xuat cac phan tu trong mang */
void xuat(int a[], int n)
{
  // su dung vong lap for de xuat cac phan tu trong mang
  for(int i = 0; i < n; i++)
  {
    cout<<a[i]<<"\t";
  }
}
/* ham liet ke caac so le trong mang*/
void lietkele(int a[], int n)
{
  //su dung vong lap for de duyet tung phan tu trong mang.so nao chia 2 du 1 thi hien thi
  for(int i = 0; i < n; i++)
  {
    if(a[i] % 2 == 1)
    {
      cout<<a[i]<<"\t";
    }
  }
}
/* h�m main() de goi c�c h�m d� viet ? tr�n */
int main()
{
  //khai b�o bien n l� so ph?n tu cua mang
  int n;
  int a[MAX];
  //goi c�c h�m nhap xuat d� viet o tr�n
  nhap(a, n);
  xuat(a, n);
  cout<<"\nC�c gi� tri le trong mang l�: : ";
  lietkele(a, n);
 
  cout<<"\n-----------------------------------------\n";
  
}
