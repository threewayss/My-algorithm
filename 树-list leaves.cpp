#include <iostream>
#include <queue>
using namespace std;
struct treenode{
    int left;
    int right;
}a[10];
void bfs(int u)
{
    if(u==-1) return ;
    queue<int> q;
    q.push(u);
    int l=1,r=1,cnt=1;
    while(q.size()){
        int x=q.front();
        q.pop();
        if(a[x].left!=-1) q.push(a[x].left);
        else l=0;
        if(a[x].right!=-1) q.push(a[x].right);
        else r=0;
        if(!l&&!r&&cnt==1) {
            printf("%d",x);
            cnt++;
        }
        else if(!l&&!r) {
            printf(" %d",x);
            cnt++;
        }
        l=1,r=1;
    }
}
int main()
{
    int n,root=-1;
    cin>>n;
    bool check[10]={0};
    for(int i=0;i<n;i++){
        char cl,cr;
        scanf(" %c %c",&cl,&cr);
        if(cl!='-'){
            a[i].left=cl-'0';
            check[a[i].left]=1;
        }else a[i].left=-1;
        if(cr!='-'){
            a[i].right=cr-'0';
            check[a[i].right]=1;
        }else a[i].right=-1;
    }
    for(int i=0;i<n;i++) if(check[i]==0) root=i;
    bfs(root);
    return 0;
}