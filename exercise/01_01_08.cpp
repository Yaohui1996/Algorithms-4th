// 1.1.8 下列语句会打印出什么结果？给出解释。
// a. System.out.println('b');
// b. System.out.println('b' + 'c');
// c. System.out.println((char) ('a' + 4));
#include "StdOut.h"
using namespace yaohui::algorithms_4th;
int main() {
    StdOut::println('b');
    StdOut::println('b' + 'c');
    StdOut::println((char)('a' + 4));
    return 0;
}