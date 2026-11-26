#include <iostream>
using namespace std;
int largestAltitude(const int gain[], int n) {
    int altitude = 0, best = 0;
    for (int i = 0; i < n; i++) {
        altitude += gain[i];
        if (altitude > best)
            best = altitude;
    }
    return best;
}
int main() {
    int n, gain[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> gain[i];
    cout << largestAltitude(gain, n);
}
