#include<bits/stdc++.h>
using namespace std;
void print(set<string>s){
    cout<<"Size="<<s.size()<<endl;
    for(auto value:s){
        cout<<value<<endl;
    }
}
int main()
{
    set<string>s;
    s.insert("abc");
    s.insert("fg");
    s.insert("we");
    s.insert("bv");
    s.insert("Aa");
    print(s);
    auto it=s.find("Aa");
    s.erase(it);
    print(s);
    return 0;
}
