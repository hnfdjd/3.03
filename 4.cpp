/*Реализуйте класс int_list - односвязный список.  Класс должен содержать конструктор, конструктор копий,  деструктор, оператор присвоения, оператор [ ] - обращение по индексу, вставку по индексу, удаление по индексу.*/
struct node{
int data;
node* next=NULL;
};
class int_list{
node* head;
public:
    int_list(){
    this->head=NULL;
    }
    void push(int x){
    node* temp = new node;
    temp->data=x;
    temp->next=head;
    head=temp;
    }
    void showhead(){
    cout<<head->data;
    }
    void show_index(int a){
    node* temp = head;
    int i=0;
    while(i!=a){
        temp=temp->next;
        i++;
    }
    cout<<temp->data;
    }
    void show(){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    }
    void push_index(int x,int a){
    int i=0;
    node* tmp = new node;
    tmp->data=x;
    node* temp = head;
    while(i!=a){
        temp=temp->next;
        i++;
    }
    tmp->next=temp->next;
    temp->next=tmp;
    }
    void del(int a){
    int i=0;
    node* temp = head;
    while(i!=a){
        temp=temp->next;
        i++;
    }
    node* tmp = temp->next;
    temp->next=temp->next->next;
    delete tmp;
    }
    int operator[](int a){
        int i=0;
        node* temp = head;
        while(i!=a){
            temp=temp->next;
            i++;
        }
        return temp->data;
    }
    void operator=(int_list ar){
    node* temp = ar.head;

    }
    ~int_list(){
    while(head!=NULL){
        node* temp = head->next;
      