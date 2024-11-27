#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
         // Length of array
        
        int n;cin >> n;
        vector<int> a(n);
        map<int, int> freq;

        // Read the array and count frequencies
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        // Calculate the maximum number of pairs
        int score = 0;
        for (const auto& pair : freq) {
            score += pair.second / 2; // Count pairs for this value
        }

        cout << score << endl; // Output the result
    }

    return 0;
}
