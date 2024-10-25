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

const int N = 1e3;
ll a[N][N], p[N][N], d[N][N];


void test(){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			cin >> a[i][j];
		}
	}
	int q;
	cin >> q;
	while(q--){
		int x1, y1, x2, y2, x;
		cin >> x1 >> y1 >> x2 >> y2 >> x;
		d[x1][y1] += x;
		d[x1][y2+1] -= x;
		d[x2+1][y1] -= x;
		d[x2+1][y2+1] += x;
	}
    for(int i = 1; i <= n; ++i){
    	for(int j = 1; j <= m; ++j){
    		d[i][j] = d[i-1][j] + d[i][j-1] + d[i][j] - d[i-1][j-1];
    	}
    }
    for(int i = 1; i <= n; ++i){
    	for(int j = 1; j <= m; ++j){
    		cout << d[i][j] + a[i][j]<< ' ';
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
    int t = 1;
    while(t--){
            test();
    }
     
        return 0;
}
