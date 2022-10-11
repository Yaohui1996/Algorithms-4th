// 1.1.16 给出exR1(6)的返回值：

#include <string>

#include "StdOut.h"

using namespace std;
using namespace yaohui::algorithms_4th;

string exR1(int n) {
    if (n <= 0) return "";
    return exR1(n - 3) + std::to_string(n) + exR1(n - 2) + std::to_string(n);
}

int main() {
    StdOut::println(exR1(6));
    return 0;
}
