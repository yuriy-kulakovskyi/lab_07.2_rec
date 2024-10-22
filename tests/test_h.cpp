#include <gtest/gtest.h>
#include "../include/main.h"
#include <limits>

using namespace std;

TEST(FindMinTest, HandleFindMin) {
  int row[] = {1, 2, 3, 4, 5};
  int cols = 5;
  int expected = 1;
  int actual = FindMinInRowRecursively(row, cols, 0, numeric_limits<int>::max());
  EXPECT_EQ(expected, actual);
}