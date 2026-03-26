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

void rageSort(vector<int>& a){
    int n=a.size();
    while(!isSorted(a)){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                for(int j=0;j<3;j++){
                    int x=rand()%n;
                    int y=rand()%n;
                    swap(a[x],a[y]);
                }
            }
        }
    }
}

int main(){
    srand(time(0));
    vector<int> a={5,3,8,1,2};
    rageSort(a);
    print(a);
}