#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }
        void InsertNode(int val){
            Node *NewNode = new Node();
            NewNode->data = val;
            NewNode->next = NULL;

            if(head == NULL){
                head = NewNode;
                return;
            }

            NewNode->next = head;
            head = NewNode;

        }
        void InsertNodeAtEnd(int val){
            Node* LastNode = new Node();
            LastNode->data = val;
            LastNode->next = NULL;

            if(head == NULL){
                head = LastNode;
                return;
            }

            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = LastNode;
        }

        void Middle(){
            cout<<endl;
            Node* slow = head;
            Node* fast = head;

            while(fast != NULL && fast->next!= NULL){
                slow = slow->next;
                fast = fast->next->next;

                if(fast == slow){
                    cout<<"List is cyclic.";
                }

            }
            cout<<slow->data;
        }
        void Reverse(){
            cout<<endl;
            if(head == NULL){
                cout<<"List is Empty";
                return;
            }

            Node* prev = nullptr;
            Node* curr = head;
            Node* NextNode = nullptr;
            while(curr!=NULL){
                NextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = NextNode;
            }
            head = prev;
        }
        

        void LocalMaximaAndLocalMinima(){
            
            if(head == NULL){
                cout<<"List is Empty";
                return;
            }

            Node* prev = head;
            Node* curr = prev->next;
            Node* NextNode = curr->next;
            int count = 0;

            cout<<"Local Maxima: "; 
            while(NextNode!=NULL){
                if(curr->data > prev->data && curr->data > NextNode->data){
                    cout<<curr->data<<" ";
                    count++;
                }
                prev = curr;
                curr = NextNode;
                NextNode = NextNode->next;
            }
            prev = head;
            curr = prev->next;
            NextNode = curr->next;

            cout<<endl<<"Local Minima: ";
            while(NextNode!=NULL){
                if(curr->data < prev->data && curr->data < NextNode->data){
                    cout<<curr->data<<" ";
                    count++;
                }
                prev = curr;
                curr = NextNode;
                NextNode = NextNode->next;
            }
            cout<<endl<<"Total Critical Point is: "<<count<<endl;
        }

        void deleteNode(int val){
            if(head==NULL){
                cout<<"List is empty";
                return;
            }
            
            Node* prev = nullptr;
            Node* curr = head;
            while(curr!=NULL){
                if(curr->data==val){
                    if(prev == NULL){
                        head = curr->next;
                        return;
                    }
                    prev->next = curr->next;

                    delete curr;
                    return;
                }
                prev = curr;
                curr = curr->next;
            }

        }

        void Traverse(){
            if(head == NULL){
                cout<<"List is Empty";
                return;
            }
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }
};

int main(){
    LinkedList data;
    int num;
    cout<<"Enter how many number you want to add: ";
    cin>>num;
    int NodeData;
    for(int i=0;i<num;i++){
        cout<<"Enter Number "<<i+1<<" : ";
        cin>>NodeData;
        data.InsertNodeAtEnd(NodeData);
    }
    data.Traverse();
    data.Middle();
    data.Reverse();
    data.Traverse();
    data.Reverse();
    data.LocalMaximaAndLocalMinima();
    int del;
    cout<<"Enter the value u want to delete: ";
    cin>>del;
    data.deleteNode(del);
    data.Traverse();
}

