#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    cin>>a;
    int n,m;
    cin>>n>>m;
    float s=(float)(a+(float)a*n/100+(float)a*m/100);
    cout<<round(s);
}
