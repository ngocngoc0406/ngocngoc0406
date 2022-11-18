#include<iostream>

using namespace std;

int main()
{
	int i;
	
	cout << "\nThe ASCII Values of all the Characters are\n";
	
	for(i = 48; i <= 127; i++)
	{
		cout << "The ASCII value of " << (char)i << " = " << i << endl;
	}
		
 	return 0;
}
