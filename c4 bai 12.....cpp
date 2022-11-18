#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream inputFile;
	char ch; 
    inputFile.open("bai12.txt");
    ofstream outputFile;
	outputFile.open("ex12.txt");
	while (inputFile >> ch)
	{
		cout << "Enter character: " << ch << endl;
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        	outputFile << ch << " is alphabet" << endl;
    	else if (ch >= '0' && ch <= '9')
        	outputFile << ch << " is digit" << endl;
   		else 
        	outputFile << ch << " is special character" << endl;
	}
	inputFile.close();
    outputFile.close();
    return 0;
}
