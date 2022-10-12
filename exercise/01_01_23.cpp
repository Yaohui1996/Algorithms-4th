// 为 BinarySearch 的测试用例添加一个参数：+ 打印出标准输入中不在白名单上的值；-，则打
// 印出标准输入中在白名单上的值。

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "BinarySearch.h"

using yaohui::algorithms_4th::BinarySearch;

int main(int argc, char* argv[]) {
    /* read white list */
    std::ifstream white_list_file(argv[1], std::ios::in);
    if (!white_list_file.is_open()) {
        std::cerr << "failed to open " << argv[1] << std::endl;
        return -1;
    }
    std::vector<std::string> white_list;
    std::string tmp_line;
    while (std::getline(white_list_file, tmp_line)) {
        white_list.push_back(tmp_line);
    }
    white_list_file.close();
    /* read key list */
    std::ifstream key_list_file(argv[2], std::ios::in);
    if (!key_list_file.is_open()) {
        std::cerr << "failed to open " << argv[2] << std::endl;
        return -1;
    }
    std::vector<std::string> key_list;
    while (std::getline(key_list_file, tmp_line)) {
        key_list.push_back(tmp_line);
    }
    key_list_file.close();

    for (size_t i = 0; i != key_list.size(); ++i) {
        const auto key = key_list.at(i);
        int result = BinarySearch::rank(key, white_list);
        if (result == -1) {
            std::cout << i << ": +" << key << std::endl;
        } else {
            std::cout << i << ": -" << key << std::endl;
        }
    }

    return 0;
}