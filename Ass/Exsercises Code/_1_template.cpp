// Template

// 1] Create Template Function.
/*
A] Define:
>>>>
template < typename T >
T funName(T p1, T p2, ...){
    /code
}

B] Call:
funName<Datatype>(p1,p1,...);
*/


/****************************************************/


// 2] Create Template Class.
/*
A] Define:
>>>>
template < typename T >
class className {
    private:
        T v1;
        ...
    public:
        className(T xx){  >>> This is con struct tor  >> Auto Call
            q1=xx;
            }

        T funName(T q1);
        ...
};


B] Call:
className<Datatype> obj1;      >>> This To Create An Object

obj1.funName<Datatype>(q1);    >>> This To Call  >> "funName inside "Template Class" " Using My Object




*************************************************************


/------- For Class Member "Outside" Class Template   --------\
template <class T>
class className {
    private:
        T v1;
        ...
    public:
    className(T xx){  >>> This is con struct tor  >> Auto Call
    .......

    ///-> Function Prototype
    T funName();
};


/-> Function definition
template <class T>
T className<T>::funName(){
    /-> code
}


*/



// Calculater Code "Using Template Class (Outside)"

#include <iostream>
using namespace std;

template <class T>
class Calculator {
    private:
        T v1, v2;
    public:
        Calculator(T n1, T n2){
            v1 = n1;
            v2 = n2;
        }

        void DisplayResult(){
            cout << "Numbers: " << v1 << "and" << v2 << "." << endl;
            cout << v1 << "+" << v2 << "=" << add() << endl;
            cout << v1 << "-" << v2 << "=" << sub() << endl;
            cout << v1 << "*" << v2 << "=" << mul() << endl;
            cout << v1 << "/" << v2 << "=" << div() << endl;

        }
        T add();
        T sub();
        T mul();
        T div();
    
};

template <class T>
T Calculator<T>::add() {
    return v1 + v2;
}

template <class T>
T Calculator<T>::sub() {
    return v1 - v2;
}

template <class T>
T Calculator<T>::mul() {
    return v1 * v2;
}

template <class T>
T Calculator<T>::div() {
    return v1 / v2;
}

int main() {
    Calculator<int> intCalc(10.8, 5);
    intCalc.DisplayResult() ;
    return 0;
}
