#include<iostream>
using namespace std;
#include<fstream>
std::ifstream fileInput("C:/Users/ADMIN/Desktop/my_document.txt");
int main()
{
    char ch;
    cout << "nhap vao 1 ki tu ";
    cin >> ch;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " la 1 ki tu trong bang chu cai";
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout << ch << " la 1 chu so";
    }
    else
    {
        cout << ch << " la 1 ki tu dac biet";
    }
    return 0;
}
