#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int getLength(Node* head){
    int length=0;
    while(head!=NULL){
        length++;
        head=head->next;
    }
    return length;
}
Node *findMiddle(Node *head) {
    // Write your code here
    int length=getLength(head);
    int c=0;
    int ans=(length/2);
    Node* temp=head;
    while(c<ans){
        temp=temp->next;
        c++;
    }
    return temp;
    
}
