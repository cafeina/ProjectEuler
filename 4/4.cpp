#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const string &str)
{
	for(int i = 0; i < str.size()/2 ; ++i)
		if(str[i] != str[str.size() - i - 1])
			return false;
	return true;
}

int main()
{
	int product = 0;
	int max = 0;
	for (int i = 100; i < 1000; ++i)
		for (int j = 100; j < 1000; ++j)
		{
			product = i*j;
			if(is_palindrome(to_string(product)) && product > max)
				max = product;
		}

	cout << "Answer: " << max << endl;

	return 0;
}