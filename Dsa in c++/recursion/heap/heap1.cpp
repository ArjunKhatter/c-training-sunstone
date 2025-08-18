#include <bits/stdc++.h>
using namespace std ;
int main (){
    priority_queue<int>pq;
    pq.push(90);
    pq.push(8);
    pq.push(9);
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }


}
