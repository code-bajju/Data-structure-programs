#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;
    
    s.push("Sushant");
    s.push("Dhiman");

    cout << s.top() << endl;
    
    s.pop();
    cout << s.top() << endl;

    s.pop();

    cout << s.empty();
    return 0;
}