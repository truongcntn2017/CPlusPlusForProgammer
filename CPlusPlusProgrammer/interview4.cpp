//The code from the above quiz question
#include <bits/stdc++.h>

using namespace std;

class Base {
    virtual void method() {std::cout << "from Base" << std::endl;}
public:
    virtual ~Base() {method();}
    void baseMethod() {method();}
};

class A : public Base {
    void method() {std::cout << "from A" << std::endl;}
public:
    ~A() {method();}
};
// Dat -from base - from A - 0
// Phuong Truc - from A - from A - from base - 1
// Hoc - from A - 0
int main(void) {
    Base* base = new A;
    base->baseMethod();
    delete base;
    return 0;
}