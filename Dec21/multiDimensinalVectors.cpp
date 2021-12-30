#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v;

    // v.push_back(0);
    // // sz=1, i  can now access 0th element
    // cout<<"kunj"<<endl;

    // v[0]=5;

    // cout<<v[0]<<endl;

    vector<int> A(10,-1); // 10 default size
    for(int i=0;i<(int)A.size();i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    A.push_back(3);
    for(int i=0;i<(int)A.size();i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    vector<vector<int>> B(5,vector<int> (3,2));
    // here 5 is number of rows 
    // 3 is number of columns


    for(int i=0;i<(int)B.size();i++)
    {
        for(int j=0;j<(int)B[i].size();j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    int x=5;





    return 0;
}