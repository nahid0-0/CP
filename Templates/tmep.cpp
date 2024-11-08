#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(s, e)  for(int i=s; i<e; ++i) 
#define arrin(string, n)   rep(0, n){ cin>>string[i];}
#define arrout(string, n)  rep(0, n){cout<<string[i]<<" ";} cout<<endl;
#define vecout(string)  rep(0, string.size()){cout<<string[i]<<" ";} cout<<endl;
#define pb push_back
#define ed  cout<<endl;
#define pii  pair<int,int>
#define F first
#define S second
#define ll long long
#define endl '\n'
#define len length


namespace DebugUtil {
void print(const char* name, const char* value) { cout << name << ": " << value; }
void print(const char* name, bool value) { cout << name << ": " << (value ? "true" : "false"); }
void print(const char* name, char value) { cout << name << ": '" << value << "'"; }
void print(const char* name, int value) { cout << name << ": " << value; }
void print(const char* name, unsigned int value) { cout << name << ": " << value; }
void print(const char* name, long value) { cout << name << ": " << value; }
void print(const char* name, unsigned long value) { cout << name << ": " << value; }
void print(const char* name, long long value) { cout << name << ": " << value; }
void print(const char* name, unsigned long long value) { cout << name << ": " << value; }
void print(const char* name, float value) { cout << name << ": " << value; }
void print(const char* name, double value) { cout << name << ": " << value; }
void print(const char* name, const string& value) { cout << name << ": \"" << value << "\""; }
template <typename T>
void print(const char* name, T&& value) { cout << name << ": " << value; }
template <typename T, typename... Args> void print(const char* names, T&& first, Args&&... rest)
{ const char* comma = strchr(names, ',');
if (!comma) {  print(names, first); } else { string current_name(names, comma - names); 
while (!current_name.empty() && isspace(current_name.front())) { current_name.erase(current_name.begin()); }
while (!current_name.empty() && isspace(current_name.back())) { current_name.pop_back();}
print(current_name.c_str(), first);  if (sizeof...(rest)) { cout << " ";  print(comma + 1, rest...); } } } }
#define ff(...) (DebugUtil::print(#__VA_ARGS__, __VA_ARGS__), cout << endl)

void file(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void test() {
    
    

}

int main() {
    file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    clock_t startt = clock();
    while(t--){
            test();
    }
    clock_t enddd = clock();
    // cout << fixed << setprecision(10) << 1.0*(enddd - startt)/CLOCKS_PER_SEC << endl;
     

    return 0;
}
