#include "logic.h"

int main() {
	int N = 5;

	int** matrix = new int* [N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N];
	}

	init(matrix, N);
	cout << "Matrix: \n" << print_matrix(matrix, N) << endl;

	int max_sum_index = find_max_extream_sum_row(matrix, N);
	cout << "Max sum row index = " << max_sum_index + 1 << endl;

	return 0;
}