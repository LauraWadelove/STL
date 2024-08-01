#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector <int> values{ 1,2,3,4,5 };
	/*auto first = values.begin();
	auto last = values.end();
	while (first != last) {
		cout << *first << " ";
		first++;
	}
	cout << endl;*/

	auto first = values.rbegin();
	auto last = values.rend();
	while (first != last) {
		cout << *first << " ";
		first++;
	}
	cout << endl;

	system("pause");
	return 0;
}