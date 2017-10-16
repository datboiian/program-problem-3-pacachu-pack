/*

Sam Bryant & Dorothy Bui - 10/5/17 - 2

Assignment Name : Three digit Ascend Descend Selection

Take in 3 digits from the user, seperate those digits and say whether they ascend descend or neither.

*/

// Libraries

#include <iostream>// gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	for (int i = 0; i < 30; i++) {




		//define variables: 
		int userNumber;
		int digit1;
		int digit2;
		int digit3;

		//ask for variable

		cout << "Would you kindly provide me with a three digit number?" << endl; /*
		Don't have the computer yell please. I have taken out the exclamation mark and other rude questions because I feel attacked when the computer yells
	*/
	// take in variable
		cin >> userNumber;
		// seperate number to 3 digits;

		digit1 = userNumber / 100; //int division // This digit2 integer modification is in long form. It's condensible 
		digit2 = (userNumber / 10) % 10;
		digit3 = userNumber % 10;




		//calculate ascending descending or neither:
		if (digit1 > digit2 && digit2 > digit3) {
			cout << "Your number " << digit1 << digit2 << digit3 << " is descending" << endl;
		}
		else if (digit1 < digit2 && digit2 < digit3) {
			cout << "Your number " << digit1 << digit2 << digit3 << " is ascending" << endl;
		}
		else {
			cout << "Your number " << digit1 << digit2 << digit3 << " is neither ascending nor descending" << endl;
		}



	}
	
	
		pause(); // pauses to see the displayed text
	}
