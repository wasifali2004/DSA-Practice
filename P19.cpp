#include <bits/stdc++.h>
using namespace std;

void bucket_sort(vector<float> &v) {
    int n = v.size();
    if (n <= 1) return;

    // Find the minimum and maximum values
    float in = *min_element(v.begin(), v.end());  // Correct initialization
    float ax = *max_element(v.begin(), v.end());  // Correct initialization

    // Calculate the range of each bucket
    float range = (ax - in) / n;  // Correct floating-point division

    // Create buckets
    vector<vector<float>> bucket(n);

    // Place elements into different buckets
    for (int i = 0; i < n; ++i) {
        int idx = (v[i] - in) / range;
        if (idx >= n) {
            idx = n - 1;
        }
        bucket[idx].push_back(v[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < n; ++i) {
        sort(bucket[i].begin(), bucket[i].end());
    }

    // Concatenate all buckets into the original vector
    int index = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < bucket[i].size(); ++j) {
            v[index++] = bucket[i][j];
        }
    }
}

int main() {
    vector<float> v = {0.3, 0.4, 0.5, 0.4, 0.1};
    bucket_sort(v);
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
