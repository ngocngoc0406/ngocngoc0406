#include<iostream>
#include<math.h>

using namespace std;

void showMenu(){
	
	cout<<"1.Armstrong\n2.Prime\n3.Finish\n ";
}

bool checkNT(int n) {

	if(n<2) return false;
	
	for(int i=2;i<sqrt(n);i++){
		
		if(n%i==0) return false;
		
	}
	return true;
}

bool checkA(int n){
	int sum=0;
	while(n>0){
	
		sum=sum+pow((n%10),3);
		n/=10;
	}
	if(n==sum) return true;
	else return false;
	
}

void test(){
	
	int n,number;

	showMenu();
	cout<<"Choose (1,2,3) :\n";cin>>n;
	switch (n){
		case 1:
			cout<<"Input a number :";cin>>number;
			if(checkA(number)) cout<<number<<"is Armstrong";
			else cout<<number<<" is not Armstrong";
			break;
		case 2:
			cout<<"Input a number :";cin>>number;
			if(checkNT(number)) cout<<number<<"is prime";
			else cout<<number<<" is not prime";
			break;
		case 3:
			char s;
			cout<<"Do you want to finish? (c/k) ";
	          cin>>s;
	          if('s'=='c') exit ( 0 );
	          else if('s'=='k') test();
}	
}

int main(){
	 
		   test();      	
	}

