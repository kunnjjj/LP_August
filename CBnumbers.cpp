#include <bits/stdc++.h>
using namespace std;
// 0 and 1 are not a CB number.
//  2,3,5,7,11,13,17,19,23,29 are CB numbers.
// Any number not divisible by the numbers in point 2( Given above) are also CB numbers.
bool is_cb_number(long long n)
{
    if(n==0 || n==1) return false;
    vector<int> x={2,3,5,7,11,13,17,19,23,29};
    for(int i=0;i<x.size();i++)
    {   
        if(x[i]==n) return true;
    }
    for(int i=0;i<x.size();i++)
    {
        if(n%x[i]==0) return false;
    }
    return true;
}
long long to_number(string to_check)
{
    long long num=0;

    for(int i=0;i<to_check.size();i++)
    {
        num*=10;
        num+=(to_check[i]-'0');
    }
    return num;
}

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
    string s;
    cin >> s;
    // s[i.....j]
    vector<vector<int>> intervals;
    for(int i=0;i<n;i++)
    {
        // substring i,,,,j
        for(int j=i;j<n;j++)
        {
            int len=j-i+1;
            string to_check=s.substr(i,len);


            long long num=to_number(to_check);
            if(is_cb_number(num))  
            {
                int st=i,en=j;
                vector<int> cur={st,en};
                intervals.push_back(cur);
            }
            // s.substr(i,len)  s[i]...len
        }
    }
    // cout<<A.size()<<endl;
    cout<<get_max_meetings(intervals)<<endl;
    // for(int i=0;i<intervals.size();i++)
    // {
    //     cout<<"st: "<<intervals[i][0]<<" end: "<<intervals[i][1]<<endl;
    //     int len=intervals[i][1]-intervals[i][0]+1;
    //     cout<<s.substr(intervals[i][0],len)<<endl;
    // }

    return 0;
}