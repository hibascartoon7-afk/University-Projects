#include <iostream>
using namespace std;

/* Write a C++ program that computes the factorial of a non-negative integer in two ways and
prints both results side by side.
1. factorialIter(n) — an iterative function that computes factorial with a for loop,
without recursion.
2. factorialRec(n): a recursive function that compute the same value. The base case is n
== 0, which returns 1 */

long long factorialIter(int n) {
	long long result = 1;
	for (int i = 1; i <= n; ++i) {
		result *= i;
	}
	return result;
}

long long factorialRec(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorialRec(n - 1);
	}
}

int sumTo(int n) {
	 cout << "enter sumTo(" << n << ")" << endl;
	 if (n == 0) { // base case
		 cout << "base case: return 0" << endl;
		 return 0;
		
	}
	int result = n + sumTo(n - 1); // recursive case
	cout << "sumTo(" << n << ") returns " << result << endl;
	 return result;
	
}

/*Write a recursive C++ function to calculate Fibonacci numbers using:
 fib(0) = 0
 fib(1) = 1
 fib(n) = fib(n - 1) + fib(n - 2) for n ≥ 2
Use long long for the return type. Test your function with the values below and record the result
and execution time*/

long long fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}

int main() {
	int n;
	cout << "Enter a non-negative integer: ";
	cin >> n;
	
	// Test Fibonacci function
	long long fibResult = fib(n);
	cout << "Fibonacci of " << n << ": " << fibResult << endl;
	return 0;
}