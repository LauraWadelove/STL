//���� vector ������
#include <iostream>
//��Ҫ���� vector ͷ�ļ�
#include <vector>
using namespace std;
int main()
{
    vector<int> v{ 1,2,3,4,5,6,7,8,9,10 }; //v����ʼ������10��Ԫ��
    cout << "��һ�ֱ���������" << endl;
    //size����Ԫ�ظ���
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " "; //����ͨ����һ��ʹ��vector����
    //����һ���������������Ȼ��vectorҲ֧������ 3 �ֶ���������ķ�ʽ

    cout << endl << "�ڶ��ֱ���������" << endl;
    vector<int>::iterator i;
    //�� != �Ƚ�����������
    for (i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";

    cout << endl << "�����ֱ���������" << endl;
    for (i = v.begin(); i < v.end(); ++i) //�� < �Ƚ�����������
        cout << *i << " ";

    cout << endl << "�����ֱ���������" << endl;
    i = v.begin();
    while (i < v.end()) { //���һ�����
        cout << *i << " ";
        i += 2; // ������ʵ�����֧�� "+= ����"  �Ĳ���
    }
}