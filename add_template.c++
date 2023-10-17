#include<iostream>
using namespace std;
template <typename T>
T add(T x,T y) { 
    return x + y;
}

int main(){
    
    cout<<"The sum of 2 and 4 is"<<endl<<add(2,4);
    cout<<endl<<"The sum of 2.4564 and 4.00 is"<<endl<<add(2.4564,4.00);
    cout<<endl<<"this is the use of template";
    

}
