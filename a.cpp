#include <iostream>

#include <vector>

#include <set>

#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        set < int > uniqueValues;

        for (int i = 0; i < N; ++i) {
            int x;
            cin >> x;
            uniqueValues.insert(x);
        }

        vector < int > sorted(uniqueValues.begin(), uniqueValues.end());
        sort(sorted.rbegin(), sorted.rend());

        int maxSum = sorted[0] + sorted[1];

        cout << maxSum << endl;
    }

    return 0;
}