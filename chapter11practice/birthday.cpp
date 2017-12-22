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

int main()
{
	int n = 1234;

	decToOct(n);

    keep_window_open();
    return 0;
} 