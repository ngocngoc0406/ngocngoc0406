#include <iostream>
using namespace std;
main()
{
   int a; cin >> a; // khai b�o v� nh?p v�o gi� tr?
   if(a > 9 && a < 100){ // �i?u ki?n a > 9 v� a < 100
    int b = a / 10; // khai b�o v� g�n gi� tr? cho b
    cout << "s = " << b + (a - 10*b); // in ra m�n h?nh gi� tr? t�nh to�n
   }else cout << "nhap sai"; // in ra m�n h?nh n?u sai �i?u ki?n
}

