class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n=k;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        multimap<int,int>ml;
        for(auto x:m){
            ml.insert({x.second,x.first});
        }
        for(auto it=ml.rbegin();it!=ml.rend();it++){
            ans.push_back(it->second);
            n--;
            if(n==0){
                break;
            }
        }
        return ans;
    }
};