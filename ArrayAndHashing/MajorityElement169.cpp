class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=INT_MIN,max=0;
        for(auto x:m){
            if(x.second>max){
                max=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};