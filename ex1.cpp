// Given a string s, find the length of the longest substring without repeating characters.

#include <stdio.h>
#include <iostream>

bool isPalindrome(int x) {
    std:: string number = std::to_string(x);
    int counter = 0;
    for(int i = 0; i < number.length(); i++) {
        if(number[i] != '-') {
            if(number[i] == number[number.length() / 2 - i - 1]) {
            counter++;
        }
        }
        else if(number[i] == '-') {
            if(number[i + 1] == number[number.length() / 2 - i - 2]) {
            counter++;
        }
        }
        
    }
    if(number[0] != '-') {
        if(counter == number.length() - 1) {
        return true;
    }
    else return false;
    }
    else if(number[0] == '-') {
        if(counter == number.length() - 2) {
        return true;
    }
    else return false;
    }
    
}

int main() {
    if(isPalindrome(121)) {
        std:: cout << "True";
    } else std::cout << "False";
}