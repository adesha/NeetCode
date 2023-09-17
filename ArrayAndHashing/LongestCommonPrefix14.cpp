class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        string ans="";
        int j=0;
        while(j<strs[0].size()){
            int flag=0;
            string c=strs[0];
            for(int i=1;i<strs.size();i++){
                if(c[j]==strs[i][j]){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                ans+=c[j];
            }
            else{
                break;
            }
            j++;
        }
        return ans;
    }
};