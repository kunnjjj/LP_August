// https://leetcode.com/problems/xor-queries-of-a-subarray/
class Solution {
public:
    vector<int> xorQueries(vector<int>& A, vector<vector<int>>& Q) {
        
        
        int n=A.size();
        vector<int> prefix(n);
        
        prefix[0]=A[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1] ^ A[i];
        }
        vector<int> ans;
        for(int i=0;i<Q.size();i++)
        {
            int L=Q[i][0], R=Q[i][1];
            // cout<<"L:"<<L<<endl;
            // cout<<"R:"<<R<<endl;
            ans.push_back(prefix[R] ^ (L-1>=0?prefix[L-1]:0));
        }
        return ans;
    }
};