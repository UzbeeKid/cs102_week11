#include <iostream>
#include <algorithm>
using namespace std;
int countValue(const int a[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == x) {
            int count = 1;
            for (int i = mid - 1; i >= 0 && a[i] == x; i--) count++;
            for (int i = mid + 1; i < n && a[i] == x; i++) count++;
            return count;
        }
        if (a[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}
int main() {
    int n, x, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    sort(a, a + n);
    cout << countValue(a, n, x);
}
