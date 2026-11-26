#include <iostream>
using namespace std;
void shuffle(const int nums[], int n, int result[]) {
    for (int i = 0; i < n; i++)
        result[2*i] = nums[i], result[2*i+1] = nums[n+i];
}
int main() {
    int n, a[1000], r[1000];
    cin >> n;
    for (int i = 0; i < 2*n; i++) cin >> a[i];
    shuffle(a, n, r);
    for (int i = 0; i < 2*n; i++) cout << r[i] << " ";
}
