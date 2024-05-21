#include<iostream>
using namespace std ;
int main(){
    int a;cin>>a;
    if(a%2==1){
        cout<<"Weird";
    }else {
        if(a>=2&&a<=5) cout<<"Not Weird";
        else if(a<=20) cout<<"Weird";
        else cout<<"Not Weird";
    }
}
