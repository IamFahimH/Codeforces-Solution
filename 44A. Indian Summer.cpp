#include <bits/stdc++.h>
#include <vector>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;

int main(){
    optimize();

    int n; cin>>n;
    vector <pair<string,string>> vec;
    for(int i=0; i<n; i++){
        string s1,s2; cin>>s1>>s2;
        vec.push_back(make_pair(s1,s2));
    }
    sort(vec.begin(),vec.end());
    int cnt = 0;
    cnt = unique(vec.begin(),vec.end())-vec.begin();
    cout<<cnt<<endl;
    return 0;
}
