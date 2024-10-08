#include <cstdlib>
#include "Bureaucrat.hpp"

using std::cout;
using std::cerr;
using std::endl;

int main(void)
{
	cout << "GENERAL" << endl;
	{
		// Constructor
		Bureaucrat	a("Myalmoy", 78);

		// Copy Constructor
		Bureaucrat	b(a);

		// ostream overload
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	}

	cout << endl;

	{
		cout << "TEST 1" << endl;
		try
		{
			// grade too low
			Bureaucrat	a("A", LOWEST_GRADE + 1);
			cout << a << endl;
		}
		catch (std::exception& e) {
			cerr << e.what() << endl;
		}

		cout << endl;

		cout << "TEST 2" << endl;
		try
		{
			// grade too high
			Bureaucrat	b("B", HIGHEST_GRADE - 1);
			cout << b << endl;
		}
		catch (std::exception& e) {
			cerr << e.what() << endl;
		}

		cout << endl;

		cout << "TEST 3" << endl;
		try
		{
			// Increment to a grade higher than HIGHEST_GRADE
			Bureaucrat	c("C", HIGHEST_GRADE);

			c.incrementGrade();
			cout << c << endl;
		}
		catch (std::exception& e) {
			cerr << e.what() << endl;
		}

		cout << endl;

		cout << "TEST 4" << endl;
		try
		{
			// Decrement to a grade lower than LOWEST_GRADE
			Bureaucrat	d("D", LOWEST_GRADE);

			d.decrementGrade();
			cout << d << endl;
		}
		catch (std::exception& e) {
			cerr << e.what() << endl;
		}

		cout << endl;

		cout << "TEST 5" << endl;
		try 
		{
			// Acceptable grade changes
			Bureaucrat	marco("Marco", 10);

			marco.decrementGrade();
			cout << marco << endl;
			marco.incrementGrade();
			cout << marco << endl;
		}
		catch (std::exception& e) {
			cerr << e.what() << endl;
		}
	}
	return EXIT_SUCCESS;
}