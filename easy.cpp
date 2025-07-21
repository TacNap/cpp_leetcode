#include "easy.h"
#include <iostream>
#include <map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;
//#include <unordered_map>

/*
The dictionary doesn't need to include paired combinations - it could also be changed to just 'char'.
"IV" is equivalent to "V - I"
AND
Roman numerals are written largest - smallest, from left to right.
Therefore, you never have a case of I then C, for example.
This means you can simply check:
    if i < i+i {
        result - dict[i]
    } else {
        result + dict[i] 
    }
*/
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

std::string longest_common_prefix(std::vector<string>& strs) {
    // if strs.length == 1 { return "";}
    // check if any strs[i].length == 0 { return ""; }
    /*
    for i in strs {
        result +=
        for each string
            if string[i] == 
    
    
        */
    return "string";
}

bool contains_duplicate(std::vector<int>& nums) {
    if(nums.size() == 1) {
        return false;
    }
    // Create a set from nums, holding only unique elements in order
    set<int> nums_set(nums.begin(), nums.end());
    // If the set contains fewer elements, there must be duplicates
    if (nums.size() > nums_set.size()) {
        return true;
    } else {
        return false;
    }
}

bool is_anagram(std::string s, std::string t) {
    if (s.size() != t.size()) {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s != t) {
        return false;
    }
    return true;


}
/*
This approach doesn't actually work.
To implement a method that only iterates once, you'd need hash-maps.
Will finish this another time. 
*/
std::vector<int> two_sum(std::vector<int>& nums, int target) {
    // Declare the return array 
    vector<int> output;
    bool debug = true;
    
    // Sort the array in-place
    sort(nums.begin(), nums.end());

    // Iterate through the vector backwards
    for(int i = nums.size()-1; i >= 0; i--) {
        if (debug) {
            cout << "----\ni: " << i << endl;
            cout << "nums[i]: " << nums[i] << endl;
            cout << "target: " << target << endl;
            cout << "----" << endl;
        }
        
        if (nums[i] <= target) {
            output.push_back(nums[i]);
            target -= nums[i];
        }
    }
    return output;

    /* Psuedo for O(n^2) implementation
    // double nested [i, j] loop
    // if i + j == target, output.push_back{i, j}
    // return output
    */


}


bool isPalindrome(string s) {
    // iterate through the string - or use some function - to conver to lowercase and remove non-alphanumeric chars
    // iterate through the sting with a pointer at front AND back
    // if pointers differ, return false
}