#include <iostream>
using namespace std;

class Time; // �������ǰ��������
// ��Ԫ��������Ԫ��
class Time{
   public:
    Time(int, int, int);
    int hour;
    int minute;
    int sec;
    void get_time() const; // ����Ա����
    
};

Time::Time(int h, int m, int s) {
    hour = h;
    minute = m;
    sec = s;
}

void Time::get_time() const{
    cout << hour << " : " << minute << " : " << sec << endl;
}

int main() {
    // ָ�����ĳ�ָ��
    Time t1(10, 13, 56); // ������, ��ͨ��Ա���������޸Ķ��������ݳ�Ա��ֵ
    int *p1 = &t1.hour;
    cout << *p1 << endl;
    t1.get_time();
    Time *p2 = &t1;
    p2->get_time();
    void(Time::*p3)(); // ����ָ��Time��Ĺ��ó�Ա������ָ�����
    p3 = &Time::get_time; // ʹp3ָ��Time�๲�ó�Ա����get_time
    // void(Time::*p3)() = &Time::get_time; ����ʱͬʱָ����ָ��
    (t1.*p3)();
    return 0;
}