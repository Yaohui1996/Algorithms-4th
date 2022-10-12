#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include <vector>

namespace yaohui {

namespace algorithms_4th {
class BinarySearch {
public:
    // /* 循环版本 */
    // template <typename T>
    // static int rank(const T& key, const std::vector<T>& v) {
    //     int lo = 0;
    //     int hi = v.size() - 1;
    //     while (lo <= hi) {
    //         int mid = lo + (hi - lo) / 2;
    //         if (key < v[mid]) {
    //             hi = mid - 1;
    //         } else if (key > v[mid]) {
    //             lo = mid + 1;
    //         } else {
    //             return mid;
    //         }
    //     }
    //     return -1;
    // }

    /* 递归版本 */
    template <typename T>
    static int rank(const T& key, const std::vector<T>& v) {
        return rank_helper(key, v, 0, v.size() - 1);
    }

private:
    template <typename T>
    static int rank_helper(const T& key, const std::vector<T>& v, const int lo, const int hi) {
        if (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (key < v[mid]) {
                return rank_helper(key, v, lo, mid - 1);
            } else if (key > v[mid]) {
                return rank_helper(key, v, mid + 1, hi);
            } else {
                return mid;
            }
        }
        return -1;
    }
};

}  // namespace algorithms_4th
}  // namespace yaohui

#endif // BINARYSEARCH_H