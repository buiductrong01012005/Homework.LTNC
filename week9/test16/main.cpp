#include<iostream>
using namespace std;
int numSwap=0;
void swap(int &a,int &b,int &d){
    int c=b;
    a=b;
    b=c;
    d++;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1], numSwap);
            }
        }
    }
    cout<<"Array is sorted in "<<numSwap<<" swaps."<<"\n"<<"First Element: "<<a[0]<<"\n"<<"Last Element: "<<a[n-1];
    return 0;
}
