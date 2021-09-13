#include<iostream>
using namespace std;
int main() {
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		int orig_val_which_was_in_array=arr[i]%n;
		// now this orig_val will be index for ans
		int value_kaunsi_add_hai=i * n;
		arr[orig_val_which_was_in_array]+=value_kaunsi_add_hai;
	}
	for(int i=0;i<n;i++) cout<<arr[i]/n<<" ";

	return 0;
}