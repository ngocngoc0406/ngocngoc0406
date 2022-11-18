#include<iostream>
using namespace std;
int main(){
    int yy ,t2 ,dd = 0;
    string mm;
    cout << "Nhap thang: "; cin >> mm;
    cout << "Nhap nam: "; cin >> yy;
    if (mm == "4"|| mm == "6" || mm == "9" || mm == "11"){
        dd = 30;
    }else dd = 31;
    if (mm == "2")
        if((yy % 100 == 0 && yy % 400 == 0)  || (yy % 4 == 0)){
            dd = 29;
        }else dd =28;
    cout  << dd << " Ngay";
}
