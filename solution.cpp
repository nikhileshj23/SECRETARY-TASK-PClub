#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define FOR(i,b) for(ll i=0;i<b;i++)
#define FORwi(i,a,b) for(int i=a;i<b;i++)
#define get(v) FOR(i,v.size()) cin>>v[i];
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define see(v) FOR(i,sz(v)) cout<<v[i]<<" "; cout<<endl;
#define gt(v) for(auto it=v.begin();it!=v.end();it++)
#define sz(v) v.size()
#define vi vector<int>
#define vll vector<ll>
#define mpii map<int,int> 
#define mpll map<ll,ll> 
#define pii pair<int,int>
#define pll pair<ll,ll>
typedef long long int ll;
typedef unsigned long long ull;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int prime(long long int a){
    if(a==1) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

string base_rep(ll n, ll b){  //for representation in any base
    if(n==0) return "0";
    string res="";
    while(n>0){
        res+=char('0'+n%b);
        n=n/b;
    }
    reverse(all(res));
    return res;
}
// const int N=1e9+7;
// ll power(ll a,ll b){
//     ll res=1;
//     while(b>0){
//         if(b%2==1) res=(res*(a%N))%N;
//         a=(a*a)%N;
//         b>>=1;
//     }
//     return res;
// }

int N=1e5;
vector<bool> pr(N+10,true);
vector<int> primes;
bool pp(ll n,ll i){
    while(n%i==0) n/=i;
    return n==1;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL); 

    
    vector<int> lp(1000000+5,0);
    vector<int> pr;

    //setting vector lp
    for(int i=2;i<=1000000;i++){
        if(lp[i]==0){
            lp[i]=i;
            pr.pb(i);
        }
        for(int j=0;i*pr[j]<=1000000;j++){
            lp[i*pr[j]]=pr[j];
            if(pr[j]==lp[i]) break;
        }
    }
    
    int n;
    cin>>n;
    
    ll ans=0;
    for(int j=0;pr[j]*pr[j]<=n;j++){
        if(n%pr[j]==0){
            ll temp=n;
            ll sum=1;
            while(temp%pr[j]==0){
                sum=sum*pr[j];
                temp/=pr[j];
            }
            ans+=abs(sum*sum-temp*temp);
        }
    }
    ans+=n*n-1;
    cout<<ans;

}
