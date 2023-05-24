#include <iostream>


int solve() {
    int t[95];
    int n;
    int count = 0;
    int index = 0;
    
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> t[i];
    }

    if(n == 1) {
        if(t[0] <= 15) {
            std::cout << t[0] + 15;
            return 0;
        }
        else {
            std::cout << 15;
            return 0;
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(t[0] > 15) {
            std::cout << 15;
            return 0;
        }
        if(t[i + 1] - t[i] <= 15) {
            index = i;
            continue;
        }
        if(i == n - 1) {
            if(90 - t[i] <= 15) {
                break;
            }
            else if(90 - t[i] > 15) {
                count++;
                break;
            }
            
        }
        if(t[i + 1] - t[i] > 15) {
            count++;
            break;
        }
    }
    int total = t[index + 1];
    if(count == 0) {
        std::cout << 90;
    }
    else {
        for(int i = 0; i < 15;i++) {
            total = total + 1;
    }

    std::cout << total;
    }
    
    return 0;
}
int main() {
    solve();
    return 0;

}