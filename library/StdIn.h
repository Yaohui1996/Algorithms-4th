#ifndef STDIN_H
#define STDIN_H

#include <fstream>
#include <string>
#include <vector>

namespace yaohui {

namespace algorithms_4th {

class StdIn {
public:
    static std::vector<int> readInts(const std::string& s) {
        std::ifstream in(s, std::ios::in);
        std::vector<int> ret;
        std::string line;
        while (std::getline(in, line)) {
            ret.push_back(std::stoi(line));
        }
        return std::move(ret);
    }
};

}  // namespace algorithms_4th

}  // namespace yaohui

#endif
