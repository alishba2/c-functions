// Sorting in ascending. Using Functions

#include<iostream>
using namespace std;

// Function to sort an array

void sortdata(int arr[]){
    int i,min,temp,j;
    for(i=1;i<=5;i++){
        min = i;
        for(j=i+1;j<=5;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

// Function to Display sorted array

void displayData(int arr[]){
    int i;
    cout<<"Sorted Array "<<endl;
    for(i=1;i<=5;i++)
    {
        cout<<arr[i]<<endl;
    }
}

// Main Function

int main(){
    int arr[5]={4,6,3,2,1};

     cout<<"Unsorted Array"<<endl;
    for(int i=1;i<=5;i++)
    {
       cout<<arr[i]<<endl;
      }

    sortdata(arr);
    displayData(arr);
    
    return 0;
}