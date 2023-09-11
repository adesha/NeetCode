class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median=0;
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>s(n1+n2);
        int i=0,j=0,z=0;
        while(i<n1 and j<n2){
            if(nums1[i]<nums2[j]){
                s[z]=nums1[i];
                i++;
                z++;
            }
            else{
                s[z]=nums2[j];
                j++;
                z++;
            }
        }
        while(i<n1){
            s[z]=nums1[i];
            i++;
            z++;
        }
        while(j<n2){
            s[z]=nums2[j];
            j++;
            z++;
        }
        if(((n1+n2)%2)==0){
            median=(double)(s[(n1+n2)/2]+s[((n1+n2-1)/2)])/2;
        }
        else{
            median=s[(n1+n2)/2];
        }
        return median;
    }
};