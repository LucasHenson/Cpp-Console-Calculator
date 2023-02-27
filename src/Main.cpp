// C++ Console Calculator, accepts 2 integers and an operator as input and outputs the calculation.

#include <iostream>
#include <cmath> 

double calculatorFunction(double a, double b, char math)// Contains if statements for clarity.
{
	double ans = 0;
	// Rewrite cout statements in order to have just one line.
	if (math == '+') {
		ans = a + b;
		std::cout << '\n' << a << " + " << b << " = " << ans << '\n' << '\n';
	}
	else if (math == '-') {
		ans = a - b;
		std::cout << '\n' << a << " - " << b << " = " << ans << '\n' << '\n';
	}
	else if (math == '*') {
		ans = a * b;
		std::cout << '\n' << a << " * " << b << " = " << ans << '\n' << '\n';
	}
	else if (math == '/') {
		ans = a / b;
		std::cout << '\n' << a << " / " << b << " = " << ans << '\n' << '\n';
	}
	else if (math == '^') {
		ans = pow(a, b);
		std::cout << '\n' << a << " ^ " << b << " = " << ans << '\n' << '\n';
	}
	else {
		std::cout << "Please input a valid operator!";
		// Write in a way for user to input a correct operator
	};

	return ans;
}

int main() {

	double a, b;

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

		calculatorFunction(a, b, math);

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
