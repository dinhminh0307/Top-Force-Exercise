#include <iostream>

void solve() {
    int friends[1005];
    int h;
    int n;
    int tall = 0;
    int small = 0;
    std::cin >> n >> h;
    for(int i = 0; i < n; i++) {
        std::cin >> friends[i];
    }

    for(int i = 0; i < n; i++) {
        if(friends[i] <= h) {
            small++;
        }
        else if(friends[i] > h) {
            tall++;
        }
    }

    int result = small * 1 + tall * 2;
    std::cout << result;
}
int main() {
    solve();
    return 0;
}