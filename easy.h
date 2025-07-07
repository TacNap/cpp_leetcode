#include <string>
#include <vector>
// note: using `namespace std` is strongly advised against in header files
// You can use it in the respective .cpp files though
#ifndef EASY_H
#define EASY_H

// URL: https://leetcode.com/problems/roman-to-integer/description/
int roman_to_int(std::string s);

// URL: https://leetcode.com/problems/longest-common-prefix/
std::string longest_common_prefix(std::vector<std::string>& strs);
#endif