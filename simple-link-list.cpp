#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
    Node*head=new Node(10);//head is a pointer that store the value and address of a node valye 10 address 0
    head->next=new Node(20);//head is a pointer and next is a pointer to so head can also point to word newt and nexrt will point toward new node
    head->next->next=new Node(30);//
    head->next->next->next=new Node(40);
    cout<<head->data<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next->data<<endl;
    cout<<head->next->next->next->data<<endl;
    cout<<head<<endl;
    cout<<head->next<<endl;
    cout<<head->next->next<<endl;
    cout<<head->next->next->next<<endl;

}