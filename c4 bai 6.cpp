#include <iostream>
using namespace std;
   int main(){
   	
    float a, b, c, x1, x2;
    cin >> a >> b >> c;
    float delta = b*b - 4*a*c;
    if(delta<0)
	{
        cout << "phuong trinh vo nghiem" <<endl;
    }
    else if(delta==0)
	{
        x1 = x2 = -b/(2*a);
        cout << x1 <<" " <<x2 <<endl;
    }
    else {   
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
        cout << x1 << endl << x2 <<endl;
    }
	return 0;  
}
