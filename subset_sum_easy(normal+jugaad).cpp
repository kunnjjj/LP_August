#include <bits/stdc++.h>
using namespace std;
void recursive_fn(int idx, int n, int A[], int sum, int &cnt)
{
    /*base*/
    if (idx == n)
    {
        if (sum == 0)
        {
            // ans_exits=true;
            cnt++;
        }
        return;
    }
    // sabne galat diya
    // v good
    // true:
    // false:
    // null:
    /*recursive*/
    recursive_fn(idx + 1, n, A, sum, cnt); // exclude

    recursive_fn(idx + 1, n, A, sum + A[idx], cnt); // include
}
bool does_set_exit(int A[], int n)
{
    // A[i]==0
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
            return true;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] + A[j] == 0)
                return true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (A[i] + A[j] + A[k] == 0)
                    return true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (A[i] + A[j] + A[k] + A[l] == 0)
                        return true;
                }
            }
        }
    }
    return false;
}
void test_case()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    /*
		work neeche
	*/
    // void recursive_fn(int idx,int n,int A[],int sum)
    // true ->
    // false->
    // bool ans_exists=false;
    
    // if (does_set_exit(A, n))
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    // {
    //     cout << "No" << endl;
    // }
    int cnt = 0;
    recursive_fn(0, n, A, 0, cnt);

    if (cnt >= 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        test_case();
    }

    return 0;
}
