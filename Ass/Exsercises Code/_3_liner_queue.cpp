#include<iostream>
#include<conio.h>
using namespace std;
//const int ;
#define size 8
template <class T>
class linearqueue {
    private:
        int front;
        int rear;
        int count;
        T arr[size];
    public:
        linearqueue() {
            front=-1;
            rear=-1;
            count=0;
        }
        
        bool isEmpty() {
            if((rear==-1 && front==-1)|| front==size-1|| (front==rear))
                return true;
            else
                return false;
        }

        bool isFull() { 
            if((rear==size-1))
                return true;
            else
                return false;
        }

        void enqueue (T item) {
            if(isFull()) {
                cout<<"Queue is Full\n";
            }
            else {
                rear++;
                arr[rear]=item;
                count++;
            }
        }

        T dequeue () {
            T dequeueitem;
            if(isEmpty()) {
                cout<<"Queue is Empty\n";
                return 0;
            }
            else {
                front++;
                dequeueitem=arr[front];
                count--;
                return dequeueitem;// OR => return arr[++front]
            }
        }

        int numberofitems() {
            return count;
        }

        void print_rearandfront() {
            cout<<"\nrear="<<rear<<" front="<<front<<endl;
        }

        void print_queue() {
            for (int i = front+1; i <= rear; i++)
            cout << "Position : " << i << " , Value : " << arr[i]<<endl;
        }
};


int main() {
    int s;
    linearqueue <int> q1;
    q1.dequeue(); //empty
    q1.print_rearandfront(); //r=-1 f=-1
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6); 

    q1.print_queue(); //position (0)=1 2 3 4 5 6
    q1.print_rearandfront();//r=5 f=-1
    cout<<"number of items in the queue: "<<q1.numberofitems()<<endl; //6
    
    
    s=q1.numberofitems();
    for(int i=0;i<s;i++) {
        cout << q1.dequeue() << endl;
    }

    q1.print_rearandfront(); //r=5 f=5
    cout<<"number of items in the queue: "<<q1.numberofitems()<<endl;//0  => Liner Queue is Empty


    q1.enqueue(7);
    q1.print_rearandfront(); //r=6 f=5

    q1.enqueue(8);
    q1.print_rearandfront();//r=7 f=5

    q1.enqueue(9); //full  ???? => Error "The Queue is not full"
    q1.print_rearandfront();
    cout<<"number of items in the queue: "<<q1.numberofitems()<<endl;
    q1.print_queue(); // position (6)=8 9
    cout<<"number of items in the queue: "<<q1.numberofitems()<<endl; //2   => There are only 2 item in Queue 
    // But He Say That Queue Is Full ???? => Why?
    



    cout << q1.dequeue() << endl; //7
    q1.print_rearandfront(); //r=7 f=6
    cout<<"number of items in the queue: "<<q1.numberofitems()<<endl; //1
    cout << q1.dequeue() << endl; //8
    q1.print_rearandfront(); //r=7 f=7
    cout<<"number of items in the queue: "<<q1.numberofitems()<<endl; //0
    q1.enqueue(99); //full
    q1.print_queue();
    cout << q1.dequeue() << endl; //empty
    getch();
}