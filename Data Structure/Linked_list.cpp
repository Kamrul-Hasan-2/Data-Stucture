#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void printList(Node *n){
    while(n !=NULL){
        cout<< n->data << " ";
        n=n->next;
    }
}


int main(){
    Node *Head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    Node *fifth = NULL;
    Node *sixth = NULL;
    Node *seventh = NULL;
    Node *eighth = NULL;


    Head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();
    sixth = new Node();
    seventh = new Node();
    eighth = new Node();

    Head->data = 107;
    Head->next = second;

    second->data = 217;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 27;
    fifth->next = sixth;

    sixth->data = 199;
    sixth->next = seventh;

    seventh->data = 420;
    seventh->next = eighth;

    eighth->data = 9;
    eighth->next = NULL;


    printList(Head);

}