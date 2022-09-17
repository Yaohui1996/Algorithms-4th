#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "BinarySearch.h"
#include "StdOut.h"
#include "StdRandom.h"

using namespace yaohui::algorithms_4th;
template <typename BuildInType>
void print_vector(const std::vector<BuildInType>& vec) {
    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
        if (iter != vec.end() - 1) {
            std::cout << *iter << ", ";
        } else {
            std::cout << *iter << std::endl;
        }
    }
}
int main() {
    std::vector<std::string> v1 = {"aa", "gg", "cc", "bb", "ee"};
    std::vector<int> v2 = {3, 11, 765, 24, 2134, 6654, 34, 2231, 5431};
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());
    // int key_index = BinarySearch::rank<std::string>("aa", v1);
    int key_index = BinarySearch::rank<int>(24, v2);
    std::cout << key_index << std::endl;

    double ret = StdRandom::uniform(1000, 100000);
    std::cout << ret << std::endl;

    std::vector<double> v4;
    for (size_t i = 0; i != 50; ++i) {
        v4.push_back(StdRandom::uniform(0.0, 100.0));
    }
    print_vector(v4);

    std::vector<double> v5 = {1, 2, 3, 4, 5};
    print_vector(v5);
    StdRandom::shuffle(v5);
    print_vector(v5);
    StdRandom::shuffle(v5);
    print_vector(v5);
    StdRandom::shuffle(v5);
    print_vector(v5);
    StdRandom::shuffle(v5);
    print_vector(v5);

    int a = 100;
    std::string s = "world";
    StdOut::printf("age: {} hello, {}", a, s);

    return 0;
}