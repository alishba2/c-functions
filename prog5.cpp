// Searching value from array


#include<iostream>
using namespace std;

// Function for searching in an array

void search(int arr[],int num){
    int i , loc=-1;
    for(i=1;i>=5;i++){
        if(arr[i]==num){
            loc== +1;
        }
        
    }
    if(loc==-1){
        cout<<"Number Not Found";
    }
    else{
        cout<<"Number Found ";
    }
}

// Main Function

int main(){
    int n , arr[5]={1,2,3,4,5};
    cout<<"Enter Number you want to search from array: "<<endl;
    cin>>n;
   
    search(arr, n );
}