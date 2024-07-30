#include <iostream>
#include <array>
using namespace std;
int main() {
	array<double, 5> values{};
	//初始化values
	for (int i = 0; i < values.size(); i++) {
		values.at(i) = i;
	}
	//使用get重载函数输出指定位置的元素
	cout << get<2>(values) << endl;
	if (!values.empty()) {
		for (auto j = values.begin(); j < values.end(); j++) {
			cout << *j << " ";
		}
	}
	cout << endl;
	cout << "over" << endl;
	system("pause");
	return 0;
}