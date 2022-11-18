#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
		for (int i=1;i<=n;i++){
		for (int j=2;j<=n;j++){
			for (int k=3; k<=n;k++){
		    		if(((i*i+j*j)==k*k)){
					if((i<j)&&(j<k)){
						cout<<i<<" "<<j<<" "<<k<<"\n";
					}
	     			}
			}
	    	}
	}
}
