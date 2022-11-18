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
    cout << "Please enter an integer amount in currency: \n";
    cin >> currency >> EURO >> JapaneseYen >> BritishPound >> VN ;
    switch (currency) {
    case 'a':
    cout << EURO << "is: " << EURO_to_dollar * 'a' * amount << "currency \n"; break;
    case 'b':
	cout << JapaneseYen << "is: " << JapaneseYen_to_dollar * 'b' * amount << "currency \n";  break;
	case 'c':
	cout << BritishPound << "is: " << BritishPound_to_dollar * 'b' * amount << "currency \n";  break;
    case 'd':
    cout << VN << "is: " << VN_to_dollar * 'd' * amount << "currency \n";  break;
    default:
    cout << "Sorry, I can not determine a suitable form of: " << currency << " currency \n";
    }
    return 0;
}

