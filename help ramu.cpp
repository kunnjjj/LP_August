#include<bits/stdc++.h>
using namespace std;
int min_cost()
{
    int c1,c2,c3,c4; cin>>c1>>c2>>c3>>c4;

    int N,M; cin>>N>>M;

    int best_cost_rick=0;
    for(int i=0;i<N;i++)
    {
        int rides; cin>>rides; // number of time ramu is using ith rickshaw
        best_cost_rick+=min(c1 * rides,c2);
    }
    int best_cost_cab=0;
    for(int i=0;i<M;i++)
    {
        int rides; cin>>rides;
        best_cost_cab+=min(c1*rides,c2);
    }
    best_cost_rick=min(best_cost_rick,c3);// sare rick unlimited times
    best_cost_cab=min(best_cost_cab,c3);
    return min(best_cost_rick+best_cost_cab,c4);
}
int main()
{
    int number_of_cases;
    cin>>number_of_cases;
    for(int i=1;i<=number_of_cases;i++)
    {
        cout<<min_cost()<<endl;
    }
    // int i=1;
    // while(i<=number_of_cases)
    // {
    //     min_cost();
    //     i++;
    // }
}