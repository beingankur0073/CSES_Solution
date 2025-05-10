//For cp website format
 
#include<bits/stdc++.h>
#include<chrono>
using namespace std;
 
#define int long long
#define mp  make_pair
#define endl "\n"
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define pb push_back
#define umap unordered_map
#define uset unordered_set
#define minel *min_element
#define maxel *max_element
#define vi vector<int>
#define vstr vector<string>
#define vpr vector<pair<int,int>>
#define ceil(x,y) ceil((double)x/(double)y)
 
const int MOD=1e9+7;
vi prim;
 
 
const int N=1e5+1; //max constraint 
vi divisors[N];
 
int binexp(int a,int b){int res=1;while(b>0){if(b&1){res=(res*1ll*a)%MOD;}a=(a*1LL*a)%MOD;b>>=1;} return res;}
bool isprime(int n){if(n==1) return 0;for(int i=2;i*i<=n;i++){if(n%i==0) return 0;}return 1;}
void prim_siv(int n){bool primes[n+1];fill(primes,primes+n+1,true);primes[0]=primes[1]=false;for(int i=2;i*i<=n;i++){if(primes[i]){for(int j=i*i;j<=n;j+=i){primes[j]=false;}}}for(int i=2;i<n+1;i++){if(primes[i]==true) prim.push_back(i);}}
void divfind() { for(int i=1; i<N; i++) { divisors[i].push_back(i); for(int j=2*i; j<N; j+=i) { divisors[j].push_back(i); } } }
 
 
void path(int n,int src,int aux,int des){
  if(n==0) return;
  path(n-1,src,des,aux);
  cout<<src<<" "<<des<<endl;
  path(n-1,aux,src,des);
}
 
 
void solve(){
   int n;
   cin>>n;
   cout<<(1<<n)-1<<endl;
   path(n,1,2,3);
   
}
 
 
signed main(){
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
    solve();
 
    auto end = chrono::high_resolution_clock::now();
    double time_taken = 
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
 
    time_taken *= 1e-9;
 
    // cout << "Time taken by program is : " << fixed 
    //      << time_taken << setprecision(9)<<"sec"<<endl;
         
    
}
 
/**
 * ? run loop multiple times incase of prime factorisations
*/