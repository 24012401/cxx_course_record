/*
 * @Author: your name
 * @Date: 2020-02-26 21:41:06
 * @LastEditTime: 2020-02-26 21:45:21
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /newclass/5.cpp
 */
#include <iostream>
using namespace std;

class Base{
public:
    void foo(){
        cout << "Base foo()\n";
    }
};

// ������ļ̳з�ʽ, ���л��̳�, ˽�л��̳�
class Derived : private Base{
public:
    void bar(){
        foo();
    }
};

int main(){
    Derived d1;
    d1.bar();
}