#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class List{     // not access modifier declire. Means, it is private class
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);      // dynamic
        if(head == NULL){
            head = tail = NULL;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }

};


int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    return 0;
}