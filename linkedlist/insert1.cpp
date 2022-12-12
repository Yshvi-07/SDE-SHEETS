#include<iostream>
using namespace std;
void insertAtTail(Node*&tail,int d){
	Node* temp=new Node(d);
     tail->next=temp;
     tail=tail->next;
}




int main{
	Node* tail=node1;
insertAtTail(tail,12);

print(tail);



}

