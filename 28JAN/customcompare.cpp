#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sumofdig(int x)
{
    int s=0;
    while(x>0)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}
bool comp(int a,int b)
{
    return sumofdig(a) <  sumofdig(b);
}
// property(a) <= property(b)
// yadi comp True return karta hai toh a comes before b
// else  b comes before a
int main()
{

    vector<int> A={103,1333,123,13,19,122};


    sort(A.begin(),A.end(),comp);
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;



    return 0;
}