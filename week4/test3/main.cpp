#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    vector<int> v[n];
    for(int i=0;i<n;i++){
        int k;cin>>k;
        for(int j=0;j<k;j++){
            int b;
            cin>>b;
            v[i].push_back(b);
        }
    }
    for(int i=0;i<m;i++){
        int h1,h2;
        cin>>h1>>h2;
        cout<<v[h1][h2];
        cout<<endl;
    }
    return 0;
}
