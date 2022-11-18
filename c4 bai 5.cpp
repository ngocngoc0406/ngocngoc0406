#include <iostream>
using namespace std;

int main()
{
    float l1, l2, w1, w2, rectangle1, rectangle2;
    cout << endl;
    cout << " The length of the first rectangle: ";
    cin >> l1;
    cout << " The width first: ";
    cin >> w1;
    cout << " The length of the second rectangle: ";
    cin >> l2;
    cout << "The width second: ";
    cin >> w2;
    cout << endl;
    rectangle1 = l1 * w1;
    rectangle2 = l2 * w2;
    if (rectangle1 > rectangle2)
        cout << "Area for rectangle 1 is greater." << endl;
    else if (rectangle1 < rectangle2)
        cout << "Area for rectangle 2 is greater." << endl;
    else if (rectangle1 == rectangle2)
        cout << "Area for both rectangles is the same." << endl;
    cout << endl;
    return 0;
}
