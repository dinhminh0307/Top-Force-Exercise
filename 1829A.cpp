#include <iostream>
// Link to the problem: https://codeforces.com/problemset/problem/1829/A

void solution() {
    int t;
    std::string tmp = "codeforces";
    std::string test;
    std::cin >> t;
    int result[t];
    for(int i=0; i<t; i++) {
        std:: cin >> test;
        int checker = 0;
        for(int j = 0; j < test.length(); j++) {
            for(int k = j; k < tmp.length(); k++) {
                if(tmp[k] != test[j]) {
                    checker++;
                    break;
                }
                else  {
                    break;
                }
            }
        }
        for(int m = i; m < t;m++) {
            if(m > i) {
                break;
            }
            result[m] = checker;
        }
    }

    for(int i = 0; i < t; i++) {
        std::cout << result[i] << std::endl;
    }
}
int main() {
    solution();
    return 0;
}