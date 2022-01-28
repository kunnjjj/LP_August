#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>> ans;
int k;
void make_subsets(vector<int> &A,int sum,vector<int> &cur,int i)
{
    if(i==A.size())
    {
        if(sum==k)
        {
            ans.push_back(cur);
        }
        return ;
    }
    // rec fn mai 
    // either include A[i]
    
    cur.push_back(A[i]);
    make_subsets(A,sum + A[i],cur,i+1);
    cur.pop_back();// backtrack,

    // exclude A[i] in sum
    make_subsets(A,sum,cur,i+1);
}
bool comp(vector<int> &a,vector<int> &b)
{
    return a.size() <= b.size();
}
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    cin>>k;

    vector<int> cur;
    make_subsets(A,0,cur,0);
    // ans vector ke andar kuch 1D vectors stored honge


    sort(ans.begin(),ans.end(),comp); // 2 D vector

    for(int i=0;i<ans.size();i++)
    {
        for(int j=ans[i].size()-1;j>=0;j--)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}