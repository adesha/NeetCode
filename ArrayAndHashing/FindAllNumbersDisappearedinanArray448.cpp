class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            arr[nums[i]-1]++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};