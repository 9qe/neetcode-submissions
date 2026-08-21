#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Shelf where key = sorted label, value = list of matching words
        unordered_map<string, vector<string>> shelf;

        // Group words by their sorted letters
        for (string w : strs) {
            string label = w;
            sort(label.begin(), label.end());
            shelf[label].push_back(w);
        }

        // Collect all groups into the final result list
        vector<vector<string>> result;
        for (auto box : shelf) {
            result.push_back(box.second);
        }

        return result;
    }
};
