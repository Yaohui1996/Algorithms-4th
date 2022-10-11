// 使用 1.1.6.4 节中的 rank() 递归方法重新实现 BinarySearch 并跟踪该方法的调用。每当该方法
// 被调用时，打印出它的参数 lo 和 hi 并按照递归的深度缩进。提示：为递归方法添加一个参数
// 来保存递归的深度。

#include <cstdint>
#include <iostream>
#include <vector>

size_t rank(const int key, const std::vector<int>& a, const size_t lo, const size_t hi, const uint32_t depth) {
    for (uint32_t i = 0; i != depth; ++i) {
        std::cout << "\t";
    }
    std::cout << "lo=" << lo << "\thi=" << hi << std::endl;
    if (lo > hi) {
        return -1;
    }
    size_t mid = lo + (hi - lo) / 2;
    if (key < a.at(mid)) {
        return rank(key, a, lo, mid - 1, depth + 1);
    } else if (key > a.at(mid)) {
        return rank(key, a, mid + 1, hi, depth + 1);
    } else {
        return mid;
    }
}
size_t rank(const int key, const std::vector<int>& a) { return rank(key, a, 0, a.size() - 1, 0); }

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int key = 8;
    auto result = rank(key, v);
    return 0;
}
