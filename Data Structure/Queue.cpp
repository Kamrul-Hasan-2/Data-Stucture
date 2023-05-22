#include<bits/stdc++.h>
using namespace std;

int Deque[5];
int front_ = -1;
int rear = -1;
int elem;

int EnQ(int data){
    if(rear == 4){
        cout<< "Overflow" << endl;
    }
    else{
        rear++;
        Deque[rear] = data;
        elem = Deque[rear];
        cout<< elem <<" pushed"<<endl;
    }
}


int DeQ(){
    front_++;
    if(front_>rear){
        cout<< "Underflow"<<endl;
    }
    else{
        elem = Deque[front_];
        cout<< elem <<" poped"<<endl;
    }
}


int main(){
    EnQ(5);
    EnQ(8);
    EnQ(1);
    EnQ(2);
    EnQ(9);
    EnQ(11);
    EnQ(21);
    EnQ(23);
    DeQ();
    DeQ();
    DeQ();
    DeQ();
    DeQ();
    DeQ();
    DeQ();
    DeQ();
    DeQ();
    DeQ();
}
