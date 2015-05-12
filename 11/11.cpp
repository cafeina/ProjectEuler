#include <iostream>
#include <fstream>

using namespace std;
using LL = long long;

LL max_val = 0;

void search_horizontal(int grid[20][20])
{
	int index1, index2;
	for(int i = 0; i < 20; ++i) {
		for(int j = 0; j < 17; ++j) {
			LL prod = grid[i][j]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3];
			if (prod > max_val) max_val = prod;
		}
	}
}

void search_vertical(int grid[20][20])
{
	int index1, index2;
	for(int i = 0; i < 17; ++i) {
		for(int j = 0; j < 20; ++j) {
			LL prod = grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j];
			if (prod > max_val) max_val = prod;
		}
	}
}

void search_diagonal_to_right(int grid[20][20])
{
	int index1, index2;
	for(int i = 0; i < 17; ++i) {
		for(int j = 0; j < 17; ++j) {
			LL prod = grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
			if (prod > max_val) max_val = prod;
		}
	}
}

void search_diagonal_to_left(int grid[20][20])
{
	int index1, index2;
	for(int i = 0; i < 17; ++i) {
		for(int j = 19; j > 2; --j) {
			LL prod = grid[i][j]*grid[i+1][j-1]*grid[i+2][j-2]*grid[i+3][j-3];
			if (prod > max_val) max_val = prod;
		}
	}
}

int main()
{
	ifstream in("grid.txt");
	int grid[20][20];
	for(int i = 0; i < 20; ++i)
		for(int j = 0; j < 20; ++j) {
			int cell;
			in >> cell;
			grid[i][j] = cell;
		}

	search_horizontal(grid);
	search_vertical(grid);
	search_diagonal_to_right(grid);
	search_diagonal_to_left(grid);
	cout << "Answer: " << max_val << endl;
}