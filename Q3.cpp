#include <iostream>
using namespace std;

int main() {
	// initialize the prices of the dishes in PKR per kg stored in an int variable
	int Fish = 1800;
	int Chicken_karahi = 2000;
	int Mutton_tikka = 2200;
	int Daal_Haleem = 500;
	int Sabzi = 250;
	// displaying menu to the user with code, meal and price per kg
	cout << "These are the dishes our resturant offers : " << endl;
	cout << "Code \t Meal \t \t \t Price per kg \n";
	cout << "1 \t Fish \t \t \t 1800" << endl;
	cout << "2 \t Chicken Karahi \t 2000" << endl;
	cout << "3 \t Mutton Tikka \t \t 2200" << endl;
	cout << "4 \t Daal Haleem \t \t 500" << endl;
	cout << "5 \t Sabzi \t \t \t 250" << endl;

	// asking user to select a dish by entering the code 
	int code;
	cout << "Enter the code of the dish: ";
	cin >> code;
	// initializing the price of the dish to 0 to store the respective price of the dish
	int meal_price = 0;
	// using switch case to assign the price of the dish to the meal_price variable effectively
	switch (code) {
	case 1:
		meal_price = Fish;
		cout << "You have ordered Fish. The price is : " << Fish << endl;
		break;
	case 2:
		meal_price = Chicken_karahi;
		cout << "You have ordered Mutton Karahi. The price is : " << Chicken_karahi << endl;
		break;
	case 3:
		meal_price = Mutton_tikka;
		cout << "You have ordered Mutton Tikka. The price is : " << Mutton_tikka << endl;
		break;
	case 4:
		meal_price = Daal_Haleem;
		cout << "You have ordered Daal Haleem. The price is : " << Daal_Haleem << endl;
		break;
	case 5:
		meal_price = Sabzi;
		cout << "You have ordered Sabzi. The price is : " << Sabzi << endl;
		break;
	default:
		cout << "Invalid code entered." << endl;
		// returning 0 to end the program if the user enters an invalid code
		return 0;
	}

	// asking user to enter the quantity of the dish in kilograms
	int quantity;
	cout << "Enter the quantity of the dish in kilograms you want to order : ";
	cin >> quantity;
	// returning 0 to end the program if the user enters an invalid quantity
	if (quantity <= 0) {
		cout << "Invalid quantity entered." << endl;
		return 0;
	}

	// calculating the base price of the meal by multiplying the price of the meal with the quantity
	int base_price = meal_price * quantity;

	// asking user to select the currency they want to pay in and showing them the available options with their code
	int currency_option;
	cout << "Enter the currency code you want to pay in : " << endl
		<< "1. Pakistani Rupee" << endl
		<< "2. Euro" << endl
		<< "3. Dollar" << endl;
	cin >> currency_option;

	// initializing the conversion rate, because we want to store the conversion rates using the codes of the currencies . using string to store the currency label to show it to user for same reason
	double conversion_rate = 1;
	string currency_label = "PKR";

	// using switch case to assign the conversion rate and currency label to the respective variables effectively
	switch (currency_option) {
	case 1:
		conversion_rate = 1;
		currency_label = "PKR";
		break;
	case 2:
		conversion_rate = 193;
		currency_label = "EURO";
		break;
	case 3:
		conversion_rate = 165;
		currency_label = "DOLLARS";
		break;
	default:
		// returning 0 to end the program if the user enters an invalid currency code
		cout << "Invalid currency code entered." << endl;
		return 0;
	}

	// calculating the converted base price, sales tax, and total price as indicated in the question to show the user
	double converted_base_price = base_price / conversion_rate;
	double sales_tax_rate = 0.10;
	double sales_tax = converted_base_price * sales_tax_rate;
	double total_price = converted_base_price + sales_tax;

	// displaying the base price, sales tax, and total price to the user in a similar fashion as shown in the question
	cout << "*********************************************" << endl;
	cout << "The base price is: " << converted_base_price << " " << currency_label << endl;
	cout << "The sales tax is: " << sales_tax << " " << currency_label << endl;
	cout << "The total price is: " << total_price << " " << currency_label << endl;
	cout << "*********************************************" << endl;

	// returning 0 to end the program
	return 0;
}