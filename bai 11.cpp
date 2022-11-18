#include <stdio.h>
#include <iostream>
#define pi 3.1415
using namespace std;
 
int main()
{
       int a,b;
    cout << "-----------Tinh DT HCN----------\n";
    cout << "nhap vao 2 canh a, b: " ;
    // nhap chieu dai va chieu rong 
         cin >> a>>b;
    cout << "Dien tich hcn : " << a*b;
 // dien tich bang chieu dai nhan chieu rong 
    cout << "chu vi hcn : "<<(a+b)*2;
// chu vi hinh vuong bang 2 lan chieu dai cong chieu rong 
    cout << "\n-----------Tinh DT HV----------\n";
           cout << "nhap vao 2 canh a = " ;
           // nhap canh hinh vuong 
       cin >> b;
    cout << "Dien tich hinh vuong : " << b*b;
// dien tich hinh vuong bang canh nhan canh
        cout << "chu vi hinh vuog :"<< b*4;
//chu vi hinh vuong bang canh nhan 4
 
    cout << "\n-----------Tinh DT HT----------\n";
         float r;
    cout << "nhap vao ban kinh r = " ;
    // nhap ban kinh 
             cin >> r;
    cout << "dien tich hinh tron la : " << r*r*pi;
// dien tich hinh tron bang ban kinh binh phuong nhan pi
     cout <<"chu vi hinh tron la: "<<2*r*pi;
// chu vi hinh tron bang 2 lan ban kinh nhan pi
	    int  e,f,g,h;
          cout << "tinh dien tich tam giac ";
          cout<<"nhap vao bon canh e,f,g,h:";
          // nhap 3 canh va duong cao cua tam giac 
                cin >> e,f,g,h;
          cout << "dien tich hinh tam giac :"<<1/2*(g*h);
          // dien tich tam giac bang 1 nua day nhan duong cao
    return 0;
}
