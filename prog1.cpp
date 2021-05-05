// write a program that display squares of characters using function

#include<iostream>
using namespace std;


int square(int num , char character){

    int i,j;
    for(i=1;i<=num;i++){
        for(j=1;j<=num;j++)
        {
            cout<<character<<" ";
        }
        cout<<endl;
    }
    return 0;

}
int main(){
    int num ; char character;

    cout<<"Enter number of rows and colomns for printing square: "<<endl;
    cin >> num;

    cout<<"Enter the character for displaying square: "<<endl;
    cin >> character;

    square(num,character);
    return 0;
}