#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
}
void bfs(int n,vector<int>arr[],bool visit[])
{
    queue<int> q;
    q.push(n);
    visit[n]=true;
    while(!q.empty())
    {
    cout<<q.front()<<" ";
    int u=q.front();
    q.pop();
    int i;
    for(i=0;i<arr[u].size();i++)
    {
        if(!visit[arr[u][i]])
        {
            q.push(arr[u][i]);
            visit[arr[u][i]]=true;
        }
    }
    }

}


void dfs(int n,vector<int>arr[],bool visit[])
{
    stack<int> q;
    q.push(n);
    visit[n]=true;
    while(!q.empty())
    {
    cout<<q.top()<<" ";
    int u=q.top();
    q.pop();
    int i;
    for(i=0;i<arr[u].size();i++)
    {
        if(!visit[arr[u][i]])
        {
            q.push(arr[u][i]);
            visit[arr[u][i]]=true;
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
        cout<<"\nenter your choice \n";
        cin>>ch;
    }
}