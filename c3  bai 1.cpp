#include <iostream>
 
using namespace std;
 
int main() {
     
    char kyTu;
    cout << "Chuong trinh lay gia tri ascii cua ky tu nhap tu ban phim." << endl;
    cout << "Nhan phim ESC de thoat chuong trinh" << endl;
    cout << "-----------------------------------------" << endl;
     
    do {
        cout << "Nhap ky tu: "; 
        cin >> kyTu;
        if (int(kyTu) != 27) {
            cout << "    Ma ASCII cua ky tu " << kyTu << " la " << int(kyTu) << endl;
        } else {
            break;
        }
    } while (kyTu != 27);
 
    return 0;
}
