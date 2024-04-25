#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum[1000];
class Grade {
private:
    int x, y, z, t, a;
public:
    void input(int _x, int _y, int _z, int _t, int _a) {
        x = _x; y = _y; z = _z; t = _t; a = _a;
    }
    int tong() {
        int sum = x + y + z + t + a;
        return sum;
    }

};

int main() {
    int n; cin >> n;
    int count = 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (int i = 0; i < n; i++) {
        Grade grade;
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        grade.input(a, b, c, d, e);
        sum[i] = grade.tong();
        if (sum[0] < sum[i]) count++;
    }
    cout << count;
    return 0;
}
