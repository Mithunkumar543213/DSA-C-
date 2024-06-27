#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head){  //we can also take head as a call by value but if take call by refrence then it is better 
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data <<" "<<endl;
        temp = temp->next;
    }
};

void insertionAtBegnning(Node* &head ,int data){
   Node *temp =new Node(data);
   temp->next = head;
   head=temp;
}

void insertionAtEnd(Node* &head ,int data){
    Node*temp = new Node(data);
    Node*temp1 = head;
    while(temp1->next!=NULL){
        // cout<< temp1 <<endl;
        // cout<< temp1->next <<endl;
        temp1=temp1->next;
    }
    temp1->next=temp;
}

void insertionAtPosition(Node* &head,int pos,int data){
Node*newdata = new Node(data);
Node*temp=head;
int count = 0;
for(int i=count;i<(pos-1);i++){
    temp = temp->next;

}
newdata->next = temp->next;
temp->next=newdata;
 
}

void deleteNode(Node* &head , int pos){
    Node* temp = head;
    Node* temp1;
//for  position head
    if(pos==1){
       temp1=head;
       head=head->next;
   }

    for(int i= 0;i<(pos-1); i++){
       // cout << temp->data <<endl;
        temp1 = temp;
        temp = temp->next;
    }
   
    temp1->next=temp->next;                      ;
    //delete(temp1);
}

int main(){

Node* head = new Node(10);
//print(head);

insertionAtBegnning(head,5);
//print(head);

insertionAtEnd(head,15);
//print(head);

insertionAtPosition(head,1,7);
//print(head);

deleteNode(head,4);
print(head);


return 0;
}