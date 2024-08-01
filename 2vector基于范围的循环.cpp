#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector <int > values{ 1,2,3,4,5 };
	for (auto&& value : values) {//&&右值引用，提高效率
		cout << value << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}