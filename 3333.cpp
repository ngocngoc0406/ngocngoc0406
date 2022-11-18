#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n,s=0;
    cout << "nhap n: ";
    cin >> n;
    for (long i=1; i<=n; i++)
    {
        s+=i*(i+1);
    }
    cout << "s=" << s;
}
