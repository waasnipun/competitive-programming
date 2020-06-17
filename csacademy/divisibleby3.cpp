#include <iostream>
using namespace std;

int n;
long long freq[3];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        freq[val % 3] += 1;
    }
    cout << freq[0] * (freq[0] - 1) / 2 + freq[1] * freq[2] << "\n";
}