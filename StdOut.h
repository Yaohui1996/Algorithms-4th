#ifndef STDOUT_H
#define STDOUT_H

#include <iostream>
#include <string>
#include <sstream>

namespace yaohui {

namespace algorithms_4th {

class StdOut {
public:
    static void print(std::string s) { std::cout << s; }
    static void println(std::string s) { std::cout << s << std::endl; }
    static void println() { std::cout << std::endl; }

    // "HH{}xxx{}a"
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

    template <typename... Args>
    static void printf(const std::string &fmt, const Args &...args) {
        printf("%s", mini_format(fmt, args...).c_str());
    }

    // static void printf(const std::string &s) { std::cout << s; }
    // template <typename... Args>
    // static void printf(const std::string &s, const Args &...rest) {
    //     size_t i = 0;
    //     size_t cnt = 0;
    //     while (i < s.size() - 1) {
    //         if (s[i] == '{' && s[i + 1] == '}') {
    //             std::cout << s.substr(0, i) << ;
    //             printf(s.substr(i + 2, s.size() - (i + 2)), rest...);
    //             ++cnt;
    //             i += 2;
    //         } else {
    //             std::cout << s[i];
    //             ++i;
    //         }
    //     }
    // }
};

}  // namespace algorithms_4th

}  // namespace yaohui

#endif