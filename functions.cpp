#include<bits/stdc++.h>
using namespace std;
int func(int x,int y)
{
    int area=x*y;
    return area;
}
int  area_of_circle(int R)
{
    int pi=3;
    return pi * R * R;
}
void print_area(int L,int B)
{
    cout<<L*B<<endl;   
}
int main()
{

    cout<<func(4,3)<<endl;
    int l,b; cin>>l>>b;
    cout<<func(l,b)<<endl;

    int ar=area_of_circle(4);
    cout<<ar<<endl;
    print_area(4,4);
    
    return 0;
}
