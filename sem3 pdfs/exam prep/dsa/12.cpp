//dfs
//bfs
#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> arr[],int a,int b)
{
    arr[a].push_back(b);
    cout<<a<<" "<<b<<" "<<arr[a][b];
}
void dfs(vector<int> arr[],int n,int visit[])
{
    stack<int> s;
    s.push(n);
    visit[n]=1;
    while(!s.empty())
    {

        int temp=s.top();
        cout<<temp;
        s.pop();
        int i;
        for(i=0;i<arr[temp].size();i++)
        {
            if(!visit[arr[temp][i]])
            {
                s.push(arr[temp][i]);
                visit[arr[temp][i]]=1;

            }
        }

    }
}
void bfs(vector<int> arr[],int n,int visit[])
{
    cout<<"bfs\n";
    queue<int> q;
    q.push(n);
    visit[n]=1;
    while(!q.empty())
    {
        int temp=q.front();
        cout<<temp;
        q.pop();
        int i;
        for(i=0;i<arr[temp].size();i++)
        {
            if(!visit[arr[temp][i]])
            {
                visit[arr[temp][i]]=1;
                q.push(arr[temp][i]);
            }
        }
    }
    
}
int main(){
    
    int visit[4]={0},a,b;
    vector<int> arr[4];
    cout<<"add edge\n";
    addedge(arr,0,1);
    cout<<"add edge\n";
    addedge(arr,0,2);
    cout<<"add edge\n";
    addedge(arr,1,2);
    cout<<"add edge\n";
    addedge(arr,2,0);
    cout<<"add edge\n";
    addedge(arr,2,3);
    cout<<"add edge\n";
    addedge(arr,3,3);
    cout<<"dfs"<<endl;
    dfs(arr,1,visit);
    int i;
    for(i=0;i<4;i++)
    visit[i]=0;
    cout<<"bfs"<<endl;
    bfs(arr,2,visit);
}