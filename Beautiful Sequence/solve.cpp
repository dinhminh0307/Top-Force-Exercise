#include <iostream>

void recursion(int n, int m) {
    int arr[1000000007];

    for(int k = m; k < n; k++) {
            if(arr[k] == k + 1) {
                std::cout << "YES\n";
                break;
            }
            else continue;
            if(k == n - 1) {
                if(arr[k] == k + 1) {
                    std:: cout << "YES\n";
                }
                else  {
                    m++;
                    if(m == n - 1) {
                        std:: cout << "NO\n";
                        break;
                    }
                    recursion(n, m);
                }
            }
        }
    
}
void solve() {
    int t;
    int n;
    std:: cin >> t;
    int arr[1000000007];
    for(int i = 0; i < t; i++) {
        std::cin >> n;
        for(int  j = 0; j < n; j++) {
            std:: cin >> arr[j];
        }

        // logical here
        recursion(n, 0);
    }
}
int main() {
    solve();
    return 0;
}