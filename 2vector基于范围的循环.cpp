#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector <int > values{ 1,2,3,4,5 };
	for (auto&& value : values) {//&&��ֵ���ã����Ч��
		cout << value << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}