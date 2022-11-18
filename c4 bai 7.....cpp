#include <iostream>
using namespace std;
int main()
{
	const double EURO_to_dollar = 1.00;
    const double JapaneseYen_to_dollar = 146.09;
    const double BritishPound_to_dollar = 0.86;
    const double VN_to_dollar = 24.840;
    char currency;
    char EURO = 'a';
    char JapaneseYen = 'b';
    char BritishPound = 'c';
    char VN = 'd';
    double amount = 1;
    cout << "Please enter an integer to select currency: \n";
    cout <<" 1 : EURO   \n";
    cout <<" 2 : YEN   \n";
    cout <<" 3 : POUND   \n";
    cout <<" 4 : VND   \n";
    cin >> currency;
    cout << "Please enter an integer amount in currency: \n";
    cin >> amount;
    switch (currency) {
    case 'a':
    cout << amount << " USD is: " << EURO_to_dollar * amount << " EURO \n"; break;
    case 'b':
	cout << amount << " USD is: " << JapaneseYen_to_dollar  * amount << " JapaneseYen \n";  break;
	case 'c':
	cout << amount << " USD is: " << BritishPound_to_dollar * amount << " BritishPound \n";  break;
    case 'd':
    cout << amount << " USD is: " << VN_to_dollar  * amount << " VND  \n";  break;
    default:
    cout << "Sorry, I can not determine a suitable form of: " << currency << " currency \n";
    }
    return 0;
}

