// 1999-11-09 bkoz

// Copyright (C) 1999-2025 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// 23.2.4.3 vector modifiers

#include <vector>
#include "testsuite_hooks.h"

// test the assign() function
void
test03()
{
  const int K = 417;
  const int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
  const int B[] = {K, K, K, K, K};
  const std::size_t N = sizeof(A) / sizeof(int);
  const std::size_t M = sizeof(B) / sizeof(int);

  // assign from pointer range
  std::vector<int> v3;
  v3.assign(A, A + N);
  VERIFY(std::equal(v3.begin(), v3.end(), A));
  VERIFY(v3.size() == N);

  // assign from iterator range
  std::vector<int> v4;
  v4.assign(v3.begin(), v3.end());
  VERIFY(std::equal(v4.begin(), v4.end(), A));
  VERIFY(std::equal(A, A + N, v4.begin()));

  // assign from initializer range with resize
  v4.assign(M, K);
  VERIFY(std::equal(v4.begin(), v4.end(), B));
  VERIFY(std::equal(B, B + M, v4.begin()));
  VERIFY((v4.size() == M) && (M != N));
}

int main()
{
  test03();
  return 0;
}
