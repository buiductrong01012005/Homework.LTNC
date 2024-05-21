#include<iostream>
using namespace std;
int binarySearch(int left, int right, int* arr, int x) {
	int a = left + right;
	if (a % 2 == 0) {
		a = a / 2;
	}
	else {
		a = a / 2 + 1;
	}
	if (right >= left) {
		if (arr[a] > x) {
			return binarySearch(left, a - 1, arr, x);
		}
		else if (arr[a] < x) {
			return binarySearch(a + 1, right, arr, x);
		}
	}
	if (arr[a] == x) { return a; }
	else { return -1; }
	return 10;
}
/*
5
1 3 5 7 9
5

5
1 3 5 7 9
4
*/
int main() {
	int n; cin >> n;
	int x;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> x;
	cout << binarySearch(0, n - 1, arr, x)+1;
	return 0;
}