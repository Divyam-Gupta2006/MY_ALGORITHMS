#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int>& a){
    for(int i=0;i+1<a.size();i++) if(a[i]>a[i+1]) return false;
    return true;
}

void print(vector<int> a){
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}

void egoSort(vector<int>& a){
    if(!isSorted(a)) cout<<"Array is fine. You're overthinking.\n";
}

int main(){
    vector<int> a={5,3,8,1,2};
    egoSort(a);
    print(a);
}