class Solution {
public:
    bool isPalindrome(string s) {
        string str;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z')
            str.push_back((char)s[i]+32);
        else if(s[i]>='a' && s[i]<='z')
            str.push_back(s[i]);
        else if(s[i]>='0' && s[i]<='9')
            str.push_back(s[i]);
    }
    
    int st=0, e=str.size()-1;
    while(st<e){
        if(str[st]!=str[e])
            return false;
        else{
            st++; e--;
        }
    }
    
    return true;
    }
};