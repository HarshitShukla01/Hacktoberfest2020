
#include <iostream>

//stack library
#include <stack>
using namespace std;


int main() {
    //declare
    stack<int> s;
    
    //insert
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //remove  
    s.pop();
    s.pop();
 
   //s.empty() -> check that stack is empty or not
    while (!s.empty()) {
        //s.top() -> display top elemnet
        cout << ' ' << s.top();
        s.pop();
    }
}