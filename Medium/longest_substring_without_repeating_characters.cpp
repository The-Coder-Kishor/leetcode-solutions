#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        int maxLen = 0;
        vector<int> visited(256, 0);
        int start = 0;
        for (int i = 0; i < length; i++) {
            if (visited[s[i]] == 0) {
                visited[s[i]] = 1;
            } else {
                maxLen = max(maxLen, i - start);
                while (s[start] != s[i]) {
                    visited[s[start]] = 0;
                    start++;
                }
                start++;
            }
        }
        maxLen = max(maxLen, length - start);
        return maxLen;
    }
};