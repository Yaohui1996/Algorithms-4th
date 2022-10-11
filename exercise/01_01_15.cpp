// 1.1.15 编写一个静态方法histogram()，
// 接受一个整型数组a[]和一个整数M为参数并返回一个大小为M的数组，
// 其中第i个元素的值为整数i在参数数组中出现的次数。
// 如果a[]中的值均在0到M-1之间，返回数组中所有元素之和应该和a.length相等。

#include <vector>

#include "StdOut.h"
#include "StdStats.h"

using namespace std;
using namespace yaohui::algorithms_4th;
int main() {
    vector<int> a = {0, 0, 1, 1, 2, 3, 4, 5, 5, 5};
    vector<int> b = StdStats::histogram(a, 6);
    StdOut::print_vector(b);
    return 0;
}