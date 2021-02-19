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

    int n,tc,i,j,x,arr[100010];

    cin >> x;
    
    for(i=1;i<=7;i++)
    {
    	cin >> arr[i];
    }

    int l = 1, r = 7, m;

    while(l<r-1)
    {
    	 m = (l+r)/2;

    	if(arr[m]>x)
    		r = m;

    	else
    		l = m;
    }

    cout << "Upper bound " << l << endl;

    l = 1, r = 7;

    while(l<r-1)
    {
    	 m = (l+r)/2;

    	if(arr[m]>=x)
    		r = m;

    	else
    		l = m;
    }

    cout << "Lower bound " << l << endl; 

}

int main()
{
    solve();

    return 0;
}
