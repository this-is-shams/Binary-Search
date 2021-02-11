//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define forn(i,n) for (int i = 0; i < int(n); i++)
#include<iostream>
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef unsigned long long ull;
#define all(x) (x).begin(), (x).end()

void solve()
{
    // fasterIO
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ll arr[100010],n,k,i,j;

    cin >> n >> k;

    forn(i,n)
    {
    	cin >> arr[i];
    }

    sort(arr,arr+n);

    forn(i,k)
    {
    	ll q;

    	cin >> q;

    	ll l=0, r=n-1;

    	bool ok=0;

    	while(l<=r)
    	{
    		ll mid=(l+r)/2;

            if(arr[mid]==q)
            {
            	ok=1;

            	break;
            }

            else if(arr[mid]>q)
            	r = mid - 1;

            else
            	l = mid + 1;
    	}

    	if(ok) cout << "found" << endl;

    	else cout << "not found" << endl;
    }

}

int main()
{
    solve();

    return 0;
}
 