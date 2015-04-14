#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	vector<int> multiples(1000);
	for(int n = 0; n <1000; ++n)
		if((n % 3 == 0) or (n % 5 == 0))
			multiples.push_back(n);

	int sum = accumulate(multiples.begin(), multiples.end(), 0);
	
	cout << "Answer: " << sum << endl;

	return 0;
}