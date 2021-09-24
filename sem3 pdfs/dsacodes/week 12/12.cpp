#include<bits/stdc++.h>
using namespace std;
void add_edge(vector <int> arr[],int a,int b)
{
    arr[a].push_back(b);
}
void bfs(int n,vector <int> arr[],bool visit[]){
    queue <int>q;
    q.push(n);
    visit[n]=true;
    while(!q.empty()){
    int u=q.front();
    cout<<u<<" ";
    q.pop();
//loop for traverse
    for(int i=0;i<arr[u].size();i++){
      if(!visit[arr[u][i]]){
        q.push(arr[u][i]);
        visit[arr[u][i]]=true;
      }
    }
 }
}
void dfs(int s,vector<int>adj[],bool visit[]){
  stack<int>stk;//stack in STL
  stk.push(s);
  visit[s]=true;
  while(!stk.empty()){
    int u=stk.top();
    cout<<u<<" ";
    stk.pop();
//loop for traverse
    for(int i=0;i<adj[u].size();i++){
      if(!visit[adj[u][i]]){
        stk.push(adj[u][i]);
        visit[adj[u][i]]=true;
      }
    }
  }
}
int main(){
    
    int n,i,ch,a,b;
    cout<<"no of edges\n";
    cin>>n;
    vector <int> arr[n];
    bool visit[n];
    for(i=0;i<n;i++)
    visit[i]=false;
    cout<<"enter your choice \n1.add an edge\t2.bfs traversal\t3.dfs traversal\n";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
            case 0:exit(1);

            case 1:
                    cout<<"data a,b\n";
                    cin>>a>>b;
                   add_edge(arr,a,b);
                   break;
            case 2:for(i=0;i<n;i++)
                    visit[i]=false;
                    cout<<"edge choice\n";
                    cin>>ch;
                    bfs(ch,arr,visit);
                    break;
            case 3:for(i=0;i<n;i++)
                    visit[i]=false;
                    cout<<"edge choice\n";
                    cin>>ch;
                    dfs(ch,arr,visit);
                    break;
            default:cout<<"enter proper choice\n";
        }
        cout<<"enter your choice\n";
        cin>>ch;
    }
}