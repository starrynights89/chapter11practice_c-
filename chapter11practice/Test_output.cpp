//C++ program to convert a decimal to 
//a hex and octal number

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
	//char array to store hexadecimal number
	char hexadecimalNum[100];

	//counter for hexadecimal number array
	int i = 0;
	while (n != 0)
	{
		//temporary variable to store remainder
		int temp = 0;

		//storing remainder in temp variable
		temp = n % 16;

		//check if temp < 10
		if(temp < 10)
		{
			hexadecimalNum[i] = temp + 48;
			i++;
		}
		else
		{
			hexadecimalNum[i] = temp + 55; 
			i++;
		}
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
	int birthyear = 1989;
	int age = 28; 
	
	//print birth year
	cout << "\tBirth year in decimal: " << birthyear << '\n';
	cout << "\tBirth year converted to octal: "; 
	decToOct(birthyear);
	cout << "\tBirth year converted to hexadecimal: ";
	decToHex(birthyear);

	//print age
	cout << "\tAge in decimal: " << age << '\n';
	cout << "\tAge converted to ocal: ";
	decToOct(age);
	cout << "\tAge converted to hexadecimal: ";
	decToHex(age);	

    keep_window_open();
    return 0;
} 