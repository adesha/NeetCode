class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
    unordered_map<string, vector<string>> hash;
    for (const auto& str : strs) {
        string sorted_str = str;
        sort(sorted_str.begin(), sorted_str.end());
        hash[sorted_str].push_back(str);
    }
    for (const auto& entry : hash) {
        ans.push_back(entry.second);
    }
    return ans;
    }
};