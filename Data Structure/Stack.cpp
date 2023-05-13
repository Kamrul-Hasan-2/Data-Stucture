#include<bits/stdc++.h>
using namespace std;

int stack1[5];
int top = -1;
int element;

int push(int data){
    if(top == 4){
        cout<< "Overflow" << endl;
    }
    else{
        top++;
        stack1[top] = data;
        int element = stack1[top];
        cout<< element << " push" << endl;
    }
}

int pop(){
    if(top == -1){
        cout<< "Underflow" << endl;
    }
    else{
        int element = stack1[top];
        top--;
        cout<< element << " pop" << endl;
    }
}

int Top(){
    int res;
    for(int i=0; i<top; i++){
        res =  element = stack1[top];
    }
    cout << res;
}

int main(){
    push(10);
    push(11);
    push(12);
    push(13);
    push(14);
    pop();
    pop();
    Top();
}

