/*
 * @Author: your name
 * @Date: 2020-03-11 18:07:17
 * @LastEditTime: 2020-03-11 18:30:07
 * @LastEditors: Please set LastEditors
 * @Description: Exception
 * @FilePath: /exception/1.cpp
 */
// �������ڼ�ת�Ƴ������Ȩ�ķ�ʽ

#include <iostream>
#include <exception>
#include <string>

using namespace std;

class MyException : public exception {
    public:
    string msg() const{ // ����Ǽ̳е�
        return "my exception\n";
    }
};

class A {
    public:
    A(){cout << "A construct\n "; }
    ~A(){cout << "A distruct\n"; }
};

int main() {
    try{
        A a;
        // ���׳��쳣ʱ���Զ�������������;
        throw MyException();
    } catch (MyException &e) {
        std::cout << "MyException\n";
        std::cout << e.msg();
    }
    return 0;
}