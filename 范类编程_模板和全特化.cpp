/*
 * @Author: your name
 * @Date: 2020-03-02 16:46:49
 * @LastEditTime: 2020-03-02 22:43:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /wanmen3/test.cpp
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// ģ����
template <typename T>
class Vector {
   public:
    Vector(int size_param) { cout << "<int>\n"; }
};

// ȫ����
template <>
class Vector<float> {
   public:
    Vector(float size_param) { cout << "<float>\n"; }
};

// ģ�庯��
template <typename T>  // ÿһ����������ǰ����Ҫtemplate
const T &Max(const T &a, const T &b) {
    return a > b ? a : b;
}

// ����ȫ�ػ�
template <>
const int &Max(const int &a, const int &b) {
    cout << "int \n";
    return a > b ? a : b;
}

template <typename T>
void Test_driver() {
    // Vector<T> myVector(5);
}

int main() {
    // Test_driver<float>();
    cout << Max(1.0, 2.0) << endl;
    return 0;
}