#include <bits/stdc++.h>

using namespace std;

bool comp(vector<int> a, vector<int> b)
{
    // increasing order mai, with respect to element at 1st index
    // return a[1] < b[1];
    if (a[1] < b[1]) // "BADA BADA TRUE"
    {
        return true;
    }
    else
    {
        return false;
    }
}
// if comparator returns true,
// this means that a should be placed first and b should be placed second
// in sorted order

bool cmp2(int a, int b)
{
    return a < b;
}
int get_max_meetings(vector<vector<int>> &intervals)
{
    if (intervals.empty())
        return 0;
    /*
    // sort(intervals.begin(),intervals.end());
    this will sort on basis of first element
    then if first elements are equals then sorts according to second element
    ....and so on
    */
    sort(intervals.begin(), intervals.end(), comp); // comp: comp func ka naam

    int mxTime = intervals[0][1];
    int ans = 1;
    for (int i = 1; i < intervals.size(); i++)
    {
        // agar cur meeting ka st  < mxTime then i cant choose it
        if (intervals[i][0] <= mxTime)
        {
        }
        else
        {
            ans++;
            mxTime = intervals[i][1];
        }
    }
    return ans;
}
int main()
{

    int n;
    cin >> n;
    // vector<int> C;
    // sort(C.begin(),C.end(),cmp2);

    vector<vector<int>> intervals;

    for (int i = 0; i < n; i++)
    {
        int st, et;
        cin >> st >> et;            // st: starting and ending interval times
        vector<int> cur = {st, et}; // is line mai badlav karna hai
        // i can simply swap these, jugaad
        intervals.push_back(cur);
    }
    // is line
    //  intervals[i] kisi bhi ith index par ek vector hoga
    //  uski len=2

    // kis basis par ye sorting hogi?

    // for(int i=0;i<intervals.size();i++)
    // {
    //     cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
    // }
    // int abhiTakKaMaxTime=intervals[0][1];
    cout << get_max_meetings(intervals) << endl;

    return 0;
}