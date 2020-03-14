/*
 * @Author: your name
 * @Date: 2020-02-27 15:41:03
 * @LastEditTime: 2020-03-01 10:42:03
 * @LastEditors: Please set LastEditors
 * @Description: �й����ʵ��
 * @FilePath: /wanmen3/EmpForClass.java
 */

#include <iostream>
#include <string>

using namespace std;

class Vector{
public:
    // �����б�
    Vector(initializer_list<double> list)
     :sz{list.size()},
      elem{new double[sz]}
    {
        copy(list.begin(), list.end(), elem);
    }

    double& operator[](size_t i){
        return elem[i];
    }

    size_t size(){
        return sz;
    }

    ~Vector(){
        delete[] elem;
    }

    // ���ƿ�������
    Vector(const Vector &other)
     :sz{other.sz},
      elem{new double[sz]}
    {
        for(size_t i = 0; i < sz; i ++){
            elem[i] = other.elem[i];
        }
    }
private:
    size_t sz;
    double *elem;
};

// ���ӿ���, ֻҪ�������һ�����麯��pure virtual function,�����Ϊ���ӿ���pure virtual class 
class Container{
public:
    // ���麯��
    // ���麯��Ŀ�����ڶ���ýӿ�, �������������̳еĺ�������ʹ��麯���е���ȫ��ͬ, ���ٴ���, �������double &operator[]
    virtual double &operator[](size_t i) = 0;
    virtual size_t siz() = 0;
    ~Container(){}
};

class Vector_container : public Container{
public:
    Vector_container(initializer_list<double> vec)
     : v{vec}
    {
        // copy(vec.begin(), vec.end(), v.operator[]);
    }
    virtual ~Vector_container() = default;
    virtual double &operator[](size_t i){
        return v.operator[](i);
    }
    virtual size_t siz(){
        return v.size();
    }
private:
    Vector v;
};

class List_container : public Container{
public:
    List_container(initializer_list<double> vec)
     : v{vec}
    {
        // copy(vec.begin(), vec.end(), v);
    }
    virtual ~List_container() = default;
    virtual double &operator[](size_t i){
        return v.operator[](i);
    }
    virtual size_t siz(){
        return v.size();
    }
private:
    Vector v;
};


void display(Container &c){
    for(size_t i = 0; i < c.siz(); i++){
        cout << c.operator[](i) << " ";
    }
    cout << endl;
}

void Test_deiver(){
    Vector_container vc = {0, 1, 2, 4};
    display(vc);
    List_container lc = {9, 8, 7, 6};
    display(lc);
}

int main() {
    Test_deiver();
    return 0;
}