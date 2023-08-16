#include<iostream>
using namespace std;

int firstOcc(int arr[], int n , int key){
    int s = 0 , e = n-1;
    int mid = s + (e -s )/2;
    int ans = -1;

    while(s<=e){
        if(key == arr[mid]){
            ans = mid ;
            e = mid -1;
        }
        else if(key > arr[mid]){
            s = mid +1;
        }
        else {
            e = mid -1 ;
        }
        mid = s + (e -s )/2;
    }
     
     return ans;
}


int lastOcc(int arr[], int n , int key){
    int s = 0 , e = n-1;
    int mid = s + (e -s )/2;
    int ans = -1;

    while(s<=e){
        if(key == arr[mid]){
            ans = mid ;
            s = mid +1;
        }
        else if(key > arr[mid]){
            s = mid +1;
        }
        else {
            e = mid -1 ;
        }
        mid = s + (e -s )/2;
    }
     
     return ans;
}


int main(){
    int arr[6]={1,4,3,3,4,6};

     int index2 = firstOcc(arr,6,3);
     cout<<index2;

    int index = lastOcc(arr,6,3);
    cout<<index;
    
}