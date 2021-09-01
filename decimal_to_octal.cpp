// ques link:https://hack.codingblocks.com/app/contests/1236/217/problem

#include<iostream>
using namespace std;
int main() {
	int n; cin>>n;
	int A[100]={0};
	int idx=0;
	while(n>0)
	{
		A[idx]=n%8;
		n/=8;
		idx++;
	}
	for(int j=idx-1;j>=0;j--) cout<<A[j];
	return 0;
}