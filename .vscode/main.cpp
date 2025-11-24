/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// Matthew O. Macaraeg

int main()
{
	int num1 = 5; int num2 = 10;
	double num3 = 15.75 ;
	double result = (double) num1 / num2 ;
	bool isCplusplusFun = true ;
//	bool CplusisplusFun = (isCplusplusFun == true);
	string str1 = "C++";
	string strResult = str1 + " is Amazing!!!!";


	cout << boolalpha ;

	cout << "1. The sum of num1 and num2 is: " << num1 + num2 << '\n' ;

	cout << "2. The difference of num1 and num2 is: " << num1 - num2 << '\n';

	cout << "3. The product of num1 and num2 is: " << num1 * num2 << '\n';

	cout << "4. The Quotient of num1 and num2 is: " << result << '\n';

	cout << "5. Both num1 and num2 are even: "<< (num1 == num2) <<  '\n';

	cout << "6. Either num1 or num2 is greater than 10: " << (num1>10||num2 > 10) <<  '\n';
  
	cout << "7. Is C++ Fun ?: " << isCplusplusFun << '\n';

	cout << "8. strResult: " << strResult <<  '\n';

	return 0;
}