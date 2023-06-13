#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int length = nums.size();

        for (int i = 0; i < length; i++) {
            int rem = target - nums[i];
            if (numMap.count(rem)) {
                return {numMap[rem], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};