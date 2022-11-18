using namespace std;
int main()
{
	const double EURO_to_dollar = 1.00;
    const double JapaneseYen_to_dollar = 146.09;
    const double BritishPound_to_dollar = 0.86;
    const double VN_to_dollar = 24.840;
    char currency;
    char EURO = '1';
    char JapaneseYen = '2';
    char BritishPound = '3';
    char VN = '4';
    double amount = 1;
    cout <<" 1 : EURO   \n";
    cout <<" 2 : YEN   \n";
    cout <<" 3 : POUND   \n";
    cout <<" 4 : VND   \n";
    cin >> currency;
    cout << "Please enter an integer amount in currency: \n";
    cin >> amount;
    switch (currency) {
    case '1':
    cout << amount << " USD is: " << EURO_to_dollar * amount << " EURO \n"; break;
    case '2':
	cout << amount << " USD is: " << JapaneseYen_to_dollar  * amount << " JapaneseYen \n";  break;
	case '3':
	cout << amount << " USD is: " << BritishPound_to_dollar * amount << " BritishPound \n";  break;
    case '4':
    cout << amount << " USD is: " << VN_to_dollar  * amount << " VND  \n";  break;
    default:
    cout << "Sorry, I can not determine a suitable form of: " << currency << " currency \n";
    }
    return 0;
}
