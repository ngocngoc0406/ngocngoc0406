#include <iostream>
using namespace std;

int main() 
{
     int n, s = 0;
 cout << "Nhap so N = ";
 cin >> n;
   for(int i = 1; i <= n; i++)
     if(i % 2 != 0)
      s += i;
 cout << "Tong S = 1 + 3 + 5 + ... + N = " << s;
 return 0;
}
