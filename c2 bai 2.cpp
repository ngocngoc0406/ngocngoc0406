#include <bits/stdc++.h>
using namespace std;
int main()
{
	 double tax, tip, tbill, meal_cost=88.67;
	 tax = meal_cost *.0675;
	 tip = (meal_cost +tax) ;
	 tbill = meal_cost +tax+tip ;
	 cout <<"meal cost +$" <<meal_cost;
	 cout <<"tax amount =$"<<tax;
	 cout<<"tip amount =$"<<tip;
	 cout<<"total bill=$"<<tbill;
	 return 0;
}
