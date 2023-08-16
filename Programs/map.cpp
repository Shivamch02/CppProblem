#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="shivam";
    m[2]="chaurasiya";
    m[3]="kumar";

    for(auto i: m ){
        cout<<i.first<<endl;
    }

    cout<<m.count(3)<<endl;
    m.erase(3);
    for(auto i: m ){
        cout<<i.first<<endl;
    }



}