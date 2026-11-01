#include <iostream> 
using namespace std;

/* Q.1 write a C++ program that adds the whole numbers from 1 to 4 with a for loop, then
prints their sum and their average on two lines, in the form Sum = 10 and Average = 2.5.The average
must keep its fraction.*/


int sum (int n)
{
	n = 4;
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;

	}
	double avr = (double)sum / n;

	cout << "the sum of " << n << " = " << sum << "\n";
	cout << "the average of " << n << " = " << avr << "\n";

	return (sum , avr);
}



/* Q.2 Write a C++ program that asks the user to enter a number n, then prints the sum and the average
of the numbers from 1 to n.
Hint: cin >> n; reads the number the user types.*/

int sumOfN(int n)
{
	int sum = 0;
	cout << "Enter a number n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	double avr = (double)sum / n;
	cout << "the sum of " << n << " = " << sum << "\n";
	cout << "the average of " << n << " = " << avr << "\n";
	return (sum, avr);
}

/* Q.3 Write a function int sumTo(int n) that returns 1 + 2 + … + n. The main function reads n, calls
sumTo(n) and prints the results. Put the prototype above main and the definition below it. */

int sumTo(int n)

{
	int sum = 0;
	cout << "Enter a number n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	
	cout << "the sum of " << n << " = " << sum << "\n";

	return (sum);
}

/* Q.4 Write sumOfSquares(n) for 1² + 2² + … + n², sumOfOdd(n) for the odd numbers from 1 to n, and
sumOfEven(n) for the even ones. Each has the shape of sumTo. 
*/
int sumOfSquares(int n)
{

	int sumS = 0;

	for (int i = 1; i <= n; i++)
	{

		sumS += (i * i);

	}
	cout << " the sum of squares from 1 to " << n << " = " << sumS << "\n";
	return (sumS);
}


		int sumOfEven(int n)
	{
	
		int sumE = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				sumE += i;

			}
		}
		cout << " the sum of even numbers from 1 to " << n << " = " << sumE << "\n";
			return (sumE);

	}


	int sumOfOdd(int n)
	{
		int sumO = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 != 0)
			{
				sumO += i;

			}
		}
		cout << " the sum of odd numbers from 1 to " << n << " = " << sumO << "\n";
		return (sumO);
	}
	

	/* Q.5 Write a function int sumBetween(int a, int b) that returns a + (a + 1) + … + b, and 0 when a is
greater than b. Two parameters: the loop starts at a instead of 1.
*/

	int sumBetween(int a, int b)
	{
		int sum = 0;

		if (a > b)
		{
			return 0;
		}
		else
		{
			for (int i = a; i <= b; i++)
			{
				sum += i;
			}
			return sum;
		}
	}

	/* Q.6 Write a function int digitSum(int n) that returns the sum of the decimal digits of n, for n ≥ 0.
Test with: digitSum(1234) ; digitSum(1000) ; digitSum(7) ; digitSum(0) . 
*/

	int digitSum(int n)
	{
		int sum = 0;
		for (int i = n; i > 0; i /= 10)
		{
			sum += i%10 ;

		}
		return sum;
	}

int main()
{
	cout << digitSum(0) ;
	return 0;
}