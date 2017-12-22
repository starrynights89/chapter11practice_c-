//C++ program to convert a decimal to number 
//to a hex and octal number

#include "std_lib_facilities.h"

//function to convert decimal to octal
void decToOct(int n)
{
	//array to store octal number
	int octalNum[100];

	// counter for octal number array
	int i = 0;
	while (n != 0)
	{
		octalNum[i] = n % 8;
		n /= 8;
		i++;
	}

	//printing octal number array in reverse order
	for (int j = i - 1; j >= 0; j--)
	{
		cout << octalNum[j];
	}
}

//function to convert decimal to hex
void decToHex(int n)
{
	//array to store hexadecimal number
	int hexadecimalNum[100];

	//array to store hexadecimal number array
	int i = 0;
	while (n != 0)
	{
		hexadecimalNum[i] = n % 16;
		n /= 16;
		i++;
	}

	//printing hexadecimal number array in reverse order
	for (int j = i - 1; j >= 0; j--)
	{
		cout << hexadecimalNum[j];
	}
}

int main()
{
	int oct = 1234;
	int hex = 1234;

	decToOct(oct);
	decToHex(hex);

    keep_window_open();
    return 0;
} 