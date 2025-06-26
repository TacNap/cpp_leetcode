#include "easy.h"
#include <iostream>
#include <map>
#include <unordered_set>
using namespace std;
//#include <unordered_map>

int roman_to_int(std::string s) {
    int result{0};
    // Maps Roman Numerals to their respective Integer values
    map<string, int> map_roman = {
        {"I", 1},
        {"IV", 4},
        {"V", 5},
        {"IX", 9},
        {"X", 10},
        {"XL", 40},
        {"L", 50},
        {"XC", 90},
        {"C", 100},
        {"CD", 400},
        {"D", 500},
        {"CM", 900},
        {"M", 1000}
    };

    // List of possible character prefixes
    unordered_set<char> prefixes = {
        'I',
        'X',
        'C'
    };

    for (int i = 0; i < s.length(); i++) {
        // If s[i] is I, X or C:
        if (prefixes.count(s[i]) && i <= s.length()-1) { // might also need to check string length at this point
            string pair = string(1, s[i]) + string(1, s[i+1]); // chars need to be converted to strings before they can be concatenated
            if (map_roman.count(pair)) {
                result += map_roman[pair];
                i++;
                continue;
            }
        }
        
        // s[i] returns a char, so we need to convert it to a string first:
        result += map_roman[string(1, s[i])]; 
        
    }

    return result;
}