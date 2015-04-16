#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long sum_squares = 0;
	for(int i = 1; i <= 100; ++i)
		sum_squares += i*i;

	long long square_sum = 0;
	for(int i = 1; i <= 100; ++i)
		square_sum += i;
	square_sum *= square_sum;

	cout << "Answer: " << abs(sum_squares - square_sum) << endl;
}