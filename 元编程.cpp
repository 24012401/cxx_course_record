/*
 * @Author: your name
 * @Date: 2020-03-03 15:19:07
 * @LastEditTime: 2020-03-19 17:47:34
 * @LastEditors: Please set LastEditors
 * @Description: Ԫ���
 * @FilePath: /wanmen3/2.cpp
 */
// lambda����
// ��������һ�����Ͳ�����һ������, ��������֮ǰһ������һ��ֵ����һ��ֵ
// ��ô���������ΪԪ����

#include <iostream>
#include <map>
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

/* template <typename Key, typename Value>
class Map {
    // ...
}; */


// ʹ��using�����µ�ģ��
template <typename Value>
using String_map = map<string, Value>;

int main() {
    
    String_map<int> m;
    m.insert(std::make_pair("1", 1));
    m.insert(std::make_pair("2", 2));

    for (auto x : m) {
        std::cout << "m.first: " << x.first << "  m.second: " << x.second
                  << std::endl;
    }
    return 0;
}
