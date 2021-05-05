// Function that input 5 values and Function that diplays that values

#include<iostream>
using namespace std;


int inputValues(int arr[]){
    int i;
    cout<<"Enter any five elements for array: "<<endl;
    for(i=1;i<=5;i++){
        cin>>arr[i];
    }
    return i;
}
void displayValues(int arr[])
{
    int i;
    for(i=1;i<=5;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5];
    inputValues(arr);
    displayValues(arr);

}