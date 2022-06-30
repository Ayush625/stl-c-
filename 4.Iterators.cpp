#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> p={1,2,3,4,5};
    vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it;
    // for(it=v.begin();it!=v.end();it++){
    //     // cout<<(*it).first<<" "<<(*it).second<<endl;
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // How to write Iterators Code in Short in C++ STL || Auto and Range based loops
    //Ranged based Loops
    // for(int value: p){ 
    //     cout<<value<<" ";
    // }
    // cout<<"\n";
    // cout<<"Value didn't changed\n";
    // for(pair<int,int> value: v){ //copy value
    //     value.first++;
    //     value.second++; //Value didn't changed
    //     cout<<value.first<<" "<<value.second<<endl;
    // }
    // for(pair<int,int> &value: v){ //Increment value
    //     value.first++;
    //     value.second++;
    // }
    // cout<<"Value got changed\n";
    // for(pair<int,int> &value: v){ //exact value
    //     value.first++;
    //     value.second++; //Value got changed
    //     cout<<value.first<<" "<<value.second<<endl;
    // }

    // auto keyword
    // vector<pair<int,int>> :: iterator it; No need to write this line in case of Iterators becuase auto keyword automatically determine the type of iterator.
    for(auto it=v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"\n";

    for(auto value: v){ //copy value
        value.first++;
        value.second++;
        cout<<value.first<<" "<<value.second<<endl;
    }
    for(auto &value: v){ //Increment
        value.first++;
        value.second++;
    }

    for(auto &value: v){ //exact value
        value.first++;
        value.second++; 
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}

