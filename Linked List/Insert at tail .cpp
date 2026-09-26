
#include<bits/stdc++.h>

using namespace std;



class Node
{
    public:

    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

// ekhane head re & diye call by referance er dorkr nai ,, head cng hoccena ekhan e sudhu value niye kaj hocce
void insert_at_tail(Node* &head ,int val){
    Node* newnode = new Node(val);

    Node* temp = head;
    while( temp->next != NULL ){
        temp = temp->next;
    }
    temp->next = newnode;


}

void print_Linked_list(Node* head){
    Node* temp = head;
    while( temp!= NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){

    Node* head =  new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;
//    b->next = NULL;

    insert_at_tail(head , 40);
    insert_at_tail(head , 50);
    print_Linked_list(head);

    return 0;
}
