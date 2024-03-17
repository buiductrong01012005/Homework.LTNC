
#include <iostream>

using namespace std;

int findDigits(int n) {
    int count = 0;
    int m = n;
    while (m) {
        if (m % 10 == 0) {

        }
        else if (n % (m % 10) == 0) {
            count++;
        }
        m /= 10;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cout<<findDigits(a)<<"\n";
    }
}
