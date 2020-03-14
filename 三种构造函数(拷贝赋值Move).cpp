/*
 * @Author: your name
 * @Date: 2020-02-24 10:08:45
 * @LastEditTime: 2020-02-25 16:56:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /newclass/1.cpp
 */

#include <iostream>
using namespace std;

class Vector
{
private:
    size_t sz;
    double *elem;

public:
    // ���ֹ��캯���ĳ�ʼ����ʽ����û�������
    /* Vector(int size){
        sz = size;
        elem = new double(size);
    } */
    // explicit ��ʾ��(����������ʽ��ת��)
    Vector(size_t size)
        : sz{size},
          elem{new double[size]}
    {
    }

    // ��ֵ���캯�� 
    // copy assignment: clean up target and copy // ���
    // ����������������ȸ�ֵ��ʱ��Żᴥ�� B = A, ������B = A����ʱ, ���õ���B�� operator Ԫ��
    /* Vector &operator=(const Vector& a){ 
        double *p = new double[a.sz];
        for(size_t i = 0; i < a.sz; i++){
            p[i] = a.elem[i];
        }
        delete[] elem; //B�е�elemԪ��
        elem = p;
        sz = a.sz;
        return *this;
    } */

    // Move ��ֵ����
    // 
    /* Vector &operator=(Vector&& a){
        elem = a.elem;
        a.elem = nullptr;
        sz = a.sz;
        a.sz = 0;
        return *this;
    } */

    // Move ���캯��
    // move assignment: clean up target and move
    /* Vector(Vector&& a)
        :elem{a.elem},
        sz{a.sz}
    {
        a.elem = nullptr;
        a.sz = 0;
    } */



    // �������캯��
    // Vector(const Vector &other);

    // �������б�Ĺ��캯��
    /* Vector(initializer_list<double> lst)
     :sz{lst.size()},
     elem{new double(lst.size())}
    {
        copy(lst.begin(), lst.end(), elem);
    } */

    ~Vector()
    {
        cout << "~exec" << endl;
    }
};

// ��������A���ʼ��B��
/* Vector::Vector (const Vector &other)
    : sz{other.sz},
    elem{new double[other.sz]}
{
    // �൱�ڴ˲���
    /* size_t sz = other.sz;
    double* elem = new double[other.sz]; */

    //���¿��ٵĶѿռ� ����ԭ�ѿռ������
    /*for(size_t i; i < sz; i++){
        elem[i] = other.elem[i];
    }
} */

// Move���캯��


int main(int args, char *argv[])
{
    // ���ڲ����б���˵: ֻ��ʹ�����·�ʽ1
    // �� Vector A = {1.0, 2.0, 3.0};
    // �� Vector A(1.0, 2.0, 3.0);

    // ���ڵ�������������˵�������ַ�ʽ���ǿ��е�
    /* Vector B(5, 6);
    Vector C = {5, 6}; */

    Vector A(5);
    // Vector B = A; // ��A���ʼ��B��
    // A.~Vector(); ���������Զ�������������
    // Vector B = A; // ������̬�ڴ�new, ��������ѡ��ǳ����, ����̬�ڴ������ջָ��ָ��ͬһ��ѿռ�
}
// ������ⲿ�������庯��, ������ڲ�����
// ���ھ�, �����
/* Vector::Vector(size_t size)
    : sz{size},
      elem{new double[sz]}
{
} */