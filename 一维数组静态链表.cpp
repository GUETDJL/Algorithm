# include<bits/stdc++.h>
int nodes[150];
int main()
{
    int n,m;
    scanf("%d,%d",&n,&m);
    for(int i = 1;i<=n-1;i++)
    {
        nodes[i]=i+1;
    }
    nodes[n]=1;
    int now =1;prev=1;
    while ((n--)>1)
    {
        for(int i=1;i<m;i++)
        {
            prev = now;
            now = nodes[i];//到下个一节点

        }
        printf("%d",now);
        nodes[prev] = nodes[now];//跳过节点，删除now
        now =nodes[prev];//新的now节点


        /* code */
    }
    printf("%d",now);
    return 0 ;
}