#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    bool is_valid(vector<int> &freq)
    {
        for(int i=0;i<256;i++)
        {
            if(freq[i]>=2) return false;
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        // time: O(n*a)
        // space: O(a)
        vector<int> freq(256,0);
        int ans=0;
        for(int j=0;j<n;j++)
        {
            //jth character ki freq increase by 1 kari
            freq[s[j]]++;
            
            // move i until we are not valid
            while(!is_valid(freq)) // we will implement is valid
            {
                freq[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            // take max with ans
            
        }
        return ans;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // time: O(n)
        // space: O(a)
        int n=s.size();
        int i=-1;
        vector<int> last_occurence(256,-1);
        int ans=0;
        for(int j=0;j<n;j++)
        { //jth character ki freq increase by 1 kari
            i=max(i,last_occurence[s[j]]);
            
            ans=max(ans,j-i);
            last_occurence[s[j]]=j;
        }
        return ans;
    }
};