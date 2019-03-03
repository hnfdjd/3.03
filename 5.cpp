/*Реализуйте класс int_linked_list - двусвязный список. Класс должен содержать конструктор, конструктор копий,  деструктор, оператор присвоения, оператор [ ] - обращение по индексу, вставку по индексу, удаление по индексу.*/
struct node{
int data;
node* next=NULL;
node* prev=NULL;
};
class int_linked_list{
node* head=NULL;
public:
    int_linked_list(){
    head=NULL;
    }
    void push(int x){
    node* temp = new node;
    temp->data = x;
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    }
    void show(){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    }
    int operator[](int j){
    node* temp = head;
    int i=0;
    while(i!=j){
        temp=temp->next;
        i++;
    }
    return temp->data;
    }
    
    
    void operator=(int_linked_list ar){
    while(head!=NULL){
        node* temp = head;
        head=head->next;
        delete temp;
    }
    node* temp = ar.head;
    while(temp!=NULL){
        this->push(temp->data);
        temp=temp->next;
    }
    }
    
    
    void push_index(int x,int j){
    int i=0;
    node* tmp = new node;
    tmp->data=x;
    node* temp = head;
    while(i!=j){
        temp=temp->next;
        i++;
    }
    tmp->next=temp->next;
    tmp->prev=temp;
    temp->next->prev=tmp;
    temp->next=tmp;
    }
    void del(int j){
    int i=0;
    node* temp = head;
    while(i!=j){
        temp=temp->next;
        i++;
    }
    node* tmp = temp->next;
    tmp->prev=temp;
    temp->next=temp->next->next;
    delete tmp;
    }
    
    
     ~int_linked_list(){
    while(head!=NULL){
        node* temp = head;
        head=head->next;
        delete temp;
    }
    }
    
    
};
