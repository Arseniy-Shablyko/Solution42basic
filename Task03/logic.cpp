#include "logic.h"

void init(int** matrix, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 11;
		}
	}
}

int row_sum(int** matrix, int N, int row) {
	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum += matrix[row][i];
	}

	return sum;
}

int find_max_extream_sum_row(int** matrix, int N) {
	int max_sum_index = 0;

	for (int i = 1; i < N; i++) {
		if (row_sum(matrix, N, max_sum_index) < row_sum(matrix, N, i)) {
			max_sum_index = i;
		}
	}

	return max_sum_index;
}

string print_matrix(int** matrix, int N) {
	string s = "";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}

	return s;
}

