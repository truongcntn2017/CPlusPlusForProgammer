#include <iostream>

using namespace std; 

int returnValue(){
    static int i = 0;
    i++;
    return i;
}

int main(){
    cout<<"\ni = "<<returnValue();
    cout<<"\ni = "<<returnValue();
    cout<<"\ni = "<<returnValue()<<endl;
    return 0;
}