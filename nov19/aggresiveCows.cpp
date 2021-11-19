#include <bits/stdc++.h>
using namespace std;
#define LL long long
bool kya_cows_is_dist_par_baith_sakti_hai(vector<LL> &A, LL min_dist, LL c)
{

    // c-1 A[1].....A[n-1]
    LL first_cow = A[0];
    LL reqd_cow = first_cow + min_dist;
    LL cows = c - 1;
    for (LL i = 1; i < A.size(); i++)
    {
        if (A[i] >= reqd_cow) // next_cow is basically reqd cord
        {
            // this means that cur cow can be placed at A[i]

            cows--;

            if (cows == 0)
            {
                return true;
            }
            reqd_cow = A[i] + min_dist;
        }
    }

    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        LL n, c;
        cin >> n >> c;
        vector<LL> A(n);
        LL max_cord = 0;
        for (LL i = 0; i < n; i++)
        {
            cin >> A[i];
            max_cord = max(A[i], max_cord);
        }
        sort(A.begin(), A.end());
        LL min_dist = 0;
        LL ans = 0;
        //
        LL s = 0, e = 1e15;
        while (s <= e)
        {
            LL mid = (s + e) / 2;
            // whether cows can be placed at this dist or not
            if (kya_cows_is_dist_par_baith_sakti_hai(A, mid, c))
            {
                ans = max(ans, mid);
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        cout << ans << endl;
    }
}