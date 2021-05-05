// Prog tha print max number

#include<iostream> 
using namespace std;

// Function for displaying maximum number

void displayMax(int arr[5]){
    
    int i,max;

    max = arr[0];

    for(i=1;i<=5;i++){

        if (arr[i]>arr[max]){
            max = arr[i];

        }
    }
    cout<<"Maximum number in an array is: "<<max;
}

// Main Function

int main(){

    int arr[]={1,2,3,4,5};

    displayMax(arr);

    return 0;
}