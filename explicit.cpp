/*
 * @Author: liukai
 * @Date: 2020-02-22 13:37:31
 * @LastEditTime: 2020-03-19 18:02:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /wanmen2/mytest.cpp
 */

#include <iostream>
using namespace std;

class Add {
   public:
    // explicit ���Ե�
    explicit Add(const int& a) : num(a) {}
    int Num() { return num; }
    ~Add() {}

   private:
    int num;
};

int main(int args, char* argv[]) {
    // ����:
    // ���û��explicit�Ļ����൱�� Add temp(5); Add obj = temp; �ȴ�����ʱ����, Ȼ����и�ֵ
    // �����explicit�Ͳ������������ȴ�����ֵ������, 
    // Add add = 5; // wrong
    Add add(5); 

    cout << add.Num() << endl;

    return 0;
}