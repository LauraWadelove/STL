#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector <double> values;
	values.push_back(123.45);
	cout << "第一个元素的地址为" << values.data() << endl;
	auto first = values.begin();
	auto last = values.end();
	values.reserve(5);
	cout << "第一个元素的地址为" << values.data() << endl;
	while (first != last) {
		cout << *first << " ";
		first++;
	}
	system("pause");
	return 0;
}