#include <bits/stdc++.h> 

// Function to check if it is possible to distribute the books among m students 
bool isPossible(vector<int> arr, int n, int m,int mid){
    
    // current student
    int student = 1;
    // pages read by current student
    int pageSum = 0;
    
    // iterating through all the books
    for(int i = 0; i<n; i++){
        // if pages read by current student + pages of current book <= mid
        if(pageSum + arr[i]<=mid){
           // add the pages of current book to the pages read by current student
           pageSum += arr[i];
        }
        else{
            // increment student count and update pageSum
            student++;
            if(student>m || arr[i]>mid){
                // unable to distribute books among m students or current book is greater than mid
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
    
}

// Function to find the minimum number of pages a student should read
int allocateBooks(vector<int> arr, int n, int m) {
    // lower bound
    int s =0;
    // sum of pages of all books
    int sum = 0;
    
    // calculating sum of pages
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    // upper bound
    int e = sum;
    int ans = -1;
    int mid = s + (e - s)/2;
    
    // using binary search to find the minimum number of pages
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
