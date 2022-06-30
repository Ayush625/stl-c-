#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string>s){
    cout<<"Size="<<s.size()<<endl;
    for(auto value:s){
        cout<<value<<endl;
    }
}
int main()
{
    unordered_set<string> s; //o(1)
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    print(s);
    int N;
    cin>>N;
    while(N--){
        string str;
        cin>>str;
        if(s.end()==s.find(str))
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
//multiset O(log n)
// multiset<string> s;
// insertion can be multiple time, duplicates are allowed 
// auto it=s.find(); //returns iterator of fisrt occouring.
// s.erase(); //erase all
