#include <iostream>

using namespace std;
using LL = long long;

int main(int argc, char* argv[])
{
	LL k = 600851475143;

	for(LL i = 2; i <= k; ++i) {
		while (k % i == 0) {
			if (k == i) break;
			k /= i;
		}
	}

	cout << "Answer: " << k << endl;

	return 0;
}