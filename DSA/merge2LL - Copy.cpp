#include<iostream>
using namespace std;
struct SLL{
    int data;
    struct SLL *next;
}*start;
typedef struct SLL node;
int create_list(int &array){
    int i;
  node* head=(node*)(malloc(sizeof(struct SLL)));
   for( i=0;i<7;i++){
    head->data=array[i];
    head=head->next;
   }
   start=head;
   delete head;
}
void display(){
    node* temp=start;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    delete temp;
}
int main(){

    return 0;
}