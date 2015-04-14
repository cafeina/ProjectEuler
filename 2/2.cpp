#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	int previous = 1;
	int current = 2;
	int temp;

	vector<int> primes;
	while(current < 4000000)
	{
		if(current % 2 == 0)
			primes.push_back(current);

		temp = current + previous;
		previous = current;
		current = temp;		
	}

	int sum = accumulate(primes.begin(), primes.end(), 0);

	cout << "Answer: " << sum << endl;

	return 0;
}