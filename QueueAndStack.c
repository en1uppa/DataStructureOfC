//
// Created by 28745 on 4/5/2024.
//
//栈：顺序栈
//#include<stdio.h>
//#include<malloc.h>
//#include<assert.h>
//#include<stdbool.h>
//#define Elemtype int
//#define STACK_INIT_SIZE 8
//typedef struct
//{
//    Elemtype* base;
//    int capacity;
//    int top;
//}SeqStack;
//
////typedef struct
////{
////    PNode first;
////    PNode last;
////
////}SeqStack;
//
//bool IsFull(SeqStack* stack)
//{
//    return stack->top >= stack->capacity;
//}
//
//bool IsEmpty(SeqStack* stack)
//{
//    return stack->top == 0;
//}
//
//void InitStack(SeqStack* stack)
//{
//    stack->base = (Elemtype*)malloc(sizeof(Elemtype)*STACK_INIT_SIZE);
//    assert(stack != NULL);
//    stack->capacity = STACK_INIT_SIZE;
//    stack->top = 0;
//
//}
//
//void push_back(SeqStack* stack, Elemtype x)
//{
//    if(IsFull(stack))
//    {
//        printf("栈已满！，无法添加数据");
//        return;
//    }
//    stack->base[stack->top++] = x;
//}
//
//void show_Stack(SeqStack* stack)
//{
//    if(IsEmpty(stack))
//    {
//        printf("栈为空！，无法打印数据");
//        return;
//    }
//    for(int i = 0; i<stack->top; i++)
//    {
//        printf("%d\n",stack->base[i]);
//    }
//}
//
//int main()
//{
//    SeqStack mystack;
//    InitStack(&mystack);
//
//    for(int i = 1; i<=5; i++)
//    {
//    push_back(&mystack,i);
//    }
//    show_Stack(&mystack);
//}

//队列：链队列
//#include<stdio.h>
//#include<malloc.h>
//#include<assert.h>
//#include<stdbool.h>
//#define Elemtype int
//#define QUEUE_INIT_SIZE 8
//typedef struct
//{
//    Elemtype data;
//    struct Node* next;
//
//}Node,*PNode;
//
//typedef struct
//{
//    PNode first;
//    PNode last;
//    int size;
//}LinkQueue;

//bool IsFull(LinkQueue * queue)
//{
//    return queue->size > 0;
//}

//bool IsEmpty(LinkQueue * queue)
//{
//    return queue->size == 0;
//}
//
//void InitStack(LinkQueue * queue)
//{
//    Node*s = (Node*)malloc(sizeof(Node));
//    assert(s != NULL);
//    queue->first = queue->last = s;
//    queue->first->next = queue->last->next = NULL;
//    queue->size = 0;
//
//}
//
//void push_back(LinkQueue * queue, Elemtype x)
//{
//    Node *s = (Node*)malloc(sizeof(Node));
//    assert(s != NULL);
//    s->data = x;
//    s->next = NULL;
//    queue->last->next = s;
//    queue->last = s;
//    queue->size++;
//}
//
//void show_Stack(LinkQueue * queue)
//{
//    Node*s = (Node*)malloc(sizeof(Node));
//    assert(s != NULL);
//    s = queue->first->next;
//    if(IsEmpty(queue))
//    {
//        printf("栈为空！，无法打印数据");
//        return;
//    }
//    for(int i = 0; i<queue->size; i++)
//    {
//        printf("%d\n",s->data);
//        s = s->next;
//    }
//}
//
//void pop_front(LinkQueue * queue)
//{
//    if(IsEmpty(queue))
//    {
//        printf("没有数据无法删除\n");
//        return;
//    }
//    Node*s;
//    s = queue->first->next;
//    queue->first->next = s->next;
//    free(s);
//    queue->size--;
//}
//
//int main()
//{
//    LinkQueue myqueue;
//    InitStack(&myqueue);
//
//    for(int i = 1; i<=5; i++)
//    {
//        push_back(&myqueue,i);
//    }
//    show_Stack(&myqueue);
//    pop_front(&myqueue);
//    printf("-----------\n");
//    show_Stack(&myqueue);
//}

//队列：顺序队列 有点问题: QUEUE_INIT_SIZE
//#include<stdio.h>
//#include<malloc.h>
//#include<assert.h>
//#include<stdbool.h>
//#define Elemtype int
//#define QUEUE_INIT_SIZE 8
//typedef struct
//{
//    Elemtype* base;
//    int capacity;
//    int front;
//    int rear;
//}SeqQueue;
//
//
//bool IsEmpty(SeqQueue * queue)
//{
//    return queue->rear == 0;
//}
//
//bool IsFull(SeqQueue * queue)
//{
//    return queue->rear >= QUEUE_INIT_SIZE;
//}
//
//void InitStack(SeqQueue * queue)
//{
//    queue->base = (Elemtype*)malloc(sizeof(Elemtype)*QUEUE_INIT_SIZE);
//    assert(queue->base != NULL);
//    queue->capacity = QUEUE_INIT_SIZE;
//    queue->rear = 0;
//    queue->front = 0;
//}
//
//void push_back(SeqQueue * queue, Elemtype x)
//{
//
//    if(IsFull(queue))
//    {
//        printf("队列已满，无法添加数据");
//        return;
//    }
//    queue->base[queue->rear++] = x;
//}
//
//void show_Queue(SeqQueue * queue)
//{
//    if(IsEmpty(queue))
//    {
//        printf("队列为空！，无法打印数据\n");
//        return;
//    }
//    for(int i = queue->front; i<queue->rear; i++)
//    {
//        printf("%d\n",queue->base[i]);
//    }
//}
//
//void pop_front(SeqQueue * queue)
//{
//    if(IsEmpty(queue))
//    {
//        printf("没有数据无法删除\n");
//        return;
//    }
//
//     queue->front++;
//    queue->capacity--;
//}
//
//int main()
//{
//    SeqQueue myqueue;
//    InitStack(&myqueue);
//
//    for(int i = 1; i<=5; i++)
//    {
//        push_back(&myqueue,i);
//    }
//    show_Queue(&myqueue);
//    pop_front(&myqueue);
//    printf("-----------\n");
//    show_Queue(&myqueue);
//}
