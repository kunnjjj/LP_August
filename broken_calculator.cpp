#include<bits/stdc++.h>
using namespace std;
void multiply(int ans[],int mul, int &index/*TODO*/)
{
	int carry=0;
	for(int i=0;i<=index;i++)
	{
		int cur= mul * ans[i] + carry;
		int cur_digit=cur%10;
		carry=cur/10;
		ans[i]=cur_digit;
	}
	// cout<<"carry is: "<<carry<<endl;

	while(carry>0)
	{
		index++;
		ans[index]=carry%10;
		carry=carry/10;
	}
}

int main()
{

	int N;
	cin>>N;
	// 500->false
	// 1000->true
	// 750->
	int ans[999]={0};
	ans[0]=1;
	int index=0;
	for(int i=1;i<=N;i++)
	{
		multiply(ans,i,index);
		// for(int i=index;i>=0;i--) cout<<ans[i];
		// cout<<endl;
	}
	for(int i=index;i>=0;i--) cout<<ans[i];

// 1->aayi
// 0->nahi aayi
	return 0;
}
