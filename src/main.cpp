#include <iostream>
#include <iomanip>
#include "../include/main.h"

using namespace std;

int main() {
  int rows, cols, minValue = 1, maxValue = 100;

  cout << "Enter number of rows (k): ";
  cin >> rows;
  cout << "Enter number of columns (n): ";
  cin >> cols;

  int** matrix = new int*[rows];
  for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }

  CreateMatrixRecursively(matrix, rows, cols, minValue, maxValue, 0, 0);

  cout << "Matrix:" << endl;
  PrintMatrixRecursively(matrix, rows, cols, 0, 0);

  int result = FindMaxOfMinOddRowsRecursively(matrix, rows, cols, 0, 0);

  cout << "Max of min elements in odd rows: " << result << endl;

  for (int i = 0; i < rows; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;
}
