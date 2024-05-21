#include<iostream>
using namespace std;
string bin(int n){
    string s="";
    while(n){
        s+=char(n%2+'0');
        n/=2;
    }
    return s;
}
int main(){
    int n;cin>>n;
    string s="0";
    string s1=bin(n);
    s=s+s1;
    s+="0";
    int cnt=0;
    int o1=0,o2=0;
    for(int i=0;i<s.size();i++){
        if(o2==0&&o1==0){
            if(s[i]=='0'){
                o2=i;

            }
        }else {
            if(s[i]=='0'){
                o1=o2;
                o2=i;

            }
        }
        cnt=max(o2-o1-1,cnt);
    }
    cout<<cnt;
}
