#include <iostream>
using namespace std;

int main() {
	// declearing two variables of integer type
	int a, b;
	// taking input from user
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	// because we can't use third variable and in one variable we can store only one value at a time so we are using this method to swap the values of two variables . It is just a mathematical trick , in which we are adding the two numbers and then subtracting the second number from the sum and then subtracting the first number from the sum. In this way we are swapping the values of two variables.
	a = a + b;
	b = a - b;
	a = a - b;
	// printing the swapped values to the user with their respective variable names
	cout << "After swapping: " << "a : " << a << endl;
	cout << "After swapping: " << "b : " << b << endl;
	// returning 0 to end the program
	return 0;
}