#include<iostream>

using namespace std;
int sqrt(int n)
{
    int ret=1;
    // 10
    // 1*1<=10
    // 2*2<=10
    // ret=2
    // 3*3<=10
    // ret=3
    // 4*4<=10
    for(int i=1;i*i<=n;i++)
    {
        if(i*i<=n)
        {
            ret=i;
        }
    }
    return ret;
}
int main()
{   
    int a,b,c; cin>>a>>b>>c;
    int D=b*b-4*a*c;
    if(D>0)
    {
        cout<<"Real and Distinct"<<endl;
        int r1=(-b + sqrt(D))/(2*a);
        int r2=(-b - sqrt(D))/(2*a);
        cout<<r2<<" "<<r1<<endl;
    }
    else if(D==0)
    {
        cout<<"Real and Equal"<<endl;
        int r1=(-b + sqrt(D))/(2*a);
        int r2=(-b - sqrt(D))/(2*a);
        cout<<r1<<" "<<r2<<endl;
    }
    else
    {
        cout<<"Imaginary"<<endl;
    }

    return 0;
}