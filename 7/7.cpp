#include <iostream>
#include <map>
#include <cmath>

using namespace std;
using LL = long long;

int main()
{
	map<LL, bool> vals;

	for(LL i = 2; i <= 110000; ++i)
		vals[i] = true;

	for(LL i = vals.begin()->first; i <= vals.end()->first; ++i)
		if(vals[i])
			for(LL j = 2*i; j <= vals.end()->first; j += i)
				vals[j] = false;

	LL prime_count = 0;
	for(auto &v_k : vals) {
		if(v_k.second) {
			++prime_count;
			if (prime_count == 10001)
				cout << "Answer: " << v_k.first << endl;
		}
	}
}