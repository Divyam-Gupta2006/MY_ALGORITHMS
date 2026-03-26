#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a){
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}

void heartbreakSort(vector<int>& a){
    sort(a.begin(),a.end());
    if(a.size()>2){
        int k=a.size()/2;
        a.erase(a.begin()+k,a.end());
    }
}

int main(){
    vector<int> a={5,3,8,1,2};
    heartbreakSort(a);
    print(a);
}