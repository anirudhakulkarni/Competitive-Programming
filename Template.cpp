#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



typedef vector<int> vi; 
typedef vector< vi > vvi; 

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i <= b; i++)



#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
#define printpair(n) cout<<n.F<<" "<<n.S
#define printvop(n) loop(i,0,n.size()-1){printpair(n[i])<<endl;}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
long long int mod=1000000007;

int main()
{
    fio;
	ll t;
	cin >> t;
    while(t--)
    {
        long long int n,sum=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
 //      printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}


