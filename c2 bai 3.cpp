#include <iostream>
using namespace std;
int main()
  {
  	double rise_cm, rise_in, rise_mm =3.1 *20;
  	rise_cm = rise_mm*0.1;
  	rise_in = rise_mm*0.393701;
  	cout << rise_cm <<"cm per year";
  	cout << rise_in<<"in per year";
  	return 0;	
  }
