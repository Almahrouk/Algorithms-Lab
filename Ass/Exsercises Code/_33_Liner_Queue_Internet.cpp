#include <iostream>
#include <conio.h>
using namespace std;
#define size 8 

template <class T>
class LinerQueue {
    private:
        int front, rear, count;
        T arr[size];
    
    public:
        LinerQueue(){
            front = rear = -1;
            count = 0;

        }

        bool isEmpty(){
            return ((rear==-1 && front==-1) || (front== (size-1) ) || (front==rear) ||(count==0))?true:false;
        }
        bool isFull(){
            return ((rear==(size-1))||(count==size))?true:false;
        }
        void enqueue(T element){
            if (isFull()) return "The Queue Is Full";
            else {
                rear++;
                arr[rear] = element;  
                // Or Use arr[++rear]=element;
                count++;
            }
        }
        T dequeue(){
            if (isEmpty()) return "The Queue Is Empty";
            else {
                count--;
                return arr[++front];
            }
        }

        int numItems(){return count;}
        void print_rear_and_front(){ return cout<<"rear="<<rear<<"  front="<<front;}
        void Display_Queue(){
            for (int i=0; i<count; i++) {   // for (int i=(front+1); i<rear; i++)
                cout<< "Position=" << i << "Value=" << arr[i] << endl;
            }
        }
};


int main() {
    // class_name <Data_Type> Object_Name;
    LinerQueue<int> A1;

    A1.dequeue();                 // Empty
    A1.print_rear_and_front();      // r=-1 f=-1

    for (int x=0; x<=10; x++){
        A1.enqueue(x);
    }
}