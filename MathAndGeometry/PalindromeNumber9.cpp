class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 or(x%10==0 and x!=0)){
            return false;
        }
        int r=0;
        while(x>r){
            int rem=x%10;
            r=r*10+rem;
            x=x/10;
        }
        return x==r || x== r/10;
    }
};