/*
 * @Author: your name
 * @Date: 2020-02-25 17:08:53
 * @LastEditTime: 2020-02-25 21:25:03
 * @LastEditors: Please set LastEditors
 * @Description: ��Ԫ
 * @FilePath: /newclass/2.cpp
 */
#include <iostream>
class Box {
   private:
    double width;

   public:
    // ��Ԫ��������
    friend void print(Box &box);
    // ��Ԫ������
    friend class Mybox;
    void getWidth(double &wid) { width = wid; }
};

// ��Ԫ����
void print(Box &box) { std::cout << box.width << std::endl; }

// ��Ԫ�������������: ��Box�ж�����Mybox��Ԫʱ, ��Mybox���п�������ʹ��Box�еĺ�����Ա����ɱ������ݵ��������������
class Mybox {
   private:
    double width;

   public:
    Mybox(const int &num) { width = num; }
    void friendprint(Box &box) {
        box.getWidth(width);
        box.width = 5; // ʹ����Ԫ�����˽�г�Ա
    }
};

int main(int args, char *argv[]) {
    double wid;
    std::cin >> wid;
    Box box;
    Mybox mybox(3);
    mybox.friendprint(box);
    box.getWidth(wid);
    print(box);
}