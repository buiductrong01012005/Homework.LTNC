#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string ,long long> mp;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        long long k;cin>>k;
        mp[a]=k;
    }
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        map<string, long long>::iterator it = mp.find(a);
        if(it!=mp.end()){
            cout<<it->first<<"="<<it->second<<"\n";
        }else cout<<"Not found\n";
    }
    return 0;
}
