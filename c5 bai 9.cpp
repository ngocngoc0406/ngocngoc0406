#include <bits/stdc++.h>
using namespace std;
int xet (int x)
{   int a,s=0;
     a=x;
   while (a>=1)
   {
       s+=pow (a%10,3);
       a/=10;
   }
    if (s==x) return true;
    else return false;
}
int main()
{  
    int m,n;
    cin>>m>>n;
   for (int i=m;i <=n;i++)
     {
         if (xet (i)==true) cout <<i<<" ";
     }

    return 0;
}
