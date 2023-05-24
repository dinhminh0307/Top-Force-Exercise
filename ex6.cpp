#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

void solve() {
    int n, m, x, y;
    int arr[100005];
    int new_arr[100005];
    int array[100005];
    std::vector<int> vest;
    std::vector<int> vest2;
    int count = 0;
    int ctr = 0;
    std:: cin >> n >> m >> x >> y;
    for(int i = 0; i < n;i++) {
        std::cin >> arr[i];
    }

    for(int i = 0; i < m; i++) {
        std:: cin >> array[i];
        vest.push_back(array[i]);
    }

    for(int i = 0; i < n; i++) {
        if(vest.size() == 0) {
            break;
        }
        for(int j = 0; j < vest.size(); j++) {
            if(arr[i] - x <= vest[j] && vest[j] <= arr[i] + y) {
                vest2.push_back(vest[j]);
                new_arr[count] = i;
                vest.erase(vest.begin() + j);
                count++;
                break;
            }
            // Neu nhu nguoi linh thu a[i ko thoa man thi skip luon, ko dem]
            if(arr[i] - x > vest[j]) {
                break;
            }
            if(arr[i] + y < vest[j]) {
                continue; // vi ao co kich thuoc tang dan nen cu loop cho den khi nao mac vua
            }
            
        }
    }

    std:: cout << count << "\n";
    for(int i = 0; i < vest2.size(); i++) {
        std::cout << new_arr[i] + 1 << " " << i + 1 << "\n";
    }
}
int main() {
    solve();
    return 0;
}