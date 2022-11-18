// This program reads data from a file.
 #include <iostream>
 #include <fstream>
 #include <string>
using namespace std;
int main()
 {
 ifstream inputFile;
 string name;

 inputFile.open("lab4.txt");
cout << "Reading data from the file.\n";


 return 0;
 }
