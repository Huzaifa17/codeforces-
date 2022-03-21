#include<bits/stdc++.h>
using namespace std;
int level[2001]={0};

void bfs(list<int> graph[],int n)
{
    for(int i=1;i<=n;++i)
    {
        list<int> q;
        q.push_back(i);
        while(!q.empty())
        {
            int node=q.front();
            q.pop_front();
            for(auto& it: graph[node])
            {
                level[it]=level[node]+1;
                q.push_back(it);
            }
        }
    }
    return ;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j,k,m,t;
    cin>>n;
    list<int> graph[n+1];
    for ( i = 1; i <=n ; ++i)
    {
        /* code */
        cin>>k;
        if(k==-1)
        {
            continue;
        }
        graph[k].push_back(i);
    }
    int max=-1;
    bfs(graph,n);
    for(i=1;i<=n;++i)
    {
        if(level[i]>max)
        {
            max=level[i];
        }
    }
    cout<<max+1<<endl;
    return 0;
}
