#ifndef MAIN_H
#define MAIN_H

void CreateMatrixRecursively(int** matrix, int rows, int cols, int minValue, int maxValue, int row, int col);
void PrintMatrixRecursively(int** matrix, int rows, int cols, int row, int col);
int FindMinInRowRecursively(int* row, int cols, int col, int currentMin);
int FindMaxOfMinOddRowsRecursively(int** matrix, int rows, int cols, int row, int currentMax);

#endif //MAIN_H
