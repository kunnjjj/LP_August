#include<bits/stdc++.h>
using namespace std;

class point
{
    public:
    int x,y;
    point(int xi,int yi)
    {
        x=xi;
        y=yi;
    }
};
bool comp(point P,point Q)
{
    int d1=(P.x * P.x + P.y * P.y);// pow(P.x,2) + pow(Q.x ,2)

    int d2=(Q.x * Q.x + Q.y * Q.y);


    if(d1 < d2)
    {
        return true; // P point comes before Q
    }
    else
    {
        return false; 
    }
}

bool comp2(pair<int,int> P,pair<int,int> Q)
{
    int d1=P.first * P.first + P.second * P.second;


    int d2=Q.first * Q.first + Q.second  * Q.second;

    if(d1 < d2) return true;
    else return false;

}
bool comp3(vector<int> P,vector<int> Q)
{

    int d1=P[0] * P[0] + P[1] * P[1];
    int d2=Q[0] * Q[0] + Q[1] * Q[1];

    if(d1 < d2)
    {
        return true;
    }
    return false;
}
int main()
{


    int n; cin>>n;
    vector<point> v;
    vector<pair<int,int>> v1;  //
    vector<vector<int>> v2;
    for(int i=0;i<n;i++)
    {
        int xi,yi; cin>>xi>>yi;

        vector<int> small;
        small.push_back(xi);
        small.push_back(yi);

        v2.push_back(small);

        point P(xi,yi);
        v.push_back(P);


        pair<int,int> p;
        p={xi,yi};
        // p.first=xi;
        // p.second=yi;
        // p=make_pair(xi,yi);

        

        // p={xi,{yi,zi}};


        v1.push_back(p);
        // cout<<P.x<<endl;
        // cout<<P.y<<endl;
    }
    sort(v.begin(),v.end(),comp);
    sort(v1.begin(),v1.end(),comp2);
    sort(v2.begin(),v2.end(),comp3);
    for(int i=0;i<n;i++)
    {
        cout<<v[i].x<<" , "<<v[i].y<<endl;

        cout<<v1[i].first<<" , "<<v1[i].second<<endl;
        cout<<v2[i][0]<<" , "<<v2[i][1]<<endl;
        cout<<endl;
    }


    // 


    return 0;
}