//Static Class Members
#include<iostream>
using namespace std;

class A
{
    public:
        static int integer;
        int getInt();
        //A();
};

/*
A::A(){
    A::integer++;
}
*/
int A::integer = 1;


int A::getInt()
{
    //A::integer++;
    return integer;
}

int main()
{
    A firstInstance;
    A secondInstance;
    
    cout<<"\nfirstInstance = "<<firstInstance.getInt();
    cout<<"\nsecondInstance = "<<secondInstance.getInt();  
    cout<<"\n\nSet secondInstance.integer = 2";
    secondInstance.integer = 2;
    cout<<"\n\nfirstInstance = "<<firstInstance.getInt();
    cout<<"\nsecondInstance = "<<secondInstance.getInt()<<endl;
    
    return 0;
}
