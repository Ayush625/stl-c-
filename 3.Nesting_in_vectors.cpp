#include<bits/stdc++.h>
using namespace std;
void printVector1(vector<pair<int,int>> &v){
    cout<<"Size="<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    cout<<"\n";
}
void printVector2(vector<int> &v){
    cout<<"Size="<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    //Nesting In Vector
    // vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
    // vector<pair<int,int>> v;
    // int n;
    // cout<<"Enter The number Of Pair You Want To Enter\n";
    // cin>>n;
    // cout<<"Enter "<<n<<" Pairs in vector\n";
    // for(int i=0;i<n;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});
    // }
    // printVector1(v);

    // Array Of Vector
    // int N; //Size of Vector
    // cin>>N;
    // vector<int> v[N];
    // for(int i=0;i<N;i++){
    //     int n; //Size of Array at vector
    //     cin>>n;
    //     for(int j=0;j<n;j++){
    //         int x; //Value in Array for vector
    //         cin>>x;
    //         v[i].push_back(x); //Storing data in vectors
    //     }
    // }
    // for(int i=0;i<N;i++){
    //     printVector2(v[i]);
    // }

    //Vector of Vectors
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector <int> t;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            t.push_back(x);
        }
        v.push_back(t);
    }
    v[0].push_back(999);
    v[1].push_back(888);
    v[2].push_back(777);
    vector<int> r={1,2,3,4,5,6,7,8,9,10};
    v.push_back(r);
    vector<int> r2={1,2,3,4,5,6,7,8,9,10};
    v.push_back(r2);
    vector<int> r3={1,2,3,4,5,6,7,8,9,10};
    v.push_back(r3);
    for(int i=0;i<v.size();i++){
        printVector2(v[i]);
    }
    return 0;
}
