// 1.1.2 给出以下表达式的类型和值：
// a. (1 + 2.236)/2
// b. 1 + 2 + 3 + 4.0
// c. 4.1 >= 4
// d. 1 + 2 + "3"

#include <string>

#include "StdOut.h"
using namespace yaohui::algorithms_4th;

int main() {
    StdOut::println((1 + 2.236) / 2);
    StdOut::println(1 + 2 + 3 + 4.0);
    std::string result = 4.1 >= 4 ? "TRUE" : "FALSE";
    StdOut::println(result);

    /* 错误用法 */
    // StdOut::println(1 + 2 + "3");
    /* 错误用法 */
    return 0;
}