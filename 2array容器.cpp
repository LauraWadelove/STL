#include <iostream>
#include <array>
using namespace std;
int main() {
	array<double, 5> values{};
	//��ʼ��values
	for (int i = 0; i < values.size(); i++) {
		values.at(i) = i;
	}
	//ʹ��get���غ������ָ��λ�õ�Ԫ��
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