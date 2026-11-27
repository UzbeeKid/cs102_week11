#include <iostream>
using namespace std;
void duplicateZeros(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (arr[i] == 0) {
            for (int j = n - 1; j > i + 1; j--) arr[j] = arr[j - 1];
            arr[++i] = 0;
        }
}
int main() {
    int n, a[10000];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    duplicateZeros(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
