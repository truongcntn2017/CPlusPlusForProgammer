#include <bits/stdc++.h>

using namespace std;

void testLoop(){
    unsigned char half_limit = 150;

    //Hint to the answer: run this code as is. 
    //then uncomment the line below. What happens?
    cout<<"half_limit = "<<half_limit<<"\n"; 
    
    cout<<"i = \n";
    cout<<2 * half_limit<<endl;
    
    for (unsigned char i = 0; i < 2 * half_limit; ++i)
    {
        cout<< (int)i<<", "<<endl;
        //This is another hint...
        //Why do we have a break here?
        if(i > 60)
           break;
    }
    // Hoc  - 0-61 - 0
    // Dat  - character 0 - 61 - 1
    // Phuong Truc - character 0-61 - 1
}

int main(){
    testLoop();
    return 0;
}