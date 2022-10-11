#ifndef STDSTATS_H
#define STDSTATS_H
#include <vector>

namespace yaohui {

namespace algorithms_4th {

class StdStats {
public:
    static std::vector<int> histogram(std::vector<int> a, int M) {
        std::vector<int> ret(M, 0);
        for (const int item : a) {
            if (item < M) {
                ++ret[item];
            }
        }
        return ret;
    }
};
}  // namespace algorithms_4th
}  // namespace yaohui

#endif  // STDSTATS_H
