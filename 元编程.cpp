/*
 * @Author: your name
 * @Date: 2020-03-03 15:19:07
 * @LastEditTime: 2020-03-03 15:42:47
 * @LastEditors: Please set LastEditors
 * @Description: Ԫ���
 * @FilePath: /wanmen3/2.cpp
 */
// lambda����
// ��������һ�����Ͳ�����һ������, ��������֮ǰһ������һ��ֵ����һ��ֵ
// ��ô���������ΪԪ����

#include <iostream>
#include <string>
using namespace std;
/* template <typename T>
class Vector {
   public:
    using value_type = T;
    // �Ժ����value_typeĬ��Ϊһ��ͨ�÷���
    // using �൱�����Tһ������value_type
}; */

template <typename C>
using Element_type = typename C::value_type;

template <typename Container>
// Ԫ���
void algo(Container &C) {
    Vector<Element_type<Container>> vec;
}

template <typename Key, typename Value>
class Map {
    // ...
};

// ʹ��using�����µ�ģ��
template <typename Value>
using String_map = Map<string, Value>;

String_map<int> m;

int main() { return 0; }
