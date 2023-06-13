#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m + n;
        vector<int> nums;
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                nums.push_back(nums1[i]);
                i++;
            } else {
                nums.push_back(nums2[j]);
                j++;
            }
        }
        while (i < m) {
            nums.push_back(nums1[i]);
            i++;
        }
        while (j < n) {
            nums.push_back(nums2[j]);
            j++;
        }
        if(total%2 == 0) {
            return (nums[total/2] + nums[total/2 - 1])/2.0;
        }
        else {
            return nums[total/2];
        }
        return 0;
    }
};