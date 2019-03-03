/* Реализуйте класс double_stack -  стек вещественных чисел переменного размера. Класс должен содержать конструктор, деструктор, методы push,pop*/
struct node{
double data;
node* next=NULL;
};
class double_stack{
node* head;
public:
    double_stack():head(NULL){}
    void push(double x){
    node* temp = new node;
    temp->data=x;
    temp->next=head;
    }
    void push(double x){
    node* temp = new node;
    temp->data=x;
    temp->next=head;
    }
    double pop(){
    if(head==NULL){
        cout<<"error";
        return 0;
    }
    else{
        double x = head->data;
        node* temp = head;
        head=head->next;
        delete temp;
        return x;
    }
    }
    ~double_stack(){
    while(head!=NULL){
        node* temp=head;
        head=head->next;
        delete temp;
    }
    }
};