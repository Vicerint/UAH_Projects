// Michael Agnew
// CPE 221/01
// Dr. Bahdani
// Project 01
// base_n_to_10 function converting numbers to base 10



#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstring>




using namespace std;

void base_n_to_10();

int main()
{

	base_n_to_10();


	return 0;
}


void base_n_to_10()
{
	// definitions
	string num;
	int base;


	cout << "Input a number no longer than 10 digits: ";
	cin >> num;
	const int maxLength = 10;

	int length = num.length();

	if (length > 10)
	{
		cout << "Error: that number is too long, terminating program...";
	}
	else
	{

		cout << "Insert that number's base: ";
		cin >> base;
		if (base == 10)
		{
			cout << "Your number, " << num << ", is already in base 10." << endl;
		}
		else
		{
			char array[maxLength + 1]; 
			strncpy_s(array, num.c_str(), maxLength); 
			array[maxLength] = '\0';
			int expo = length - 1;
			int sum = 0;

			for (int i = 0; array[i] != '\0'; i++)
			{
				char ch = array[i];
				int number;
				number = ch - '0';
				if (number >= base)
				{
					cout << "Error: that number cannot appear in the given base; terminating program now... " << endl;
					return;
				}

				number = number * (pow(base, expo));

				expo--;

				sum = sum + number;

			}
			if (sum != 0)
			{
				cout << "Your number converted to base 10 is: " << sum << endl;
			}
			else
				cout << "Your number converted to base 10 is: " << sum << endl;

		} // end of else
	} // end of else




} // end of function