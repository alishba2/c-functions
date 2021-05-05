// write a program that calls the function 5 times using loop and declare a static variable inside the loop whose value in 
// incremented each time when the function is called and display that value on the screen

#include<iostream>
using namespace std;


int fun(){
    static int i;
    i++;
    cout<<"The value of variabla inside the function is: "<<i<<endl;
    return 0;
}
int main(){
    int i;
    for(i=1;i<=5;i++){
        fun();
    }
    return 0;
}