#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{

    string s;
    cin >> s;

    int n = s.size();
    sort(s.begin(), s.begin() + n);
    int i = 0, max_cnt = 0;
    char good;

    i = 0;
    while (i < n)
    {
        int cnt = 0;
        char cur = s[i];
        while (i < n && s[i] == cur)
        {
            i++;
            cnt++;
        }

        if (cnt > max_cnt)
        {
            max_cnt = cnt;
            good = cur;
        }
    }
    // cur='a'
    // is line
    // i ko tab tak badhao jab tak cur char s[i]ke barabar hai
    // aise len
    // cur='a'

    // s="aabbbc"
    // yaha i=2
    // cnt=2
    cout << good << endl;
    // [idx,idx+n);
    // [3,5)
    // sort(arr,arr+n-1);

    // sort(s.begin(),s.end());

    // input
    // // len
    // // sort
    // [a,b,b,c,d]
    // [idx,idx+len)

    // sort(arr,arr+n);
    // [0,1,2,3,4]5
    //  |         |
    // begin      end

    // 0th address of arr
    // 0, 0+len

    return 0;
}