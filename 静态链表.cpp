// 结构体数组实现单向静态链表
#include<bits/stdc++.h>
const int N = 105;//定义静态链表的长度
struct node
{
    int id,nextid;
    int data;
    /* data */
}nodes[N];//定义静态链表的长度

int main()
{
    int n,m;
    scanf("%d%d ",&n,&m);
    nodes[0].nextid =1;
    for(int i = 1;i<=n;i++)
    {
        nodes[i].id = i;
        nodes[i].nextid =i+1;
    }
    nodes[n].nextid =1;//循环链表
    int now = 1,prev =1;
    while ((n--)>1)
    {
        for(int i = 1;i<m;i++)
        {
            prev = now ;
            now =nodes[now].nextid;
        }
        printf("%d",nodes[now].id);
        // 【1,2,3】1:prev,2:now
        nodes[prev].nextid = nodes[now].nextid;//跳过now,删除now;
        now = nodes[prev].nextid;//新的now

        /* code */
    }
    printf("%d",nodes[now].nextid);//打印最后一个节点
    return 0 ;
    

}