/*
 * @Author: your name
 * @Date: 2020-03-13 15:09:46
 * @LastEditTime: 2020-03-19 17:50:57
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /exception_ptr/3.cpp
 */
#include <iostream>
#include <memory>
using namespace std;

class test{
    public:
    int ret(){
        return a;
    }
    private:
    static int a;
};

int test::a = 5; // ��̬��Ա�Ķ��巽��

int main() {
    /* int *p = new int(5);
    delete p;
    p = nullptr; // delete֮��Ҫ��ָ���ÿ�
    return 0; */
    // ʹ������ָ��
    // ����ָ�� unique_ptr shared_ptr weak_ptr �������ָ��, ������ĳ�Ա;
    int a = 5;
    unique_ptr<int> p2{make_unique<int>()};
    // p2 = 5;
    unique_ptr<test> p{make_unique<test>()};
    cout << p->ret() << endl;
}