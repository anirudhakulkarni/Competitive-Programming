#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<ll> vli; 
typedef vector< vli > vvli;

/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
//////////////////////////
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
#define printpair(n) cout<<n.F<<" "<<n.S
#define printvop(n) loop(i,0,n.size()-1){printpair(n[i])<<endl;}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
ll mod=1000000007;
#define vasort(v) sort((v).begin(), (v).end())
#define vdsort(v) sort((v).begin(), (v).end(),greater<int>())
//////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    fio;
    ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
    string s,r;
    cin >> n;
			vector<ll> arr(n);
	            loop(i,0,n)
	            {
	                cin>>arr[i];
	            }
	 ll j=0;
	 while(j<n){
	 	ll maxsofar=1;
	 	for (int i = j+1; i < n; ++i)
	 	{
	 		/* code */
	 		if(arr[i]>arr[i-1]){
	 			maxsofar++;
	 		}
	 		else{
	 			break;
	 		}
	 	}
	 	j+=maxsofar;
	 	if(ans<maxsofar){
	 		ans=maxsofar;
	 	}
	 }        
	 cout<<ans;
	    //       printvector(arr);
	    //        sort(arr.begin(),arr.end());
	        
    return 0;
}