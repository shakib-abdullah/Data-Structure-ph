
#include<bits/stdc++.h>

using namespace std;


class Node
{
    public:

    int val;
    Node* next;

};



int main(){

    Node a , b , c;

    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

//    cout << a.val << endl;       // value of a
//    cout << b.val << endl;        // value of b
//    cout << (*a.next).val << endl;  // value of b
//    cout << a.next->val << endl;      // value of b
//    cout << a.next->next->val << endl;  // value of C

    Node* temp = &a;
    while( temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }


    return 0;
}
