// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

 

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

// Constraints:

// nums1.length == m
// nums2.length == n
// 0 <= m <= 1000
// 0 <= n <= 1000
// 1 <= m + n <= 2000
// -106 <= nums1[i], nums2[i] <= 106

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // num1 should be small in size
       int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1+n2;
        
        if(n1 > n2)
            return findMedianSortedArrays(nums2,nums1);
        
        int l=0, r=n1;
        int left1,left2,right1,right2;
        
        while(l <= r)
        {
            int mid = l+(r-l)/2;
            int count = n/2-(mid);
            // cout<<" l = "<<l<<" r = "<<r<<" mid = "<<mid<<" count = "<<count<<endl;
            left1 = (mid==0)?INT_MIN:nums1[mid-1];
            right1 = (mid==n1)?INT_MAX:nums1[mid];
            left2 = (count==0)?INT_MIN:nums2[count-1];            
            right2 = (count==n2)?INT_MAX:nums2[count];
            
            if(left1 <= right2 && left2 <= right1)
            {
                if(n&1)
                    return min(right1,right2);
                else
                {
                    double x = max(left1,left2);
                    double y = min(right1,right2);
                    return (x+y)/2;
                }
            }
            else if(left1 > right2)
                r = mid-1;
            else if(left2 > right1)
                l = mid+1;
        }

        return 0;
    }
};








