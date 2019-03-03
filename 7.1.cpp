/*   Реализуйте класс int_stack_with_max - стек умеющий за O(1) выдавать максимальный хранимый элемент.*/
struct node{
int data;
node* next=NULL;
};

class sort_stack{
node* head;
int size;
public:
    sort_stack(){
    head=NULL;
    size=0;
}
   
    void push(int x){
    node* temp = new node;
    temp->data=x;
    if(size==0){
    head=temp;
 }
    else if(size==1){
        if(temp->data>head->data){
            temp->next=head;
            head=temp;
 }
        else{
            head->next=temp;
 }
 }
    else{
    if(temp->data>head->data){
        temp->next=head;
        head=temp; 
 }
    else{
    node* tmp = head;
    while(temp->data<tmp->next->data && tmp->next!=NULL){
        tmp=tmp->next;
 }
    temp->next=tmp->next;
    tmp->next=temp;
 }
 }
    size++;
 }
    void del(int j){
    int i=0;
    node* temp = head;
    if(j!=0){
    while(i+1!=j && j!=0){
        temp=temp->next;
        i++;
 }
    node* tmp = temp->next;
    temp->next=tmp->next;
    delete tmp;  
}
    else{
        head=head->next;
        delete temp;
 }
    size--;
 }
    void show(){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
}
}
    int maxnode(){
    return head->data;
}
    ~sort_stack(){
    while(head!=NULL){
        node* temp = head;
        head=head->next;
        delete temp;
}
}
};