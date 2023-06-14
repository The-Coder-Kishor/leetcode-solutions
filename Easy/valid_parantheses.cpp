#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stack.push_back(s[i]);
            }
            else{
                if(stack.size() == 0){
                    return false;
                }
                if(s[i] == ')' && stack.back() != '('){
                    return false;
                }
                if(s[i] == '}' && stack.back() != '{'){
                    return false;
                }
                if(s[i] == ']' && stack.back() != '['){
                    return false;
                }
                stack.pop_back();
            }
        }
        if(stack.size() != 0){
            return false;
        }
        return true;
    }
};