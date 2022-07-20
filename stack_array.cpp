#include<bits10_1.h>/stdc++.h>
using namespace std;
class Stack{
    int top;
    public:
      int a[MAX];

      Stack(){
          top=-1;
      }

      int is_empty();
      int is_full();
      void push(int x);
      int pop();

};
int Stack::is_empty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
int Stack::is_full(){
    if(top==MAX-1)
        return 1;
    else
        return 0;
}

void Stack :: push(int x){
    if(is_full()){
        cout<<"Stack is full"<<endl;
        return;
    }
    else{
        top++;
        a[top]=x;
        cout<<"Element is Inserted"<<endl;
    }
}
int Stack :: pop(){
    int tmp = a[top];
    top--;
    return tmp;
}

int main(){
    class Stack s;
    int x, ch;
    do{
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter the element to be inserted"<<endl;
                cin>>x;
                s.push(x);
                break;
            case 2:
                if(s.is_empty())cout<<"Stack is empty"<<endl;
                else cout<<s.pop()<<" is popped"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }}
        while(ch!=3);
        return 0;
}