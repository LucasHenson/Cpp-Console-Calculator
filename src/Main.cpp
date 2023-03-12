// C++ Console Calculator, accepts 2 integers and an operator as input and outputs the calculation.

#include <iostream>
#include <cmath> 

double calculatorFunction(double a, double b, char math);

int main() {

	double a, b, ans;

	char math, calcAgain;

	bool calcOn = true; // Handles program state.

	while (calcOn) {

		std::cout << "Please enter the first number." << '\n';
		std::cin >> a;

		std::cout << "Please enter an operator. (+, -, *, /, ^)" << '\n';
		std::cin >> math;

		std::cout << "Please enter the second number." << '\n';
		std::cin >> b;

		if (b == 0 && math == '/') { // Makes sure division by 0 does not happen.

			std::cout << "\nDivision by 0 is undefined!\n\n";
			continue;

		}

		ans = calculatorFunction(a, b, math);

		std::cout << '\n' << a << " " << math << " " << b << " = " << ans << '\n' << '\n';

		calcAgain = '\0'; // Resets variable

		while (calcAgain != 'y' && calcAgain != 'n') {

			std::cout << "Would you like to make another calculation? (y or n): ";
			std::cin >> calcAgain;

			std::cout << '\n';
		}

		if (calcAgain == 'n') {

			calcOn = false;

		}

	} 

	return 0;
}

double calculatorFunction(double a, double b, char math)// Contains switch statement for clarity.
{
	switch (math) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	case '^':
		return pow(a, b);
	default:
		std::cout << "\nInvalid operator! \n";
		std::exit(EXIT_FAILURE);
	}
}
