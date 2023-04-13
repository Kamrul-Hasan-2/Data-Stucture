#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};


int main(){
    Node head = {1, NULL};
    Node node1 = {31, NULL};
    Node node2 = {178, NULL};
    Node node3 = {18, NULL};
    Node node4 = {185, NULL};

    head.next = &node1;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;


    cout << head.data<<" ";
    cout << head.next->data<<" ";
    cout << head.next->next->data<<" ";
    cout << head.next->next->next->data<<" ";
    cout << head.next->next->next->next->data<<" ";

}
