#include<iostream>
using namespace std;
int main (){
	 int n;
  long S = 0;
  cout<<"Input number n: ";
  cin>> n;
  for(int i = 1; i <= n; i++)
  {
     S = S + i * i;
  }
 
  cout<<"The sum of 1^2 + 2^2 + ... + " << n << " is: "<< S;
  return 0;
}
