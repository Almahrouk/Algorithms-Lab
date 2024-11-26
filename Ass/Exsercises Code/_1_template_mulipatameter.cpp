// create a template class with multiple parameter


/*
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <sstream>
#include <cassert>
#include <cctype>
#include <cmath>
*/
#include <iostream>
using namespace std;

// create a template class with multiple parameter
template <class T, class U, class V = char>
class ClassTemplate {
    private:
        T t;
        U u;
        V v;
    public:
        ClassTemplate(T x1, U x2, V x3) { // This Is Constuctor
            t = x1;
            u = x2;
            v = x3;
        }
    
        void Print(){   
            // We Create An Function >> We Dont Need A Parameter Form User >>>> 
            // The Funcion Can Get It from Constuctor >>> Inside class
            
            cout << "t =" << t << endl;
            cout << "u =" << u << endl;
            cout << "v =" << v << endl;
        }
};


int main(){
    ClassTemplate<int, char, char> c1(10, 'a', 'b'); // Create An Object To My Class
    c1.Print();

    ClassTemplate<int, char, bool> c2(10, 'a', true);
    c2.Print();

    return 0;
}
