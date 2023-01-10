#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    d.push_back(5);
    d.push_front(6);

    for(int i = 0; i < d.size(); i++) cout << d[i] << endl;

    return 0;
}