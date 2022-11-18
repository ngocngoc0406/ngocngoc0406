#include<iostream>
using namespace std;
#include<math.h>
#define MAX 100
/* hàm nh?p các ph?n t? trong m?ng */
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
/* hàm xuat cac phan tu trong mang */
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
/* hàm main() de goi các hàm dã viet ? trên */
int main()
{
  //khai báo bien n là so ph?n tu cua mang
  int n;
  int a[MAX];
  //goi các hàm nhap xuat dã viet o trên
  nhap(a, n);
  xuat(a, n);
  cout<<"\nCác giá tri le trong mang là: : ";
  lietkele(a, n);
 
  cout<<"\n-----------------------------------------\n";
  
}
