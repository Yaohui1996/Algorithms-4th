// 1.1.12 以下代码段会打印出什么结果？
// int[] a = new int[10];
// for (int i = 0; i < 10; i++)
//     a[i] = 9 - i;
// for (int i = 0; i < 10; i++)
//     a[i] = a[a[i]];
// for (int i = 0; i < 10; i++)
//     System.out.println(a[i]);

#include <vector>

#include "StdOut.h"
using namespace std;
using namespace yaohui::algorithms_4th;

int main() {
    vector<int> a(10, 0);
    for (int i = 0; i < 10; i++) a[i] = 9 - i;
    for (int i = 0; i < 10; i++) a[i] = a[a[i]];
    for (int i = 0; i < 10; i++) StdOut::println(a[i]);
    return 0;
}