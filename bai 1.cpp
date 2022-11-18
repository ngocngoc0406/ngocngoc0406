//  chuyen co so 2 sang 10 bang c++
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, k, s = 0;
    cout << "Nhap n: ";
    cin >> n;
    i = 0;
  
  while (n > 0)
    {
    	
        k = n % 10;
        // pow(2, i): 2 mu i
        s = s + k * pow(2, i); 
        n = n / 10;
        i++;
    }
    cout << "So thap phan la: " << s;
    return 0;
}
