#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
 
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        for (int i = 0; i < n; i++) {
 
            // 1 divides everything
            if (a[i] == 1) {
                a[i]++;
            }
 
            // ensure ai is not divisible by previous
            if (i > 0 && a[i] % a[i - 1] == 0) {
                a[i]++;
            }
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
 
        cout << '\n';
    }
 
    return 0;
}