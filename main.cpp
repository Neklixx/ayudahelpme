#include <iomanip>
#include <stdexcept>
#include <iostream>
#include "time.h"
using namespace std;


    
int main() {
    Time t;

    cout<<"Tiempo actual: ";
    t.toUniversalString();
    t.setTime(13,27,6);
    

    try {
        t.setTime(99,99,99);
    } catch (invalid_argument& e) {
        cout <<"Excepción: " << e.what() << "\n\n";
    }
}