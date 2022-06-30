#include<bits/stdc++.h>
using namespace std;

int main(){
    pair <int,int> p1;
    cout<<"Enter two integer Values\n";
    cin>>p1.first>>p1.second;
    cout<<"Pair you entered is {"<<p1.first<<","<<p1.second<<"}\n";

    pair<int,string> p[10];
    p[0]={1,"one"};
    p[1]={2,"two"};
    p[2]={3,"three"};
    p[3]={4,"four"};
    p[4]={5,"five"};
    p[5]={6,"six"};
    p[6]={7,"seven"};
    p[7]={8,"eight"};
    p[8]={9,"nine"};
    p[9]={10,"ten"};

    for(int i=0;i<10;i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;\

    pair <int,int> a[3];
    a[0]={1,2};
    a[1]={4,5};
    a[2]={7,8};
    swap(a[0],a[2]);
    for(int i=0;i<3;i++)
        cout<<a[i].first<<" "<<a[i].second<<endl;  
    return 0;
}
