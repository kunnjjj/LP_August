// https://hack.codingblocks.com/app/contests/1236/446/problem

#include<iostream>
using namespace std;
int main() {
	int k; cin>>k;
	string s; cin>>s;
	int n=s.size();

	int freq_a=0,freq_b=0;
	int i=0;
	int ans=0;
	for(int j=0;j<n;j++)
	{
		if(s[j]=='a') freq_a++; // freq jth char ek se badhai
		else freq_b++;

		while(min(freq_a,freq_b) > k)  
		{ 
			// move i untill not valid
			if(s[i]=='a') freq_a--;
			else freq_b--;
			i++;
		}
		ans=max(j-i+1,ans);
	}
	cout<<ans<<endl;

	return 0;
}