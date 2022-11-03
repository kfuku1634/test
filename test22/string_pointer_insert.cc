#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int main() {
    string *data;
    data = (string*)malloc(sizeof(string));
    string tmp = "hoge";
    //data[0] = tmp;
    memcpy( &data[0], &tmp[0], sizeof(string));
    cout << data[0] << endl;
}

