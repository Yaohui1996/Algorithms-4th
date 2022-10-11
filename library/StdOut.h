#ifndef STDOUT_H
#define STDOUT_H

#include <cstdint>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
namespace yaohui {

namespace algorithms_4th {

class StdOut {
public:
    template <typename T>
    static void print(const T &content) {
        std::cout << content;
    }

    template <typename T>
    static void println(const T &content) {
        std::cout << content << std::endl;
    }

    static void println() { std::cout << std::endl; }
    template <typename... Args>
    static void mini_printf(const std::string &fmt, const Args &...args) {
        printf("%s", mini_format(fmt, args...).c_str());
    }

    template <typename BuildInType>
    static void print_list(const std::list<BuildInType> &li) {
        std::ostringstream oss;
        for (auto iter = li.cbegin(); iter != li.cend(); ++iter) {
            oss << *iter << ", ";
        }
        std::string os(std::move(oss.str()));
        os.pop_back();
        os.pop_back();
        std::cout << os << std::endl;
    }

    template <typename BuildInType>
    static void print_vector(const std::vector<BuildInType> &vec) {
        for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
            if (iter != vec.end() - 1) {
                std::cout << *iter << ", ";
            } else {
                std::cout << *iter << std::endl;
            }
        }
    }

    template <typename BuildInType>
    static void print_deque(const std::deque<BuildInType> &deq) {
        for (auto iter = deq.cbegin(); iter != deq.cend(); ++iter) {
            if (iter != deq.end() - 1) {
                std::cout << *iter << ", ";
            } else {
                std::cout << *iter << std::endl;
            }
        }
    }

    template <typename BuildInType>
    static void print_2d_vec_transpose(const std::vector<std::vector<BuildInType>> &mat) {
        size_t M = mat.size();     // row nums
        size_t N = mat[0].size();  // col nums
        for (size_t j = 0; j != N; ++j) {
            for (size_t i = 0; i != M; ++i) {
                std::cout << mat[i][j];
                if (i != M - 1) {
                    std::cout << "\t";
                } else {
                    std::cout << std::endl;
                }
            }
        }
    }

private:
    using arg_builder_t = std::function<void(std::ostream &)>;
    static std::string mini_format_impl(const std::string &fmt, const std::vector<arg_builder_t> &arg_builders) {
        std::ostringstream ss;
        size_t start = 0;
        for (size_t i = 0; i < arg_builders.size(); ++i) {
            std::size_t pos = fmt.find("{}", start);
            if (pos == std::string::npos) break;
            ss << fmt.substr(start, pos - start);
            arg_builders[i](ss);
            start = pos + 2 /* length of "{}" */;
        }
        ss << fmt.substr(start);
        return ss.str();
    }
    template <typename Arg>
    static arg_builder_t mini_format_arg(const Arg &arg) {
        return [&arg](std::ostream &ss) { ss << arg; };
    }
    template <typename... Args>
    static std::string mini_format(const std::string &fmt, const Args &...args) {
        return mini_format_impl(fmt, {mini_format_arg(args)...});
    }
};

}  // namespace algorithms_4th

}  // namespace yaohui

#endif