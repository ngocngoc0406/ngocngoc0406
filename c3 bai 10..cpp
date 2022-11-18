#include <iostream>
using namespace std;
main()
{
   int a; cin >> a; // khai báo và nh?p vào giá tr?
   if(a > 9 && a < 100){ // ði?u ki?n a > 9 và a < 100
    int b = a / 10; // khai báo và gán giá tr? cho b
    cout << "s = " << b + (a - 10*b); // in ra màn h?nh giá tr? tính toán
   }else cout << "nhap sai"; // in ra màn h?nh n?u sai ði?u ki?n
}

