#include <iostream>
using namespace std;

int main() {
	// declearing a variable to store the score
	int score;
	// taking the score from the user
	cout << "Enter your score between 0 - 100 : ";
	cin >> score;
	// checking if the score is valid or not if it is below 0 or above 100 then it is invalid and showing the error message and quitting the program
	if (score < 0 || score > 100) {
		cout << "Invalid score" << endl;
		return 0;
	}
	// dividing the score by 10 to get the first digit of the score and then checking the grade accordingly . Because switch only accepts int , char and bool so we can't use float , double or string in switch and cannot use any logic statement . 
	switch (score / 10) {
		// case is used to check the value of the score and then execute the code
	case 10:
	case 9:
		cout << "Your grade is A" << endl;
		// break is used to break the switch statement and quit the switch statement
		break;
	case 8:
		cout << "Your grade is B" << endl;
		break;
	case 7:
		cout << "Your grade is C" << endl;
		break;
	case 6:
		cout << "Your grade is D" << endl;
		break;
	default:
		cout << "Your grade is F" << endl;
		break;

	}
	// returning 0 to end the program
	return 0;
}