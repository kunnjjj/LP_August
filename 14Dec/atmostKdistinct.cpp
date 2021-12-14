#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/subarrays-with-k-different-integers/
int atmostKdistinctBrute(vector<int> &A, int k) // O(n^2)
{

    int n = A.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        unordered_map<int, int> mp;
        int mIdx = i;
        for (int j = i; j < n; j++)
        {
            mp[A[j]]++;
            if (mp.size() <= k)
            {
                mIdx = j;
            }
            else
            {
                break;
            }
        }
        // cout<<"i is: "<<i<<endl;
        // cout<<"mIdx is: "<<mIdx<<endl;
        ans += (mIdx - i + 1);
    }
    // int ans=0;
    return ans;
}
int atmostKDistinct(vector<int> &A, int k)
{

    vector<int> freq((int)2e4 + 1, 0);
    int i = 0;
    int ans = 0;
    int cur = 0; // currently kitne distinct elements hai
    for (int j = 0; j < A.size(); j++)
    {
        if (freq[A[j]] == 0)
            cur++; // A[j] is not considered yet,
        freq[A[j]]++;
        while (cur > k)
        {
            freq[A[i]]--;
            if (freq[A[i]] == 0)
                cur--;
            i++;
        }
        ans += (j - i + 1);
    }
    return ans;
}
int subarraysWithKDistinct(vector<int> &A, int k)
{
    return atmostKDistinct(A, k) - atmostKDistinct(A, k - 1);
}
int main()
{
    int n;
    cin >> n;
    int k;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    // unordered_map<int,int> freq;
    // for(int i=0;i<n;i++)
    // {
    //     freq[A[i]]++;
    //     cout<<freq.size()<<endl;
    // }
    // // competition companion

    // for(pair<int,int> p:freq)
    // {
    //     cout<<"key is "<<p.first<<" , value is: "<<p.second<<endl;
    // }

    // freq[4]--;
    // cout<<freq.size()<<endl;
    // for(pair<int,int> p:freq)
    // {
    //     cout<<"key is "<<p.first<<" , value is: "<<p.second<<endl;
    // }

    // cout<<freq[10]<<endl;

    // cout<<freq.size()<<endl;
    // for(pair<int,int> p:freq)
    // {
    //     cout<<"key is "<<p.first<<" , value is: "<<p.second<<endl;
    // }

    cin >> k;
    cout << subarraysWithKDistinct(A, k) << endl;

    // cout<<atmostKdistinctBrute(A,k)<<endl;
    // cout<<atmostKDistinct(A,k)<<endl;

    return 0;
}