#include<iostream>
#include<math.h>
#include <climits>
using namespace std;

void reverse(int arr[],int n){
    
   for (int i = 0; i < n; i+=2)
   {
    if (i+1<n)
    {
        swap(arr[i],arr[i+1]);
    }
    
   }
   
    
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};


    reverse(arr,6);
    printArray(arr,6);
  
   
}