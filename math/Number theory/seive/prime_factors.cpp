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
#define pii  pair<int, int>
#define F first
#define S second
#define ll long long
#define endl '\n'

const int N = 10000000+1;

vector < int > bit(N+1);


void test(){
    int n;
    while(scanf("%d", &n) == 1){
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        cout << 1 << ' ';
        while(n > 1){
            int x = bit[n] ? bit[n] : n;
            if(n/x == 1){
                cout << 'x' << ' ' << x;
                n /= x;
                break;
            }
            cout << 'x' << ' ' << x << ' ';
            n/= x;
        }
        cout << endl;

    }

}

int main (){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(ll i = 2; i * i < N; ++i){
        if(!bit[i]){
            bit[i] = i;
            for(ll j = i * i; j < N; j += i){
                if(!bit[j]) bit[j] = i;
            }
        }
    }
    int t = 1;
    while(t--){
            test();
    }
     
        return 0;
}
