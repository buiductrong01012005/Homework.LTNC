
#include <iostream>
#include<string>
#include<vector>
 
using namespace std;
string balancedSums(vector<int> arr) {
    int sum1(0), sum2(0);
    for (int i = 0; i < (int)arr.size(); i++) {
        sum2 += arr[i];
    }
    for (int i = 0; i < (int)arr.size(); i++) {
        sum2 -= arr[i];
        if (sum1 == sum2) {
            return "YES";
        }
        sum1 += arr[i];
    }
    return "NO";
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i<n; i++) {
        int a;
        cin >> a;
        vector<int >arr;
        for (int i = 0; i < a; i++) {
            int c;
            cin >> c;
            arr.push_back(c);
        }
        cout<<balancedSums(arr)<<"\n";
    }
}

