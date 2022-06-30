#include<bits/stdc++.h>
using namespace std;

int main()
{
// 1
// 2 3
// 3 2 9 11 2
    multiset<int>s1;
    multiset<int>s2;
    int c=0,t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int tt=(n+m); //total students
        int candies=-1;
        while(n--){
            cin>>candies;
            s1.insert(candies); 
        }
        while(m--){
            cin>>candies;
            s2.insert(candies); 
        }
        for(auto values:s1){
            cout<<values<<" ";

        }
        printf("\n");
        for(auto values:s2){
            cout<<values<<" ";
        }
        printf("\n");
        for(auto values:s1){
            for(auto v2:s2){
                auto it=s2.find(values);

            }
            cout<<"values="<<values<<" "<<"*it="<<*it<<endl;
            if(values==*it)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
//will di it later