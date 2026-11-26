#include <iostream>
using namespace std;
int countValue(const int a[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x) count++;
    return count;
}
int main() {
    int n, x, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    cout << countValue(a, n, x);
}
