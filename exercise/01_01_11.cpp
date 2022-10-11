// 1.1.11 编写一段代码，打印出一个二维布尔数组的内容。其中，使用 * 表示真，空格表示假。打印出行号和列号。

#include <vector>

#include "StdOut.h"
using namespace std;
using namespace yaohui::algorithms_4th;

int main() {
    vector<vector<bool>> v = {{true, true}, {true, false}, {false, false}};
    StdOut::print("\t");
    for (size_t c = 0; c != v[0].size(); ++c) {
        StdOut::print(c);
        if (c != v[0].size() - 1) {
            StdOut::print("\t");
        }
    }
    StdOut::println();
    for (size_t r = 0; r != v.size(); ++r) {
        StdOut::mini_printf("{}\t", r);
        for (size_t c = 0; c != v[r].size(); ++c) {
            if (v[r][c]) {
                StdOut::print("*");
            } else {
                StdOut::print(" ");
            }
            if (c != v[r].size() - 1) {
                StdOut::print("\t");
            }
        }
        StdOut::println();
    }
    StdOut::println();

    return 0;
}