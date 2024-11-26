// Stack
#include <iostream>
#include <conio.h>
#include <array>
using namespace std;

#define size 10
//const int size= 10;
template <class T>
class Stack {
    private:
        int top;         // Create A Int Value As A "Top Of The Stack"
        T array[size];   // Cteate An Array To Contains Stack Data   
        // It Is Template Stack >> Different Data Type "On same Stack"
    public:
        Stack(){
            top = -1;    // initical value of the stack >> it mean that stack is empty now 
        }
        bool isEmpty(){  // return top==-1?true:false;
            if (top==-1) 
                return true;
            else 
                return false;
        }

        bool isFull(){   // return top==(size-1)?true:false;
            if (top==(size-1)){
                return true;
            }
            else
                return false;
        }

        void push(T element){
            if (isFull()) {
                cout<<"Stack is full"<<endl;
                
            }
            else {
                top++;
                array[top]= element;
                cout<<"Pushed "<<element<<" Into Stack"<<endl;
            }
        }

        T pop(){
            if (isEmpty()) {
                cout<<"Stack is empty"<<endl;
                return 0;
                }
                else {
                    T element = array[top];
                    top--;
                    cout<<"Popped ";
                    return element;
                    }
        }

        void Display(){
            cout<<"Stack Display"<<endl;
            int i=0;
            for (int i=(top);i>=0;i--) {
                cout<<array[i]<<" ";
            }
        }
};


int main(){
    Stack<int> s1;
    Stack<char> s2;
    for (int w=0; w<=10; w++){
        s1.push(w);
        }
    for (int w=97; w<=108; w++){
        s2.push((char)w);
        }
    cout << "Int S1 After Pushing :" << endl;
    s1.Display();
    cout << "Char S2 After Pushing :" << endl;
    s2.Display();

    for (int q=0; q<=10; q++){
        cout<<s1.pop()<<" from S1"<<endl;
        }
    
    for (int q=0; q<=10; q++){
        cout<<s2.pop()<<" from S2"<<endl;
        }
    

    
}