/*
 * @Author: your name
 * @Date: 2020-02-25 21:26:04
 * @LastEditTime: 2020-02-25 21:44:43
 * @LastEditors: Please set LastEditors
 * @Description: ���е� this ָ��
 * @FilePath: /newclass/3.cpp
 */

#include <iostream>
using namespace std;

class Box{
private:
    double length;
public:
    static int a; // ��̬��Ա������ھ�̬��, һ����Ķ��������һ�龲̬��
    Box(double input_length){
        length = input_length;
    }
    Box *get_address(){
        // this ��һ��ָ��, ָ������λBox *
        return this;
    }
};

int main(){
    Box::a = 5;
    Box box(5);
    Box *ptr = box.get_address();
    cout << ptr << endl;
}