#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(s, e)  for(int i=s; i<e; ++i) 
#define arrin(string, n)   rep(0, n){ cin>>string[i];}
#define arrout(string, n)  rep(0, n){cout<<string[i]<<" ";} cout<<endl;
#define vecout(string)  rep(0, string.size()){cout<<string[i]<<" ";} cout<<endl;
#define ff(x) cout << "debug: " << #x << ": " << (x) <<endl;
#define yes cout<<"YES"<<endl;
#define pb push_back
#define no cout<<"NO"<<endl;
#define out(x) cout<<x<<endl;
#define ed  cout<<endl;
#define dout(x, y)  cout<<x<<" "<<y<<endl;
#define pii  pair<int,int>
#define F first
#define S second
#define ll long long
#define endl '\n'

const int N = 1000000;
vector < ll > v(N+1);


void test(){
    int n;
    cin >> n;
    cout << v[n] << endl;

}

int main (){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0); cin.tie(0);

    for(ll int i = 1; i <= N; ++i){
        for(ll int j = i; j <= N; j += i){
            v[j]++;
        }

    }
    int t;
    cin >> t;
    while(t--){
            test();
    }
     
        return 0;
}
