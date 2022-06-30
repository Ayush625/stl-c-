#include<bits/stdc++.h>
using namespace std;
int printVec(vector<int> v){
    cout<<"Size="<<v.size()<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
return 0;
}
int main(){
    
    vector<int> v;
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" Integers\n";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);

    }
    printVec(v);        
    return 0;
}


