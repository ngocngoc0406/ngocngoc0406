#include <iostream>
#include <fstream>//khai bao thu vien
using namespace std;//khong gian ten
int main()
{
    int number, sum = 0;//khai bao bien
    ifstream inf;//doc du lieu tu file
    inf.open("in4_lab5.txt");//mo file
    ofstream outf;//lay du lieu tu file
    outf.open("out4_lab5.txt");//mo file xuat
    while (inf >> number)//khi dieu kien trong () dun thi thuc hien cac  cau lenh trong {}
    {
        for (int i = 1; i <= number; i++)//vong lap for i=1, dieu kien i<=number, tang i them 1 don vi sau moi lan lap
        {
            sum += (i * i);//sum gan bang sum+i*i
        }
        outf << sum << "\n";//xuat vao file
    }
    inf.close();//dong file
    outf.close();//dong file
    return 0;
}

