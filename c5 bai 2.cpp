#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int number;
	cout <<"\n enter number =";
	cin>> number;
	int i=2 ;
	int count =0;
	while (i<=sqrt(number))
	{
		if (number%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==0&&number>1){
		cout <<"\n"<<number<<"is prime";
}else{cout <<"\n"<<number<<"not prime";
}
	}

