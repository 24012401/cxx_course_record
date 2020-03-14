/*
 * @Author: your name
 * @Date: 2020-03-10 09:49:41
 * @LastEditTime: 2020-03-12 17:17:48
 * @LastEditors: Please set LastEditors
 * @Description: list �������̬��΢���ϵ
 * @FilePath: /wanmen_container/list.cpp
 */
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <typeinfo>
using namespace std;
class Shape {
   public:
    Shape(int a_param) : a{a_param} {}

   private:
    int a;
};
// ����������˵ ����������з�һ��������˵, ������ָ���ֻ��ָ���Ǹ��õ�ѡ��

vector<Shape> vs;
vector<Shape*> vps;
// vector<unique_ptr<Shape> > vups;

template <typename T>
class Vec : public std::vector<T> {
   public:
    using vector<T>::vector;
    T& operator[](int i) { return vector<T>::at(i); }  // at���б߽��������
};

struct Entry {
    string str;
    unsigned int num;
};

class book {
public:
    book(Entry &entry){// , list<Entry>::iterator p
        phone_book.push_back(entry);
        // phone_book.insert(p, entry);
        // phone_book.erase(p);
    }
    // map like key and key value
    // function One use for_each
    int get(string str) const{
        for(auto &x : phone_book){
            if(x.str == str){
                return x.num;
            }
        }
    }
    // second function use for-loop to get p-iterator(distance((list)phone_book, p))
    int get2(string str) const{
        for(auto p = phone_book.begin(); p != phone_book.end(); p ++){// The p's type
            cout << "p's type is : " << typeid(p).name() << endl; // ������ typeinfo // typeif(var).name()
            if(p->str == str){
                return p->num;
            }
        }
        return 0; // not found
    }
   private:
    list<Entry> phone_book;
    // write as map<string, int> phone_book; 
    // map is Red-Black Tree  �����first����, ��һ������Ӧƽ���� setͬ��
    // ����������, ���Խ���hash table��set��map unordered_set unordered_map
    /* template<typename T>
    struct make_pair
    {
        T first;
        T second;
    }; */
    
};

int main() {
    list<int> intList{1, 2, 3, 4, 5};
    list<int>::iterator p = intList.begin();
    cout << "lst p: " << *p << endl;
    advance(p, 2);
    cout << "lst advance p: " << *p << endl;
    auto q =
        intList.end();  // ������Ҫ��q -- ��ǰList��ʼ��begin(), ������< end()
    q--;
    cout << "lst end q:" << *q << endl;
    cout << "distancd(p & q): " << distance(p, q)
         << endl;  // ��������ָ��֮��ľ���
    iter_swap(p, q);
    for (auto& x : intList) {
        cout << x << " ";
    }
    cout << endl;


    Entry entry;
    entry.str = "test_str1";
    entry.num = 1;
    book *mybook = new book(entry);
    mybook->get2("test_str1");
    return 0;
}
