#include<bits/stdc++.h>
using namespace std;
int main() {
    multiset<int>s;
    int q;
    cin>>q;
    while(q--){
        int y,x;
        cin>>y>>x;
        switch(y){
            case 1:  s.insert(x);//insert
                break;
            case 2:  s.erase(x);       //erase
                break;
            case 3:  auto it=s.find(x);
                    if(it!=s.end())
                        cout<<"Yes\n";
                    else
                        cout<<"No\n";
        }
    }
    return 0;  
}

