#include "logic.h"

void init(int** matrix, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 11;
		}
	}
}

bool check_equal(int** matrix, int N) {
	bool equal = false;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int number = matrix[i][j];

			for (int g = 0; g < N; g++) {
				for (int k = 0; k < N; k++) {
					if (number == matrix[g][k]) {
						equal = true;
						break;
					}
				}
			}
		}
	}
	

	return equal;
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

