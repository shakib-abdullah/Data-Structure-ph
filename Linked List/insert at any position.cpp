#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void insert_at_tail_optimised(Node* &head , Node* &tail , int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void insert_at_any_position(Node* head , int pos , int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i=1;i<pos;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    // ei 2 line age pore kora kroa jbena ,,,,,,
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insert_at_tail_optimised(head , tail , 10);
    insert_at_tail_optimised(head , tail ,20);
    insert_at_tail_optimised(head , tail ,30);

    insert_at_any_position(head , 2 , 50);

    print_linked_list(head);

    return 0;
}

