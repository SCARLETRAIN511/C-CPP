#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            next = NULL;
        }
};

void print(Node *head){
    Node *temp = head;
    while (temp!=NULL){
        cout << temp->data<<endl;
        temp = temp -> next;
    }
}

//take the input
Node* takeInput(){
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1){
        Node *n = new Node(data);
        if (head == NULL){
            //set the head node
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

Node* takeInput2(){
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1){
        Node *n = new Node(data);
        if (head == NULL){
            //set the head node
            head = n;
            tail = n;
        }else{
            n->next = head;
            head = n;
        }
        cin >> data;
    }
    return head;
}

int main(){
    //statically
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);
    Node *head2 = takeInput2();
    print(head2);
}