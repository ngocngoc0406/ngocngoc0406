#include <iostream>
using namespace std;
#define nln '\n'  
int main() 
{
	float  a ;
	cout <<"nhap a " ;
	cin >> a; 
	
	if (a>=8.5)
	cout<<("grade A")<<nln;
	else if (7<=a && a<8.5) 
	cout<<("grade B ") <<nln;
	else if (5.5<=a && a<=7) 
	cout <<("grade C")<<nln ;
	else if (4<=a && a <5.5) 
	cout<< ("grade D ")<<nln;
	else
	cout<< ("grade F ")<<nln ;
		return 0; 

	

}
