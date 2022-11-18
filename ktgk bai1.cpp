#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	double sum=0;
	cout<<"Nhap n: ";
	cin>>n;
	for (int i=1; i<=n;i++){
		sum+=1/(pow(i,2));
	}
	cout<<"Ket qua: Sum="<<sum;
	
	
}
