/*
 * @Author: your name
 * @Date: 2020-02-27 14:40:45
 * @LastEditTime: 2020-02-27 15:39:40
 * @LastEditors: Please set LastEditors
 * @Description: ��̳����麯��
 * @FilePath: /wanmen3/test.cpp
 */
#include <iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Base Base()\n";
    }
    virtual void foo(){
        cout << "Base foo()\n";
    }
    virtual ~Base(){
        cout << "dis Base foo()\n";
    }
};

class Derived : public Base {
public:
    Derived(){
        cout << "Derived() Derived()\n";
    }
    virtual void foo(){
        cout << "Derived foo()\n";
    }

    virtual ~Derived(){
        cout << "dis Derived foo()\n";
        
    }
};

int main() {
    // Derived d1;
    Base *b1 = new Derived;
    b1->foo();
    delete b1;
    // ��ջ��ʽ: Base����ջ, Ȼ��Derived��ջ, Ȼ��deleteʱ������Derived, Ȼ������Base
    return 0;
}