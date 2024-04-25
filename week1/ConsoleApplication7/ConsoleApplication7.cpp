// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<iomanip>


using namespace std;

void plusMinus(int n, vector<int >arr) {
    int a = arr.size();
    int duong(0), am(0), khong(0);
    for (int i = 0; i < a; i++) {
        if (arr[i] > 0) duong++;
        else if (arr[i] < 0) am++;
        else khong++;
    }
    cout << fixed << setprecision(6) << (double)duong / a << endl;
    cout << fixed << setprecision(6) << (double)am / a << endl;
    cout << fixed << setprecision(6) << (double)khong / a << endl;
}

int main()
{

    int n;
    cin >> n;
    vector<int >a;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }

    plusMinus(n,a);

}

