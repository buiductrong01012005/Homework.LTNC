#include <iostream>
#include<string>

using namespace std;

int main() {
	char a[4] = { 'a','b','c','d' };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				cout << a[i]<<a[j]<<a[k];
				cout << endl;
			}
		}
	}

	return 0;
}