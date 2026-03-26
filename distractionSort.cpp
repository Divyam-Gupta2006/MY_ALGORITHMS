#include <bits/stdc++.h>
#include <chrono>
#include <thread>
using namespace std;

bool isSorted(const vector<int>& a){
    for(int i=0;i+1<a.size();i++) if(a[i]>a[i+1]) return false;
    return true;
}

void print(vector<int> a){
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}

void distractionSort(vector<int>& a){
    int n=a.size();
    while(!isSorted(a)){
        int i=rand()%n;
        int j=rand()%n;
        if(a[i]>a[j]) swap(a[i],a[j]);
        int e=rand()%4;
        if(e==0){
            cout<<"Notification\n";
            this_thread::sleep_for(chrono::milliseconds(700));
        }else if(e==1){
            cout<<"Phone call\n";
            this_thread::sleep_for(chrono::milliseconds(1000));
        }else if(e==2){
            cout<<"Scrolling\n";
            this_thread::sleep_for(chrono::milliseconds(800));
        }
    }
}

int main(){
    srand(time(0));
    vector<int> a={5,3,8,1,2};
    distractionSort(a);
    print(a);
}