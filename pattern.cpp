#include <bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<"kunj\tarora"<<endl;

    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int num = 1; num <= row; num++)
        {
            cout << num;
            cout << "\t";
        }
        int end_row = n - row + 1;
        // 1st from beg is 4th from end n=4
        //     4-1+1
        // 2nd from beg is 3rd from end
        //     4-2+1
        int combos = (end_row)*2 - 3;  // -1 
        for (int num = 1; num <= combos; num++)
        {
            cout << " \t"; // yaha ek space aur ek \t hai
        }
        // cout<<"kunj"<<endl;
        int start=row;
        if(row==n)
        {
            start--;
        }
        for(int num=start;num>=1;num--)
        {
            cout<<num<<"\t";
        }
        // cout<<"kunj";
        cout<<endl;

    }

    return 0;
}
