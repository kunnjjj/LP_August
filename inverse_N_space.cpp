#include<iostream>
using namespace std;
int main() {
	int n; cin>>n;
	int values[n];
	for(int i=0;i<n;i++) cin>>values[i];
	int ans[n];
	for(int i=0;i<n;i++)
	{
		int kaunse_idx_par_dalna_hai=values[i];
		int kaunsi_value_hogi=i;
		ans[kaunse_idx_par_dalna_hai]=kaunsi_value_hogi;
	}
	for(int i=0;i<n;i++) cout<<ans[i]<<" ";
	return 0;
}