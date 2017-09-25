#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> n, o; 
        void push(int x) {
            n.push(x);                   
        }

        void pop() {   
            if(n.size() == 0 && o.size()== 0) return;
            if(o.size() == 0) {
               while(n.size()!=0) {
                o.push(n.top());
                n.pop();
                } 
            }
            o.pop();
        }

        int front() {
            if(n.size() == 0 && o.size()== 0) return -1;
            if(o.size() == 0) {
               while(n.size()!=0) {
                o.push(n.top());
                n.pop();
                } 
            }
            return o.top();   
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
     
    return 0;
}

