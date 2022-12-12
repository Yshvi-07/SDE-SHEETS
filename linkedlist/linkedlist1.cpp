
#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //comstructor
    Node(int data){
        this->data=data;
       // this->next=NULL;
    }
};
//Insertion of a number in linkedList
void insertionAtHead(Node* &head,int d){
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}
//Traversing of a number in LinkedList
void print(node* &head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
     cout<<node1->next<<endl;

    return 0;
}

