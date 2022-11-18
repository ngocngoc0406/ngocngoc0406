#include <iostream>
using namespace std;
// tao ham tinh chu vi hinh chu nhat
void ChuViHCN(int a, int b){
  //khai báo bien p la chu vi hcn
  int P;
  //tính chu vi hinh chu nhat
  P = (a + b) * 2;
  //hien thi chu vi ra man hinh
  cout<<"\nChu vi hcn la: "<<P;
}
/*Tao ham tinh dien tich hcn*/
void DienTichHCN(int a, int b){
  //khai báo bien s la dien tich hcn
  int S;
  //tính dien tich hinh chu nhat
  S = a * b;
  //hien thi ket qua ra man hinh
  cout<<"\nDien tich hcn là: "<<S;
}
 
int main(){
  //khai báo hai bien chieu dai va chieu rong
  int a, b;
  //nhap chieu dai va chieu rong
  cout<<"Nhap chieu  dai a: ";
  cin>>a;
  cout<<"Nhap chieu rong b: ";
  cin>>b;
  //ham chu vi va dien tich
  ChuViHCN(a, b);
  DienTichHCN(a, b);

  return 0;
}
