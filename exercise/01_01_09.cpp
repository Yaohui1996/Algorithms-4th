// 1.1.9 编写一段代码，将一个正整数 N 用二进制表示并转换为一个 String 类型的值 s。
// 解答：Java 有一个内置方法 Integer.toBinaryString(N) 专门完成这个任务，但该题的目的就
// 是给出这个方法的其他实现方法。下面就是一个特别简洁的答案：

#include <cstdint>
#include <string>

#include "StdOut.h"
using namespace std;
using namespace yaohui::algorithms_4th;

int main() {
    string s = "";
    uint32_t N = 5;
    for (uint32_t n = N; n > 0; n /= 2) {
        s = std::to_string(n % 2) + s;
    }
    StdOut::println(s);
    return 0;
}
