//C++ program to convert a decimal to 
//a hex and octal number

#include "std_lib_facilities.h"

//class for addresses
class Address
{
public: 
	string first, last, number, email; 
	Address(const string a, const string b, const string c, const string d) :
		first(a), last(b), number(c), email(d) {};
};

vector<Address>book;

void AddressBook()
{
	book.push_back(Address("Nick","Maclaren",
		"01223 334761","nmm1@cam.ac.uk"));
	int a=0, b=0, c=0, d=0;
	for(int i=0; i<int(book.size()); i++)
	{
		if(int(book[i].first.size()) > a) a=int(book[i].first.size());
		if(int(book[i].last.size()) > b) b=int(book[i].last.size());
		if(int(book[i].number.size()) > c) c=int(book[i].number.size());
		if(int(book[i].email.size()) > d) d=int(book[i].email.size());
	}
	for(int i=0; i<int(book.size()); i++)
	{
		cout << book[i].first << " " << book[i].last;
		for(int j=0; j<a+b+3-int(book[i].first.size())-
			int(book[i].last.size()); j++) {
			cout << " ";
		}
		for(int j=0; j<c-int(book[i].number.size()); j++) {
			cout << " ";
		}
		for(int j=0; j<d+2-int(book[i].email.size()); j++) {
			cout << " ";
		}
		cout << book[i].email << endl;
	}
}

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

	AddressBook();
	
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