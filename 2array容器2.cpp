#include <iostream>
#include <array>
using namespace std;
int main() {
	array<int, 5> values{};
	auto first = values.begin();
	auto last = values.end();
	int h = 0;
	while (first != last) {
		*first = h;
		first++;
		h++;
	}
	first = values.begin();
	while (first != last) {
		cout << *first << " ";
		first++;
	}
	cout << endl;
	system("pause");
	return 0;
}