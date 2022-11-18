#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j;
    cout << "m="; cin >> m;
    cout << "n="; cin >> n;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cout << "* ";
        }
        cout <<"\n";
    }
    return 0;
}
