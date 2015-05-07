#include <iostream>
#include <map>
#include <cmath>

using namespace std;
using LL = long long;

int main()
{
	map<LL, bool> vals;

	LL k = 2000000;
	LL sqrt_k = sqrt(k);

	for(LL i = 2; i <= k; ++i)
		vals[i] = true;

	for(LL i = 2; i <= sqrt_k; ++i)
		if(vals[i])
			for(LL j = 2*i; j <= vals.rbegin()->first; j += i)
				vals[j] = false;

	LL sum = 0;
	for(auto &v_k : vals)
		if(v_k.second)
			sum += v_k.first;

	cout << "Answer: " << sum << endl;
}