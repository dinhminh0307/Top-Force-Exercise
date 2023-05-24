#include <iostream>

int solve() {
    int t;
    int n, k;
    int sum = 1;
    int result = 0;
    std:: cin >> t;
    if(t > 100000) {
        return 0;
    }
    for(int i = 0; i < t; i++) {
        std:: cin >> n >> k;
    }

    for(int i = 0; i < k;i++) {
        result += sum;
        sum = sum + 2;
        if(result > n) {
        std::cout << "NO\n";
        break;
    }
    else if(result <= n) {
        if((n - result) % 2 == 0) {
            std::cout << "YES\n";
        }
        else std::cout << "NO\n";
    }
    }

    

    // logical to solve the problem
    return 0;
}

int main() {
    solve();
    return 0;
}