/*
 * @Author: your name
 * @Date: 2020-03-19 17:58:39
 * @LastEditTime: 2020-03-19 20:54:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /test/test.cpp
 */

#include <iostream>

using namespace std;

class Test {
   public:
   // һ�����������Ĺ��캯����Ĭ�ϵĹ��캯����ʧЧ��!!!
    // Test(){}
    Test(int a) {}
    Test(int a, int b) {}
};

int main() {
    Test *test1 = new Test(1); 
    delete test1;
    Test t1(1), t2(2);
    
    // �޲ε�
    // test1 = new Test[2]; // wrong ���������캯��, Ĭ�Ϲ��캯��ʧЧ, �����ֶ���дĬ�Ϲ��캯��

    delete[] test1;
    Test test2[2] = {Test(1,2), Test(2, 3) }; // 2��������
    test1 = test2;
    Test* test[3] = {new Test(1), new Test(2), new Test(3) }; // 2��������
    delete test[0];
    delete test[1];
    delete test[2];
    return 0;
}