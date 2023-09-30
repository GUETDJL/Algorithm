// 动态循环链表，分配内存的问题
#include<bits/stdc++.h>
struct node{
    int data;
    node *next;
};
#include<stdio.h>
int main(){
    int n , m;scanf("%d %d",&n,&m);
    node*head ,*p,*now,*prev;
    head = new node;
    head->data = 1;
    head->next = NULL;
    //分配第一个节点，数据安置成1

    now = head; //现在的now是头节点
    for(int i =2;i<=n;i++)
    {
        p=new node ;
        p->data=i;
        p->next = NULL;
        now->next = p;
        now = p;
        
    }
    //建立链表
   
    now->next = head;
    //首尾相连

    //从第一个数开始
    now = head;
    prev = head;
    //printf("ok");
    while ((n--)>1)
    {
        for(int i = 1;i<m;i++)
        {
            prev = now;
            now = now->next;
        }
        //找到下一个链表的位置
        // pre->now->next,
        //就是print完成以后就把prev和next连接到一起
        printf("%d ",now->data);
        prev->next = now ->next;
        delete now;//同时把now现在的节点删除
        now = prev->next;
        //printf("hello\n");
        /* code */
    }
    //剩下最后一个节点的时候
    printf("%d",now->data);
    delete now;
    return 0;
    

    // printf("hello world");
}