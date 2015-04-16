#include <iostream>
#include <map>
#include <cmath>

using namespace std;

map<int, int> factors;

void find_factors(int n) 
{
	map<int, int> temp_factors;
	int f = 2;
	for(; f <= n; ++f) {
		while(n % f == 0) {
			n /= f;
			temp_factors[f]++;
		}
	}

	for(auto &k_v : temp_factors) {
		if (factors[k_v.first] < k_v.second)
			factors[k_v.first] = k_v.second;
	}
}

int main(int argc, char *argv[])
{
	int max = stoi(argv[1]);
	for (int i = (max/2)+1; i <= max; ++i)
		find_factors(i);

	long long smallest_multiple = 1;
	for (auto &k_v : factors)
		smallest_multiple *= pow(k_v.first, k_v.second);

	cout << "Answer: " << smallest_multiple << endl;
}