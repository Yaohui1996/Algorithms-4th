// 1.1.13 编写一段代码，打印出一个 M 行 N 列的二维数组的转置（交换行和列）。

#include <vector>

#include "StdOut.h"
using namespace std;
using namespace yaohui::algorithms_4th;
int main() {
    vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    StdOut::print_2d_vec_transpose(v);
    return 0;
}