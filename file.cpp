// This program writes data to a file.
 #include <iostream>
 #include <fstream>
 using namespace std;

 int main()
 {
ofstream outFile;
 outFile.open("bai 10.txt");

 cout << "Now writing data to the file.\n";

// Write four names to the file.
 

// Close the file
 outFile.close();
 cout << "Done.\n";
return 0;
 }
