//queue using stacks.....................................................

#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1;
    public:
        void push(int x){
            s1.push(x);
        }
        int pop(){
            if(s1.empty()){
                cout<<"Queue underflow"<<endl;
                return -1;
            }
            int x=s1.top();
            s1.pop();
            if(s1.empty()){
                return x;
            }

            int item=pop();
            s1.push(x);
            return item;
        }
        int peek(){
            if(s1.empty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }

            while(s1.size()!=1){
                s1.pop();
            }
            return s1.top();
        }
        bool empty(){
            if(s1.empty()){
                return true;
            }
            else{
                return false;
            }
        }

};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
return 0;
}