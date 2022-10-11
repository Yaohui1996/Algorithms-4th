// 在计算机上运行以下程序：
// public class Fibonacci
// {
//  public static long F(int N)
//  {
//  if (N == 0) return 0;
//  if (N == 1) return 1;
//  return F(N-1) + F(N-2);
//  }
//  public static void main(String[] args)
//  {
//  for (int N = 0; N < 100; N++)
//  StdOut.println(N + " " + F(N));
//  }
// }
// 计算机用这段程序在一个小时之内能够得到 F(N) 结果的最大 N 值是多少？开发 F(N) 的一
// 个更好的实现，用数组保存已经计算过的值。

#include <cstdint>
#include <iostream>
#include <vector>

int64_t F(int64_t N) {
    if (N == 0) {
        return 0;
    }
    if (N == 1) {
        return 1;
    }
    return F(N - 1) + F(N - 2);
}

int64_t new_F(int64_t N) {
    if (N == 0) {
        return 0;
    }
    if (N == 1) {
        return 1;
    }
    std::vector<uint64_t> vec(N + 1, 0);
    vec.at(0) = 0;
    vec.at(1) = 1;
    for (size_t i = 2; i != vec.size(); ++i) {
        vec.at(i) = vec.at(i - 1) + vec.at(i - 2);
    }
    return vec.back();
}

int main() {
    for (int N = 0; N < 100; N++) {
        std::cout << N << " " << new_F(N) << std::endl;
    }
    for (int N = 0; N < 100; N++) {
        std::cout << N << " " << F(N) << std::endl;
    }
}
