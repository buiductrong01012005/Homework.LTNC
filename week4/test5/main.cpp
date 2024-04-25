#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    map<int ,int> a;
    map<int,int> b;
    for(int i=0;i<n;i++){
        int c;cin>>c;
        b[c]++;
    }
    for(int i=0;i<=n;i++){
        int c;cin>>c;
        b[c]--;
        if(b[c]<0){
            cout<<c;
        }
    }
    return 0;

}
