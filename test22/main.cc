#include <iostream>
#include <malloc/_malloc.h>
#include <string>
#include <typeinfo>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int main() {
    string hoge_a = "hoge_a";
    string hoge_b;
    cout << hoge_b << endl;
    hoge_b = hoge_a;

    string *data;
    cout << sizeof(int) << endl;
    cout << sizeof(string) << endl;
    cout << typeid(int*).name() << endl;
    cout << typeid(string*).name() << endl;
    data = (string*)malloc(sizeof(string));
    cout << typeid(data).name() << endl;
    cout << typeid(data[0]).name() << endl;
    string tmp = "hoge";
    cout << typeid(tmp).name() << endl;
    cout << "st" << endl;
    data[0] = tmp;
    cout << "en" << endl;
    cout << data[0] << endl;
    data[0] = "hoge";
    cout << data[0] << endl;
}
