#include <iostream>
#include <string>
#include "easy.h"
using namespace std;


bool isPalindrome(int x) {
    // if x is negative
    if(x < 0) {
    	return false;
    }
    // if x is one digit
    if(x < 10) {
    	return true;
    }

    string x_string, x_string_reversed;
    x_string = x_string_reversed = to_string(x);
   	// Reverse the String
    reverse(x_string_reversed.begin(), x_string_reversed.end());

    // Compare X with reversed X
    if(x_string == x_string_reversed) {
    	return true;
    }

    return false;
}

string intToRoman(int num) {
        int remainder = num;
        int M, D, C, L, X, V, I;
        M = int(remainder / 1000);
        remainder = remainder % 1000;
        cout << remainder << endl;

        D = int(remainder / 500);
        remainder = remainder % 500;
        cout << remainder << endl;

        C = int(remainder / 100);
        remainder = remainder % 100;
        cout << remainder << endl;

        L = int(remainder / 50);
        remainder = remainder % 50;
        cout << remainder << endl;

        X = int(remainder / 10);
        remainder = remainder % 10;
        cout << remainder << endl;

        V = int(remainder / 5);
        remainder = remainder % 5;
        cout << remainder << endl;

        I = remainder;

        cout << endl << M << endl << D << endl << C << endl << L << endl << X << endl << V << endl << I << endl;

        //string roman = M*"M"+D*"D"+C*"C";
        string roman = "not implemented";
        return roman;
}

int getInput()
{
    cout << "Enter an integer: ";
    int input{};
    cin >> input;

    return input;
}

int main () {

	/********************************************************************/
	// isPalindrome
	/********************************************************************/
	if(false) {
        int x  = -11;
        cout << x << ": " << (isPalindrome(x) ? "True" : "False") << endl;
        x = 0;
        cout << x << ": " << (isPalindrome(x) ? "True" : "False") << endl;
        x = 1;
        cout << x << ": " << (isPalindrome(x) ? "True" : "False") << endl;
        x = 9;
        cout << x << ": " << (isPalindrome(x) ? "True" : "False") << endl;
        x = 10;
        cout << x << ": " << (isPalindrome(x) ? "True" : "False") << endl;
        x = 11;
        cout << x << ": " << (isPalindrome(x) ? "True" : "False") << endl;
        x = 22;
        cout << x << ": " << (isPalindrome(x) ? "True" : "False") << endl;
        x = 100;
        cout << x << ": " << (isPalindrome(x) ? "True" : "False") << endl;
    }

	/********************************************************************/
	// intToRoman
	/********************************************************************/
    if(false){
        cout << "roman_to_int Testing" << endl;
    
        // Test basic numerals
        cout << "I: " << roman_to_int("I") << " (expected: 1)" << endl;
        cout << "V: " << roman_to_int("V") << " (expected: 5)" << endl;
        cout << "X: " << roman_to_int("X") << " (expected: 10)" << endl;
        cout << "L: " << roman_to_int("L") << " (expected: 50)" << endl;
        cout << "C: " << roman_to_int("C") << " (expected: 100)" << endl;
        cout << "D: " << roman_to_int("D") << " (expected: 500)" << endl;
        cout << "M: " << roman_to_int("M") << " (expected: 1000)" << endl;
        
        // Test subtractive cases
        cout << "IV: " << roman_to_int("IV") << " (expected: 4)" << endl;
        cout << "IX: " << roman_to_int("IX") << " (expected: 9)" << endl;
        cout << "XL: " << roman_to_int("XL") << " (expected: 40)" << endl;
        cout << "XC: " << roman_to_int("XC") << " (expected: 90)" << endl;
        cout << "CD: " << roman_to_int("CD") << " (expected: 400)" << endl;
        cout << "CM: " << roman_to_int("CM") << " (expected: 900)" << endl;
        
        // Test complex cases
        cout << "III: " << roman_to_int("III") << " (expected: 3)" << endl;
        cout << "LVIII: " << roman_to_int("LVIII") << " (expected: 58)" << endl;
        cout << "MCMXCIV: " << roman_to_int("MCMXCIV") << " (expected: 1994)" << endl;
        cout << "MCDXLIV: " << roman_to_int("MCDXLIV") << " (expected: 1444)" << endl;
    }
    

	return 0;
}