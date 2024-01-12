#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, answer = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        answer *= 2;
        answer %= 1000000007;
    }
    cout << answer;
}
