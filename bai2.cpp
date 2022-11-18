#include <iostream>
using namespace std;
int main()
{
    string number;
    cout << "Nhap so can chuyen doi: ";
    // nhap so can chuyen doi
    cin >> number;
    // chuyen doi
    int result = 0;
    for (int i = 0; i < number.length(); i++)
    {
        //khai b�o bien chua gia tri cua tung ki tu 
        int item = 0;
        //neu ki tu la chu thi chuyen thanh so d�ng ascii
        //vi du: 'A' = 65, 'B' = 66, 'C' = 67
        if (number[i] >= '0' && number[i] <= '9')
        {
            //chuyen ki tu thanh so 
            item = number[i] - '0';
        }
        //neu ki tu la chu thi chuyen thamh so d�ng ascii
        //vidu:'A' - '0' = 65 - 48 = 17  (Ma ASCII cua 'A' l� 65, ma ASCII cua '0' l� 48)
        else if (number[i] >= 'A' && number[i] <= 'Z')
        {
            //chuyen ki tu thanh so 
            //V� du: 'A' - '0' - 7 = 17
            item = number[i] - '0' - 7;
        }
        //t�nh gi� tri cua ki tu do bang cach nhan voi 16 mu do dai cua chuoi tru di ki tu do
        result = result * 16 + item;
    }
    //in ra ket qua
    cout << number << " co so 16 = " << result << " co so 8";
    return 0;
}


 

