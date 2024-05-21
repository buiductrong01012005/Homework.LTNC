#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    int sum=-100;
    int i=0;
    int j=1;
    while(i<=3){
        int sum1=a[i][j-1]+a[i][j]+a[i][j+1]+a[i+1][j]+a[i+2][j-1]+a[i+2][j]+a[i+2][j+1];
        sum=max(sum,sum1);
        j++;
        if(j>=5){
            j=1;
            i++;
        }
    }
    cout<<sum;
}
