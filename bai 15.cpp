#include <iostream>
using namespace std;
int main()
{
    int count, first_term = 0, second_term = 1, next_term, i;
    cout<<"Nhap v�o so luong c�c so trong chuui Fibonacci"<<endl;
    cin>>count;
    cout<<count<<" so �au ti�n trong day Fibonacci l�: "<<endl;
    for ( i = 0 ; i < count ; i++ )
    {
       if ( i <= 1 )
          next_term = i;
       else
       {
          next_term = first_term + second_term;
          first_term = second_term;
          second_term = next_term;
       }
       cout<<next_term<<endl;
    }
    
}
