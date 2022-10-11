// 编写一段程序，从标准输入按行读取数据，其中每行都包含一个名字和两个整数。然后用
// printf() 打印一张表格，每行的若干列数据包括名字、两个整数和第一个整数除以第二个整数
// 的结果，精确到小数点后三位。可以用这种程序将棒球球手的击球命中率或者学生的考试分数
// 制成表格。

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "StdOut.h"

using yaohui::algorithms_4th::StdOut;

int main(int argc, char* argv[]) {
    std::ifstream in;
    in.open(argv[1], std::ios::in);
    std::vector<std::string> s_vec;
    std::string line;
    while (std::getline(in, line)) {
        std::stringstream tmp;
        tmp << line;
        std::string word;
        while (std::getline(tmp, word, ',')) {
            s_vec.push_back(word);
        }
    }
    in.close();
    std::vector<std::string> c1;
    std::vector<int> c2;
    std::vector<int> c3;
    for (size_t i = 0; i != s_vec.size(); ++i) {
        if (i % 3 == 0) {
            c1.push_back(s_vec.at(i));
        } else if (i % 3 == 1) {
            c2.push_back(std::stoi(s_vec.at(i)));
        } else if (i % 3 == 2) {
            c3.push_back(std::stoi(s_vec.at(i)));
        }
    }
    std::vector<double> c4(c1.size(), 0.0);
    /* [begin] debug info */
    StdOut::print_vector(c1);
    StdOut::print_vector(c2);
    StdOut::print_vector(c3);
    StdOut::print_vector(c4);
    /* [end] debug info */
    for (size_t i = 0; i != c1.size(); ++i) {
        c4.at(i) = static_cast<double>(c2.at(i)) / static_cast<double>(c3.at(i));
    }

    for (size_t i = 0; i != c1.size(); ++i) {
        std::cout << c1.at(i) << "\t" << c2.at(i) << "\t" << c3.at(i) << "\t" << c4.at(i) << std::endl;
    }

    return 0;
}