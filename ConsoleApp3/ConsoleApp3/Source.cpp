// calculator program
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void addition(double n1, double n2) {
	double sum;
	cout << "Enter two numbers to be added: ";
	cin >> n1 >> n2;
	sum = n1 + n2;
    cout << "Answer: " << sum << endl;
}

void subtract(double bn, double sn) {
	double difference;
    cout << "Enter two numbers to be subtracted: ";
	cin >> bn >> sn;
	difference = bn - sn;
	cout << "Answer: " << difference << endl;
}

void multiply(double m1, double m2) {
	double product;
    cout << "Enter two numbers to be multiplied: ";
	cin >> m1 >> m2;
	product = m1*m2;

	cout << "Answer: " << product << endl;
}

void divide(double dividend, double divisor) {
	int pic;
	int quotient1;
	float quotient2;
	double remainder;
	cout << "how would you like to perform this operation?" << endl;
	cout << "1. integer" << endl << "2. floating" << endl << "3. modular (remainder)" << endl;
	cin >> pic;
	switch (pic) {
	case 1: {
		cout << "Enter two numbers to be divided: ";
		cin >> dividend >> divisor;
		quotient1 = static_cast<int>(dividend) / static_cast<int>(divisor);

		cout << "Answer: " << quotient1 << endl; \
		break;
	}
	case 2: {
      cout << "Enter two numbers to be divided: ";
	  cin >> dividend >> divisor;
	  quotient2 = static_cast<float>(dividend) / static_cast<float>(divisor);

	  cout << "Answer: " << quotient2 << endl;
	  break;
	}
	case 3: {
      cout << "Enter the two numbers to be divided; a remainder will be printed: ";
	  cin >> dividend >> divisor;
	  remainder = static_cast<int>(dividend) % static_cast<int>(divisor);

	  cout << "Answer: " << remainder << endl;
	  break;
	}
	default:
		cout << "Command was not understood. Please pick a number 1-3: ";
		cin >> pic;
		break;
	}
}

void square(double sq, double ex) {
	int log;
	double power;
	double squarer1;
	double squarer2;
	cout << "how would you like to perform this operation?" << endl;
	cout << "1. exponentiation" << endl << "2. squaring" << endl << "3. square root of exponents" << endl;
	cin >> log;
	switch (log)
	{
	case 1: {
		cout << "Enter two numbers; one shall be raised to the other's power: ";
		cin >> sq >> ex;
		power = pow(sq, ex);

		cout << "Answer: " << power << endl;
		break;
	}
	case 2: {
		cout << "Enter two numbers to be square rooted; one number will be risen to the power of the other: ";
		cin >> sq >> ex;
		squarer1 = sqrt(pow(sq, ex));

		cout << "Answer: " << squarer1 << endl;
		break;
	}
	case 3: {
		cout << "Enter two numbers to be squared and then square rooted: ";
		cin >> sq >> ex;
		squarer2 = sqrt(pow(sq, 2.0) + (pow(ex, 2.0)));

		cout << "Answer: " << squarer2 << endl;
		break;
	}
	default:
		cout << "Command was not understood. Please pick a number 1-3: ";
		cin >> log;
		break;
	}

}

void menu(int fn) {
	double a = 0, b = 0;
	int op;
	cout << "Hello. What operation would you like to perform?: " << endl;
	cout << "1. addition" << endl;
	cout << "2. subtraction" << endl;
	cout << "3. multiplication" << endl;
	cout << "4. division" << endl;
	cout << "5. exponents and squaring" << endl;
	cin >> op;
	switch (op) {
	case 1:
		addition(a, b);
		break;
	case 2:
		subtract(a, b);
		break;
	case 3:
		multiply(a, b);
		break;
	case 4:
		divide(a, b);
		break;
	case 5:
		square(a, b);
		break;
	default:
		cout << "not a valid choice. please try again." << endl;
		cout << ": ";
		cin >> op;
	}

}


int main()

{
	int chz = 0;
	menu(chz);
	
	return 0;

}