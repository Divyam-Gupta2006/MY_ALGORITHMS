#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a){
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}

void overengineeringSort(vector<int>& a){
    vector<vector<int>> g(a.size());
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size();j++){
            if(i!=j) g[i].push_back(j);
        }
    }
    priority_queue<int> pq;
    for(int x:a) pq.push(x);
    while(!pq.empty()) pq.pop();
    sort(a.begin(),a.end());
}

int main(){
    vector<int> a={5,3,8,1,2};
    overengineeringSort(a);
    print(a);
}