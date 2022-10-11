// 1.1.10 下面这段代码有什么问题？
// int[] a;
// for (int i = 0; i < 10; i++)
//     a[i] = i * i;
// 解答：它没有用 new 为 a[] 分配内存。这段代码会产生一个 variable a might not have
// been initialized 的编译错误。

int main() {
    /* 上述解答只适用于java */
    return 0;
}
