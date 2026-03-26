#include <bits/stdc++.h>
#include <chrono>
#include <thread>
using namespace std;

void print(vector<int> a){
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}

void overthinkSort(vector<int>& a){
    vector<int> b=a;
    sort(b.begin(),b.end());
    int t=0;
    while(t<5){
        cout<<"Considering permutation "<<t+1<<"\n";
        this_thread::sleep_for(chrono::milliseconds(500));
        t++;
    }
    if(rand()%2) a=b;
}

int main(){
    srand(time(0));
    vector<int> a={5,3,8,1,2};
    overthinkSort(a);
    print(a);
}