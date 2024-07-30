#include <iostream>
//#include <iomanip> 
#include <array>
using namespace std;
int main()
{
    array<int, 5> values1{};
    array<int, 5> values2{};
    //初始化 values1 为 {0,1,2,3,4}
    for (int i = 0; i < values1.size(); ++i)
    {
        values1.at(i) = i;
    }

    cout << "values1[0] is : " << values1[0] << endl;
    cout << "values1[1] is : " << values1.at(1) << endl;
    cout << "values1[2] is : " << get<2>(values1) << endl;

    //初始化 values2 为{10，11，12，13，14}
    int initvalue = 10;
    for (auto& value : values2)
    {
        value = initvalue;
        initvalue++;
    }
    cout << "Values1 is : ";
    for (auto i = values1.begin(); i < values1.end(); i++) {
        cout << *i << " ";
    }

    cout << endl << "Values2 is : ";
    for (auto i = values2.begin(); i < values2.end(); i++) {
        cout << *i << " ";
    }
    return 0;
}