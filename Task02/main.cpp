#include "logic.h"

int main() {
	int N = 3;

	int** matrix = new int* [N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N];
	}

	init(matrix, N);
	cout << "Matrix: \n" << print_matrix(matrix, N) << endl;
	
	bool equal = check_equal(matrix, N);
	cout << "Are equal numbers? - " << (equal ? "Yes" : "No");

	return 0;
}