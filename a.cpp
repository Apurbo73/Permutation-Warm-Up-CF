#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int half = n / 2;
    
        int M = 0;
        for (int i = 1; i <= half; ++i) {
            M += (n + 1) - 2 * i;
        }
        M *= 2;

        cout << M / 2 + 1 << "\n";
    }
    return 0;
}
