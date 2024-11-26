// Circular Queue
#include <iostream>
#include <conio.h>
using namespace std;
#define size 4

template <class T>
class CircularQueue{
    private:
        int rear, front, count;
        T arr[size];
    
    public:
        CircularQueue(){
            // This Only For Circular Queue...
            front = 0 ;      // Begine Of The Queue => To Directed First 
            rear = size -1;  // End Of The Queue    
            count = 0;  
        }
        bool isEmpty(){
            return (count==0)?true:false;
        }
        bool isFull(){
            return (count==size)?true:false;
        }
        void enqueue(T element){
            if (isFull()){ cout<<"The Queue Is Full \n"; }
            else {
                rear = (rear + 1) % size;
                arr[rear] = element;
                count++ ;
            }
        }
        T dequeue (){
            if (isEmpty()){ cout<<"The Queue Is Empty \n"; }
            else {
                T a = arr[front];
                front = (front+1) % size;
                count--;
            }
        }
        int get_size(){ return count; }
        void get_rear_and_front() { cout<< "rear="<< rear << "  front= "<< front << endl; }
        void Display_Item(){ 
            for (int i=0; i<count; i++){ // OR for(int i=rear; i<front+1; i++)
                cout<< arr[i] <<endl;
            }
        }

        /*bool search(T y){
            for (int i=0; i<count; i++){ return (arr[i]==y)?true:false; }
        }*/     
        
        int repeater(T y){
            int x=0;
            for (int i=0; i<count; i++){ 
                if (arr[i]==y) {
                    x++;
                    continue;
                }
                else {
                    continue;
                }
                
            }
            return x;
        }

};



int main(){
    CircularQueue<int> A1;
    for (int u=0; u<=10; u++){
        A1.enqueue(u);
    }
    A1.Display_Item();
    //A1.search(3);
    return 0;
}
