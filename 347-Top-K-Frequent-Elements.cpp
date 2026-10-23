class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> freq;

        for (int i = 0; i < nums.size(); i++) {
            bool found = false;

            // Check whether this number is already counted
            for (int j = 0; j < freq.size(); j++) {
                if (freq[j].first == nums[i]) {
                    found = true;
                    break;
                }
            }

            if (found) continue;

            int count = 0;

            // Count occurrences of nums[i]
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }

            freq.push_back({nums[i], count});
        }

        // Sort by frequency, highest first
        sort(freq.begin(), freq.end(),
             [](auto a, auto b) {
                 return a.second > b.second;
             });

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};