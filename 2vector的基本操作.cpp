#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<char> values;
	values.push_back('S');
	values.push_back('T');
	values.push_back('L');

	cout << "valuesµÄÈÝÁ¿Îª" << values.size() << endl;
	for (auto i = values.begin(); i < end(values); i++) {
		cout << *i << " ";
	}
	cout << endl;
	
	values.insert(values.begin(), 'N');
	printf("the first element is %c\n", values.at(0));
	printf("%c\n", *(values.data()+2));
	printf("%c\n", values.front());
	system("pause");
	return 0;
}