#include <iostream>
#include <conio.h>
using namespace std;

class Node {
    private:
        int value;
        Node *next;
    public:
        Node(int _value = 0 , Node* _next = nullptr):
            value(_value), next(_next){}

		int getValue() const;
        void setValue(int);

		Node* getNext() const;
        void setNext(Node*);

};
void Node::setValue(int _value){
    this->value = _value;
}

int Node::getValue() const {
    return value;
}

void Node::setNext(Node *_next){
    this->next = _next;
}

Node* Node::getNext() const{
    return next;
}

class LinkedList {
        int size;
        Node *head;
    public:

        LinkedList();
        LinkedList(int);
        LinkedList(const LinkedList &);

        ~LinkedList();

        void insert(int);

        void removeByValue(int);
        void removeByPosition(int);

        bool search(int value);

        friend ostream& operator <<(ostream &salida1,const LinkedList& C);
        //****************************************************************
        friend LinkedList& operator +(const LinkedList& X, const LinkedList &Y);//operador aritmetico
        LinkedList& operator +=(const LinkedList& X);//operador de asignacion
        //****************************************************************
};
LinkedList::LinkedList() {
    this->size = 0;
    this->head = nullptr;
}

LinkedList::LinkedList(int value) {
    this->size = 1;
    this->head = new Node(value);
}

LinkedList::LinkedList(const LinkedList &o) {
    this->size = 0;
    this->head = nullptr;
    Node* actual_o = o.head;
    while(actual_o)
    {
        this->insert(actual_o->getValue());
        actual_o = actual_o->getNext();
    }

}

LinkedList::~LinkedList() {
    Node *actual;
    while (head!=nullptr){
        actual = head->getNext();
        delete head;
        head = actual;
    }
    delete head;
}

void LinkedList::insert(int value) {
    Node *newNode = new Node(value);
    Node *tmp = head;
    if(head==nullptr){
        head = newNode;
    } else {
        if (head->getValue() > value) {
            newNode->setNext(head);
            head = newNode;
        } else {
            while ( (tmp->getNext() != nullptr) &&
                        (tmp->getNext()->getValue() < value) )
            {
                tmp = tmp->getNext();
            }
            newNode->setNext(tmp->getNext());
            tmp->setNext(newNode);
        }
    }
    size++;
}

void LinkedList::removeByPosition(int posicion) {
    if(posicion<size){
        Node *aux, *actual=head;
        if (posicion!=0){
            int i=0;
            while(i<posicion){
                aux = actual; actual = actual->getNext();
                i++;
            }
            aux -> setNext( actual->getNext() ); delete actual;
        }
        else{
            head = head -> getNext(); delete actual;
        }
        size--;
    }
}

void LinkedList::removeByValue(int value) {
    Node *actual = head;
    int position=0;
    if(size != 0){
        while (actual!=nullptr){
            if ( value == actual->getValue() ){
                removeByPosition(position); break;
            }
            position++; actual = actual->getNext();
        }
    }
}

bool LinkedList::search(int value) {
    Node *tmp = head;

    while(tmp != nullptr ){
        if(tmp->getValue()==value){
            return true;
        }
        tmp = tmp->getNext();
    }
    return false;
}

ostream& operator <<(ostream &salida1,const LinkedList& C){
    Node* actual = C.head;
    salida1 <<" [ ";
    while(actual!=nullptr){
        salida1 << actual->getValue()<<" ";
        actual = actual->getNext();
    }
     salida1 << "] ";
    return salida1;
}

//operadores recien aniadidos
LinkedList& operator +(const LinkedList &X,const LinkedList &Y)
 {
    LinkedList *lista = new LinkedList();

    Node* actual = X.head;

    while(actual != nullptr)
        {
        lista->insert(actual->getValue());
        actual = actual->getNext();
        }

    actual = Y.head;
    while(actual!=nullptr)
        {
        lista->insert(actual->getValue());

        actual = actual->getNext();
         }

    return *lista;
}

LinkedList& LinkedList::operator +=(const LinkedList &X)
    {
    Node* actual = X.head;
    while(actual != nullptr)
            {
        this->insert(actual->getValue());

        actual = actual->getNext();
        }

    return *this;
}
int main() {
    cout<<"LISTAS"<<endl;

    LinkedList lista1(1);
    LinkedList lista2(2);
    LinkedList lista3(3);
    LinkedList lista4(4);
    LinkedList lista5(5);
    LinkedList lista6(6);
    lista1 += lista2;
    lista1+=lista3;
    lista1+=lista4;
    lista1+=lista5;
    lista1+=lista6;

    cout <<lista1<<endl;
    return 0;
    getch();
}
