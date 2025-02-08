
#include <bits/stdc++.h>
using namespace std;

int main() {
    string t, o, r;
    cin >> t >> o >> r;

    // Frequency arrays for each name
    int freq_t[26] = {0}, freq_o[26] = {0}, freq_r[26] = {0};
    for(char c : t) freq_t[c - 'A']++;
    for(char c : o) freq_o[c - 'A']++;
    for(char c : r) freq_r[c - 'A']++;

    // Compute the required frequency for each letter
    int required_freq[26] = {0};
    for(int i = 0; i < 26; ++i) {
        required_freq[i] = max({freq_t[i], freq_o[i], freq_r[i]});
    }

    // List of sheets
    vector<pair<char, char>> sheets;

    // Assign letters to sheets
    for(int i = 0; i < 26; ++i) {
        if(required_freq[i] > 0) {
            char current_letter = 'A' + i;
            int count = required_freq[i];
            while(count > 0) {
                if(count >= 2) {
                    // Pair with another instance of the same letter
                    sheets.emplace_back(current_letter, current_letter);
                    count -= 2;
                } else {
                    // Find another letter to pair with
                    bool paired = false;
                    for(int j = i + 1; j < 26; ++j) {
                        if(required_freq[j] > 0) {
                            char other_letter = 'A' + j;
                            sheets.emplace_back(current_letter, other_letter);
                            required_freq[j]--;
                            paired = true;
                            break;
                        }
                    }
                    if(!paired) {
                        // No other letter available, pair with itself
                        sheets.emplace_back(current_letter, current_letter);
                    }
                    count -= 1;
                }
            }
        }
    }

    // Output the result
    cout << sheets.size() << "\n";
for(int i = 0; i < sheets.size(); ++i) {
    cout << sheets[i].first << sheets[i].second << "\n";
}

    return 0;
}
