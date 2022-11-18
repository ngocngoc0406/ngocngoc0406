#include<iostream>
using namespace std;
int main()
{
  int n;
  float S;
  S = 0;
  cout <<"s=";
  do
  {
    cout<<"\nNhap vào so n: ";
    cin>>n;
    if(n < 1)
      {
      cout<<"\nSo n phai lon hon hoac bang 1, vui long nhap lai !";
      }
  }while(n < 1);
  
  for(int i = 1; i <= n; i++){
    S = S + (float)i * (i + 1);
  }
  for (int i=1;i<n-1;i++){
  	cout << i << "."<< i+1<<"+";
  }
  cout<< "n""=" << S;

}
