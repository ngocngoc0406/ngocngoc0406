#include <iostream>
using namespace std;
// tao ham tinh chu vi hinh chu nhat
void ChuViHCN(int a, int b){
  //khai b�o bien p la chu vi hcn
  int P;
  //t�nh chu vi hinh chu nhat
  P = (a + b) * 2;
  //hien thi chu vi ra man hinh
  cout<<"\nChu vi hcn la: "<<P;
}
/*Tao ham tinh dien tich hcn*/
void DienTichHCN(int a, int b){
  //khai b�o bien s la dien tich hcn
  int S;
  //t�nh dien tich hinh chu nhat
  S = a * b;
  //hien thi ket qua ra man hinh
  cout<<"\nDien tich hcn l�: "<<S;
}
 
int main(){
  //khai b�o hai bien chieu dai va chieu rong
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
