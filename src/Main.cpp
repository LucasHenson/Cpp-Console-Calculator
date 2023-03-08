// C++ Console Calculator, accepts 2 integers and an operator as input and outputs the calculation.

#include <iostream>
#include <cmath> 

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
			return pow(a,b);
		default:
			std::cout << "\nInvalid operator! \n";
			std::exit(EXIT_FAILURE);
	}
}

int main() {

	double a, b, ans;

	char math;

	char again = 'y'; // Used to loop.

	do {

		static int iterations = 0;

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

		iterations++;

		if (iterations >= 10) { // Checks to see if user would like to continue after 10 uses. 
			std::cout << "Would you like to continue? (y or n)" << '\n';

			std::cin >> again;

			std::cout << '\n';

			iterations = 0;
		};

	} while (again == 'y'); // While again is y, program loops. 

	return 0;

}
