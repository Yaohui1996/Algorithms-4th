// 二项分布。估计用以下代码计算 binomial(100, 50, 0.25) 将会产生的递归调用次数：
// public static double binomial(int N, int k, double p)
// {
//  if (N == 0 && k == 0) return 1.0;
//  if (N < 0 || k < 0) return 0.0;
//  return (1.0 - p)*binomial(N-1, k, p) + p*binomial(N-1, k-1, p);
// }
// 将已经计算过的值保存在数组中并给出一个更好的实现。
double binomial(int N, int k, double p) {
    if (N == 0 && k == 0) {
        return 1.0;
    }
    if (N < 0 || k < 0) {
        return 0.0;
    }
    return (1.0 - p) * binomial(N - 1, k, p) + p * binomial(N - 1, k - 1, p);
}

int main() { return 0; }