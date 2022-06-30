#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<"Size="<<m.size()<<endl;
    // map<int,string>::iterator it;
    // for(auto it=m.begin();it!=m.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    //short{auto + ranged based loops}
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl; 
    }
}

int main(){
    map<int,string> m;
    m[1]="One";
    m[5]="Five";
    m[3]="Three";
    m.insert({4,"Four"}); //insert O(log n)
    print(m);
    auto it=m.find(3);    //find O(log n)
    if(it!=m.end())         //end 
        m.erase(it);           //erase O(log n)
    // if(it==m.end())
    //     cout<<"No Value\n";
    // else
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    print(m);
    return 0;
}

//practice Question
// int main(){
//     map<string,int> m;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string s;
//         cin>>s;
//         m[s]=m[s]+1;
//         // cout<<s<<"="<<m[s]<<endl;

//     }
//     for(auto pr : m){
//         cout<<pr.first<<" "<<pr.second
//         <<endl;
//     }
//     return 0;
// }
