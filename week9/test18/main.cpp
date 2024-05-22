#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int d1,m1,y1,d2,m2,y2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    int deld=d1-d2,delm=m1-m2,dely=y1-y2;
    int sum=0;
    if(dely>0){
        sum=10000;
    }else if(delm>0&&dely==0){
        sum=(delm)*500;
    }else if(delm==0&&deld>0) {
        sum=deld*15;
    }else sum=0;
    cout<<sum;
    return 0;
}
