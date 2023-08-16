#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("shivam");
    q.push("chaurasiya");
    q.push("kumar");

    
    cout<<q.front();
    cout<<q.size();
    q.pop();
    cout<<q.size();
    cout<<q.front();

}