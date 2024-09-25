#include <iostream>
#include <vector>
#include <algorithm>
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
        sort(a.begin(), a.end());
        int j = n - 2;
        while (j >= 0 && a[n - 1] == a[j]) {
            j--;
        }
        if (j >= 0) {
            int sum = a[n - 1] + a[j];
            cout << sum << endl;
        } else {
            cout << "All elements are the same" << endl;
        }
    }
    return 0;
}
