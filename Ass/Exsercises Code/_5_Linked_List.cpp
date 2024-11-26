#include <iostream>
#include<conio.h>
using namespace std;
template <class T>
class unorderedlinklist {
    private:
        template <class T>
        struct node {
            T data;
            node <T> *link;
        };
    node <T> *head;

    public:
        unorderedlinklist()  { head = NULL; }
        ~unorderedlinklist() {
            node <T>*q;
            if( head == NULL )
                return;
            while( head != NULL ) {
                q = head->link;
                delete head;
                head = q;
            } 
        }

        void insert( T num );
        void add_as_first( T num );
        void addafter( T c, T num );
        T del( T num );
        void display();
        T count();
};

template <class T>
void unorderedlinklist<T>::insert(T num) {
    node <T>*q,*t;
    if( head == NULL ) {// insert into empty list{
        head = new node<T>;
        head->data = num;
        head->link = NULL;
    }

    else {// append 
        q = head;

        while( q->link != NULL )
        q = q->link;
        t = new node<T>;
        t->data = num;
        q->link= t;
        t->link = NULL;
    } 
}

template <class T>
void unorderedlinklist<T>::add_as_first(T num) // insert in the beginning
{
    node <T>*q;
    q = new node<T>;
    q->data = num;
    q->link = head;
    head = q;
}

template <class T>
void unorderedlinklist<T>::addafter( T c, T num) // insert in the middle
{
    node <T>*q,*t;
    int i;
    for(i=1,q=head;i<c;i++) {
        q = q->link;
        if( q == NULL ) {
            cout<<"\nThere are less than "<<c<<" elements.";
            return;
        } 
    }

    t = new node<T>;
    t->data = num;
    t->link = q->link;
    q->link = t;
}


template <class T>
T unorderedlinklist<T>::del( T num ) {
    node <T>*q,*r;
    q = head;
    if( q->data == num ) { // delete from the beginning 
        head = q->link;
        delete q;
        return 0;
    }

    r = q;
    while( q!=NULL ) {
        if( q->data == num ) { 
            r ->link = q->link;
            delete q;
            return 0;
        }

    r = q;
    q = q->link;
    }

    cout<<"\nElement "<<num<<" not Found."<<endl;
}


template <class T>
void unorderedlinklist<T>::display() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
    }

    else {
        node <T>* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
        }
    cout << endl;
    }
}

template <class T>
T unorderedlinklist<T>::count() {
    node <T>*q;
    int c=0;
    for( q=head ; q != NULL ; q = q->link )
        c++;
    return c;
}


int main()
{
unorderedlinklist <int> ll;
cout<<"No. of elements = "<<ll.count();
ll.insert(12);
ll.insert(13);
ll.insert(23);
ll.insert(43);
ll.insert(44);
ll.insert(50);
ll.add_as_first(2);
ll.add_as_first(111);
ll.addafter(2,333);
ll.addafter(6,666);
ll.display();
cout<<"\nNo. of elements = "<<ll.count();
ll.del(333);
ll.del(12);
ll.del(98);
cout<<"\nNo. of elements = "<<ll.count();
ll.display();
getch();
return 0;
}