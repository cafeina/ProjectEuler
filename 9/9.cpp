#include <iostream>
#include <cmath>

using namespace std;
using LL = long long;

int main()
{
	for(int a = 0; a < 1000; ++a)
		for (int b = a+1; b < 1000; ++b)
			for (int c = b+1; c < 1000; ++c)
				if ((a + b + c == 1000) and ((a*a) + (b*b) == (c*c)))
						cout << "Answer: " << a*b*c << endl;
}