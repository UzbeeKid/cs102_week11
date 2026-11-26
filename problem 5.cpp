#include <iostream>
using namespace std;
int search(const int nums[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main() {
    int n, target, nums[10000];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> nums[i];
    cin >> target;
    cout << search(nums, n, target);
}
