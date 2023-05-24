#include <iostream>

int main() {
    int a[30005];
    int n;
    int t;

    std::cin >> n >> t;
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int p = 1;
    while(p < t) {
        if(p == t) {
        std::cout << "Yes";
    }
    else {
        p = p + a[p];
    }

    if(p > t) {
        std::cout << "No";
    }
    }

   
    return 0;
}