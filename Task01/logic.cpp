#include "logic.h"

void init(int** matrix, int N) {
	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < N + 1; j++) {
			matrix[i - 1][j - 1] = i * j;
		}
	}
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

