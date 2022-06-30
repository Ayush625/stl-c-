#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m){
    cout<<"Size="<<m.size()<<endl;
    for(auto pr:m){
        if(m.size()!=0)
            cout<<pr.first<<" "<<pr.second<<endl;
        else
            break; 
    }
}

int main(){
    unordered_map<int,string> m;
    m[1]="one";
    m[2]="two";
    m[3]="three";
    m[4]="four";
    m[5]="five";
    m.insert({6,"six"});
    print(m);
    return 0;
}

//multimap
// multimap<int,string> m;
//DUPLICATES ARE ALLOWED    
