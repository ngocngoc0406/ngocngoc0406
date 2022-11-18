#include <iostream>
#include <math.h>
int main()
{
	   int x, y;
    	int A, B, C, D, E;
	std::cout << "Nhap vao gia tri x:";
	std::cin >> x;
	std::cout << "Nhap vao gia tri y:";
	std::cin >> y;
	A = y + 3;
    	std::cout << "A=" << A;
	B = y - 2;
    	std::cout << "\nB=" << B;
	C = y * 5;
    	std::cout << "\nC=" << C;
	D = x / y;
    	std::cout << "\nD=" << D;
	E = x % y;
       	std::cout << "\nE=" << E;
	return 0;
}


