#ifndef STDRANDOM_H
#define STDRANDOM_H

#include <algorithm>
#include <cassert>
#include <iostream>
#include <random>

namespace yaohui {

namespace algorithms_4th {

class StdRandom {
private:
public:
    /**
     * @brief 随机返回[a,b]之间的一个double值
     * @param a 下界
     * @param b 上界
     * @return double [a,b]之间的一个double值
     */
    static double uniform(double a, double b) {
        std::random_device rd;
        std::default_random_engine e(rd());  // 生成随机无符号数, 落入区间[1, 2147483646]
        std::uniform_real_distribution<double> u(a, b);
        return u(e);
    }

    /**
     * @brief 随机返回[0,N)之间的一个int值
     * @param N 上界
     * @return int [0,N)之间的int值
     */
    static int uniform(int N) { return uniform(0, N); }

    /**
     * @brief 随机返回[lo,hi)之间的一个int值
     * @param lo 下界
     * @param hi 上界
     * @return int [lo,hi)之间的int值
     */
    static int uniform(int lo, int hi) {
        std::random_device rd;
        std::default_random_engine e(rd());  // 生成随机无符号数, 落入区间[1, 2147483646]
        std::uniform_int_distribution<int> u(lo, hi - 1);
        return u(e);
    }

    /**
     * @brief 根据离散概率随机返回的 int 值(出现 i 的概率为 a[i])
     *
     * @param a 概率分布数组
     * @return int 下标
     */
    static int discrete(std::vector<double> a) {  // a[] 中各元素之和必须等于 1
        assert(std::abs(std::accumulate(a.begin(), a.end(), 0.0) - 1) <= 0.0001);
        std::random_device rd;
        std::default_random_engine e(rd());  // 生成随机无符号数, 落入区间[1, 2147483646]
        std::uniform_real_distribution<double> u(0, 1);
        const double r = u(e);
        double sum = 0.0;
        for (int i = 0; i != a.size(); ++i) {
            sum += a[i];
            if (sum >= r) {
                return i;
            }
        }
        return -1;
    }

    /**
     * @brief 随机将 double 数组中的元素排序
     * 
     * @param a 数组a
     */
    static void shuffle(std::vector<double>& a) {
        int N = static_cast<int>(a.size());
        for (int i = 0; i != N; ++i) {  // 将a[i]和a[i..N-1]中任意一个元素交换
            int r = i + uniform(N - i);
            std::swap(a[i], a[r]);
        }
    }
};

}  // namespace algorithms_4th

}  // namespace yaohui

#endif  // STDRANDOM_H