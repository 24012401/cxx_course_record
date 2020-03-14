/*
 * @Author: your name
 * @Date: 2020-02-25 22:15:23
 * @LastEditTime: 2020-02-25 22:40:29
 * @LastEditors: Please set LastEditors
 * @Description: complex
 * @FilePath: /newclass/complex.cpp
 */

#include <iostream>
using namespace std;

class complex
{
public:
    complex(double r, double i) : re{r}, im{i} {}
    complex(double r) : re{r}, im{0} {}
    complex() : re{0}, im{0} {}

    double real() const{ return re; }
    double real(double d) { re = d; }
    // const�ؼ��ַ��ں������棬��ʾ�ú�����һ������Ա�������ڸú����ڲ����޸ĸ���ĳ�Ա����
    // const�ؼ��ַ��ں���ǰ�棬��ʾ�ú����ķ���ֵΪ�������������޸�
    double imag() const { return im; }
    double imag(double d) { im = d; }

    complex& operator+=(complex z){ re+=z.re, im+=z.im; return *this; }
    complex& operator-=(complex z){ re-=z.re, im-=z.im; return *this; }
    complex& operator*=(complex);
    complex& operator/=(complex);

private:
    double re;
    double im;
};

complex operator+(complex a, complex b){ return a += b; }
complex operator-(complex a, complex b){ return a -= b; }
complex operator-(complex a){ return {-a.real(), -a.imag()}; }
// complex operator*(complex a, complex b){ return a *= b; }
// complex operator/(complex a, complex b){ return a /= b; }

void test_driver()
{
    complex a{1};
    complex b{2, 3};
    complex c = a + b;
    cout << c.real() << " " << c.imag() << endl;
}

int main()
{
    int a, b;
    a = 5, b = 6;
    // ���ֲ�����C++��û������
    test_driver();
    return 0;
}