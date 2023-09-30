# include<bits/stdc++.h>
const int N = 105;
struct node{
    int id;
    int data;
    int preid,nextid;

}nodes[N];
int main()
{
    int n ,m;
    scanf("%d%d",&n,&m);
    nodes[0].nextid =1 ;//初始化第一个节点
    for (int i =1;i<=n;i++) //建立链表
    {
        nodes[i].id =i;
        nodes[i].preid = i-1;
        nodes[i].nextid = i+1;
    }
    nodes[n].nextid = 1;//循环的时候，头指向尾，尾巴指向头
    nodes[1].preid = n;
int now =1;//初始化为1
while ((n--)>1)
{
    for (int i =1,i<m,i++) now = nodes[now].nextid;//数到m的时候停下来
    printf("%d",nodes[now].id);
    int prev = nodes[now].preid,next = nodes[now].nextid;
    nodes[prev].nextid = nodes[now].nextid;//删除now
    nodes[next].preid = nodes[now].predid;//前后连接
    now = next；//新的开始


    /* code */
}
printf("%d",nodes[now].nextid);//打印最后的一个节点，后面的不带空格
return 0;
}


