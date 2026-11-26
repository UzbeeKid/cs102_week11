#include <iostream>
#include <cstring>
using namespace std;
void reverseString(char s[], int n) {
    for (int i = 0; i < n / 2; i++) {
        char t = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = t;
    }
}
int main() {
    char s[100001];
    cin >> s;
    reverseString(s, strlen(s));
    cout << s;
    return 0;
}
