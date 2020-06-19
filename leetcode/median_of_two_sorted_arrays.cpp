//O(log(m+n)) solution --> best time complexity 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        #define big 1000000009
        int n = nums1.size()+nums2.size();
        int middle = n/2;
        int left = 0;
        int right = 0;
        int count = 0;
        int prev = 0,now = 0,l,r;
        while(true){
            if(left<nums1.size())
                l = nums1[left];
            else
                l = big;
            if(right<nums2.size())
                r = nums2[right];
            else
                r = big;
            if(l<r){
                now = l;
                left++;
            }
            else{
                now = r;
                right++;
            }
            count++;
            if(count-1==middle){
                if(n%2==0){
                    return (double)(prev+now)/2;
                }
                else
                    return now;                    
            }
            prev = now;
        }
    }
};