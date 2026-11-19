// Lab 2A - Task 3: timing sumTo with std::chrono
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
long long sumToIter(int n) {
	long long total = 0;
	for (int i = 1; i <= n; i++)
		total = total + i;
	return total;
}
long long sumToRec(int n) {
	if (n == 0) return 0;
	return n + sumToRec(n - 1);
}
int main() {
	int n;
	char version;
	cout << "Enter n: ";
	cin >> n;
	cout << "Version (i = iterative, r = recursive): ";
	cin >> version;
	auto start = steady_clock::now(); // read the clock
	long long result;
	if (version == 'i') result = sumToIter(n);
	else result = sumToRec(n);
	auto stop = steady_clock::now(); // read it again
	auto ms = duration_cast<milliseconds>(stop - start).count();
	cout << "sum = " << result << endl;
	cout << "time = " << ms << " ms" << endl;
	return 0;
}
