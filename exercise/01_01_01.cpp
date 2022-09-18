// 1.1.1 给出以下表达式的值：
// a. ( 0 + 15 ) / 2
// b. 2.0e-6 * 100000000.1
// c. true && false || true && true

#include <string>

#include "StdOut.h"
using namespace yaohui::algorithms_4th;
int main() {
    StdOut::println((0 + 15) / 2);
    StdOut::println(2.0e-6 * 100000000.1);
    std::string result = true && false || true && true ? "TRUE" : "FALSE";
    StdOut::println(result);
    return 0;
}