#include<bits/stdc++.h>
#define Max 10
using namespace std;
void edge_f(vector <int> arr[],int i,int j)
{
    arr[i].push_back(j);
}
void bfs(vector<int> arr[],int n, bool visit[]){
    queue <int> q;
    q.push(n);
    visit[n]=true;
    while(!q.empty())
    {
        int u=q.front();
        cout<<u<<" ";
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
void dfs(vector <int> arr[],int n,bool visit[])
{
    stack <int> s;
    s.push(n);
    visit[n]=true;
    while(!s.empty())
    {
        int u=s.top();
        cout<<u<<" ";
        s.pop();
        int i;
        for(i=0;i<arr[u].size();i++)
        {
            if(!visit[arr[u][i]])
            {
                s.push(arr[u][i]);
                visit[arr[u][i]]=true;
            }
        }
    }
}
int main(){
    int ch,n,r;
    cout<<"enter number of edges\n";
    cin>>n;
    vector <int> arr[n];
    bool visit[n];
    cout<<"enter your choice\n 1. edge formation \t 2.dfs \t 3. bfs \n";
    cin>>ch;
    while(ch){
        switch (ch)
        {
        case 0:exit(0);
            break;
        case 1:
        cout<<"enter the edges\n";
        int i,j;
        cin>>i>>j;

        edge_f(arr,i,j);
        break;
        case 2:
        cout<<"enter starting node\n";
        cin>> r;
        for(int i=0;i<n;i++)
        {
            visit[i]=false;       
        }
        dfs(arr,r,visit);
        break;
        case 3:
        cout<<"enter starting node\n";
        cin>> r;
        for(int i=0;i<n;i++)
        {
            visit[i]=false;       
        }
        bfs(arr,r,visit);
        break;
        default:
            break;
        }
        cout<<"enter your choice\n 1. edge formation \t 2.dfs \t 3. bfs \n";
        cin>>ch;
    }
}