#include<bits/stdc++.h>
using namespace std;


void bfsTraversal(int n, vector<int> adj[]){
  vector<int> vis(n+1,0);
  vis[0] =1;
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    int node = q.front();
    q.pop();
    cout<<node<<" ";
    for(auto it: adj[node]){
      if(!vis[it]){
        vis[it] = 1;
        q.push(it);
      }
    }
  }
}



void dfsTraversal(int node, vector<int> adj[], vector<int> &vis){
  cout<<node<<" ";
  vis[node] = 1;
  for(auto it: adj[node]){
    if(!vis[it]){
      dfsTraversal(it,adj,vis);
    }
  }
}


bool isCyclic(int node, vector<int> adj[], vector<int> &vis, int parent){
  vis[node] = 1;
  for(auto it: adj[node]){
    if(!vis[it]){
      if(isCyclic(it,adj,vis,node)){
        return true;
      }
    }else if(it!=parent){
      return true;
    }
  }
  return false;
}


bool isCyclicDFSDirected(int node, vector<int> adj[], vector<int> &vis, vector<int> &dfsVis){
  vis[node] = 1;
  dfsVis[node] = 1;
  for(auto it: adj[node]){
    if(!vis[it]){
      if(isCyclicDFSDirected(it,adj,vis,dfsVis)){
        return true;
      }
    }else if(dfsVis[it]){
      return true;
    }
  }
  dfsVis[node] = 0;
  return false;
}

int main(){

  int n,m;
  cin>>n>>m;

  vector<int> adj[n+1];

  //taking input of edges
  for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);

    //remove this line in case of directed graph
    adj[v].push_back(u);
  }
  
  
// vector<int> vis(n+1,0);
  //dfs traversal
bfsTraversal(0,adj);

//detect cycle in undirected graph
vector<int> vis(n+1,0);
for(int i=0;i<n;i++){
  if(!vis[i]){
    if(isCyclic(i,adj,vis,-1)){
      cout<<"Cycle is present";
      return 0;
    }
  }
}
cout<<"Cycle is not present";


// cout<<endl;
//   //print adjacency list
//   for(int i=1;i<=n;i++){
//     cout<<i<<"->";
//     for(int j=0;j<adj[i].size();j++){
//       cout<<adj[i][j]<<" ";
//     }
//     cout<<endl;
//   }
}