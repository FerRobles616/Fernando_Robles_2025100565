#include <iostream>
#include <string>

using namespace std;

int main () {
	int x = 1;
	while (x) {
		cout << "x: " << x*99999999999 <<endl;
		x++;
	}
	system ("PAUSE");
	return 0;
}
