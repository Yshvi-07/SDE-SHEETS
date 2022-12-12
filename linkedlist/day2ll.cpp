#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
		
		~Node(){
			int value=this->data;
			if(this->next!=NULL){
				delete next;
				this->next=NULL;
			}
			cout<<"MEMORY IS FREE"<<value<<endl;
		}
};
//insert at the beginning
void insertAtHead(Node* &head,int data){
	Node* temp=new Node(data);
		temp->next=head;
		head=temp;
	
}
//insert in the end
void insertAtTail(Node* &tail,int data){
	Node* temp=new Node(data);
		tail->next=temp;
		tail=tail->next;
	
}
void nodeToInsert(Node* &head,int position,int d){
	int c=1;
	Node*temp=head;
	while(c<position-1){
		temp=temp->next;
		c++;
	}
	Node* nodeToInsert=new Node(d);
	nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

//insert int the end
void print(Node* &head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
//deletion of the list from the middle
void deleteNode(int position,Node*&head){
	if(position==1){
		Node*temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
	}
	else{
		Node*current=head;
		Node*previous=NULL;
		int c=1;
		while(c<position){
			previous=current;
			current=current->next;
			c++;
		}
		previous->next=current->next;
		current->next=NULL;
		delete current;
		
	}
}






int main(){
	Node* node1=new Node(10);
	cout<<node1->data<<endl;
	cout<<node1->next<<endl;
	Node* head=node1;
	Node* tail=node1;
	insertAtHead(head,12);
	insertAtTail(tail,62);
	print(head);
	print(tail);
	insertAtTail(tail,72);
	print(tail);
	insertAtTail(tail,82);
	print(tail);
	nodeToInsert(head,1,22);
	print(head);
	delete(1,head);
	print(head);
}
