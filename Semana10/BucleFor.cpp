#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main () {
	cout << "n n*n n*n*n" << endl;
	for (int n = 1; n <= 5; n++) {
		cout << n << '\t' << n * n << '\t' << n * n * n << endl;
	}
	return 0;
}
