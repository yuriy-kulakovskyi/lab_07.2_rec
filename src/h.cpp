#include "../include/main.h"
#include <iostream>
#include <iomanip>

using namespace std;

void CreateMatrixRecursively(int** matrix, int rows, int cols, int minValue, int maxValue, int row = 0, int col = 0) {
  if (row == rows) return;
  matrix[row][col] = minValue + rand() % (maxValue - minValue + 1);
  if (col + 1 < cols) {
    CreateMatrixRecursively(matrix, rows, cols, minValue, maxValue, row, col + 1);
  } else {
    CreateMatrixRecursively(matrix, rows, cols, minValue, maxValue, row + 1, 0);
  }
}

void PrintMatrixRecursively(int** matrix, int rows, int cols, int row, int col) {
  if (row == rows) return;
  cout << setw(5) << matrix[row][col];
  if (col + 1 < cols) {
    PrintMatrixRecursively(matrix, rows, cols, row, col + 1);
  } else {
    cout << endl;
    PrintMatrixRecursively(matrix, rows, cols, row + 1, 0);
  }
}

int FindMinInRowRecursively(int* row, int cols, int col = 0, int currentMin = numeric_limits<int>::max()) {
  if (col == cols) return currentMin;
  return FindMinInRowRecursively(row, cols, col + 1, min(currentMin, row[col]));
}

int FindMaxOfMinOddRowsRecursively(int** matrix, int rows, int cols, int row = 0, int currentMax = numeric_limits<int>::min()) {
  if (row >= rows) return currentMax;
  if (row % 2 == 0) {
    int minInRow = FindMinInRowRecursively(matrix[row], cols);
    currentMax = max(currentMax, minInRow);
  }
  return FindMaxOfMinOddRowsRecursively(matrix, rows, cols, row + 2, currentMax);
}