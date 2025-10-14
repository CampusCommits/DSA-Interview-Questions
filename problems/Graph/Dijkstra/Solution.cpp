#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pp;
vector<list<pp>> graph;

vector<int> dijkstra(int src){
    vector<bool> vis(graph.size()+1,0);
    vector<int> dis(graph.size()+1,1e9);
    dis[src]=0;
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    pq.push({0,src});
    while(!pq.empty()){
        auto [currDist,currNode]=pq.top();
        pq.pop();
        if (vis[currNode]) continue;
        vis[currNode]=true;
        if(vis[currNode]) continue;
        for(auto [weight,node]:graph[currNode]){
            if(!vis[node]&&currDist+weight<dis[node]){
                dis[node]=currDist+weight;
                pq.push({dis[node], node});
            }
        }
    }
    return dis;
}

int main(){
    graph.resize(5,list<pp>());
    graph[0].push_back({1,4});
    graph[0].push_back({2,1});
    graph[1].push_back({3,1});
    graph[2].push_back({1,2});
    graph[2].push_back({3,5});
    graph[3].push_back({4,3});

    vector<int> ans=dijkstra(0);
    for(auto el:ans){
        cout<<el<<" ";
    }
    cout<<endl;
    return 0;
}