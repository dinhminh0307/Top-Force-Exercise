#include <iostream>

void solution() {
    int t, n;
    int arr[200005];
    std:: cin >> t;
    int counterOdd = 0;
    int counterEven = 0;

    for(int i = 0; i < t; i++) {
        std:: cin >> n;
        for(int j = 0; j < n; j++) {
            std:: cin >> arr[j];
        }

        for(int j = 0; j < n; j++) {
            if(arr[j] % 2 == 0) {
                counterOdd++;
            }
            else {
                counterEven++;
            }
            if(counterEven == n || counterOdd == n) {
                std:: cout << "Yes\n";
            }
            else {
                std:: cout << "No\n";
            }
        }
    }
}

int main() {
    solution();
    return 0;
}