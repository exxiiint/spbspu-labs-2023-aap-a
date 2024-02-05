#ifndef CNT_NZR_DIG_HPP
#define CNT_NZR_DIG_HPP

#include <cstddef>

namespace lebedev
{
  size_t countOverMainDiag(const int matrix[], size_t rows, size_t cols);
  size_t countBelowMainDiag(const int matrix[], size_t rows, size_t cols);
  size_t countNotZeroDiags(const int matrix[], size_t rows, size_t cols);
}
#endif
