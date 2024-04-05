//#include <stdio.h>
//
//#include<stdlib.h>
//typedef int ElemType;
//#define MAX 100
//typedef struct{
//	ElemType elem[MAX];
//	int length;
//}SqList;
//void sort(SqList *L)
//{
//	int i=0,j=L->length-1,temp;
//	while(i<j)
//	{
//		while(i<j&&L->elem[j]>0)
//		{
//			j--;//TODO
//		}
//		while(i<j&&L->elem[i]<0)
//		{
//			i++;//TODO
//		}
//		if(i<j)
//		{
//			temp=L->elem[j];
//			L->elem[j]=L->elem[i];
//			L->elem[i]=temp;//TODO
//		}
//	}
//}
//int main()
//{
//    setbuf(stdout,0);
//	SqList L;
//	printf("请输入数据的个数：");
//    scanf("%d",&L.length);
//    printf("请输入数据：");
//    for(int i=0;i<L.length;i++){
//		scanf("%d",&L.elem[i]);
//	}
//    sort(&L);
//    printf("排序后的数据为：");
//    for(int i=0;i<L.length;i++){
//		printf("%d ",L.elem[i]);
//	}
//	return 0;
//}

//链表：单项
//#include<stdio.h>
//#include<assert.h>
//#include<malloc.h>
//
//#define ElemType int
//
//typedef struct
//{
//    ElemType data;
//    struct Node *next;
//}Node, *PNode;
//
//typedef struct
//{
//    PNode first;
//    PNode last;
//    size_t size;
//}List;
//
//
//void InitList(List *list)
//{
//    list->first = list->last = (Node*)malloc(sizeof(Node));
//    assert(list->first != NULL);
//    list->first->next = NULL;
//    list->size = 0;
//}
//
//void CreateList(List *list,ElemType x)
//{
//    if(list->size == 0)
//    {
//        Node*s = (Node *)malloc(sizeof(Node));
//        assert(s != NULL);
//        s->data = x;
//        s->next = NULL;
//        list->first->next = s;
//        list->size++;
//        list->last = s;
//    }
//    else
//    {
//        Node *s = (Node *) malloc(sizeof(Node));
//        assert(s != NULL);
//        s->data = x;
//        s->next = NULL;
//        list->last->next = s;
//        list->last = s;
//        list->size++;
//    }
//}
//
//void ShowList(List list)
//{
//    Node *p = list.first->next;
//    while(p != NULL) {
//        if (p->next != NULL)
//            printf("%d->", p->data);
//        else
//            printf("%d", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//void pop(List* list,ElemType x)
//{
//    Node* s = list->first->next;
//    if(s == NULL || x > list->size)
//    {
//        printf("无法删除");
//        return;
//    }
//    else if(list->size == 1)
//    {
//        s = NULL;
//        list->last->next = NULL;
//        list->size--;
//        return;
//    }
//    else if(x-1==0)
//    {
//        Node * p = list->first;
//        p->next = s->next;
//        list->size--;
//        return;
//    }
//
//
//    for(int  i = 1; i < list->size; i++)
//    {
//        if(i == x-1)
//        {
//            Node*p = s->next;
//            s->next = p->next;
//            if(x == list->size)
//            {
//                list->last = s;
//                s->next = NULL;
//            }
//            list->size--;
//        }
//        s = s->next;
//    }
//
//
//}
//
//void insert_index(List* list,int x,int p)
//{
//    Node* s = list->first->next;
//    if(list->size + 1 < p) {
//        printf("无法插入");
//        return;
//    }
//    else if(p == 1 + list->size)
//    {
//        Node* new = (Node*)malloc(sizeof(Node));
//        new->data = x;
//        new->next = NULL;
//        list->last->next = new;
//        list->last = new;
//        list->size++;
//        return;
//    }
//    else
//    {
//        Node *S = list->first;
//        for (int i = 1; i <= p; i++) {
//            if (i == p) {
//                Node *new = (Node *) malloc(sizeof(Node));
//                new->data = x;
//                S->next = new;
////                if(list->size == i)
////                    new->next = NULL;
////                else {
//                    new->next = s;
//               // }
//                list->size++;
//            }
//            S = S->next;
//            s = s->next;
//        }
//    }
//}
//
//int find_pos(List list, ElemType x)
//{
//    if(list.size == 0)
//    {
//        printf("没有数据，无法查询");
//        return -1;
//    }
//    Node*s = (Node*)malloc(sizeof(Node));
//    assert(s != NULL);
//    s = list.first->next;
//    int p = 0;
//    while(s != NULL)
//    {
//        if(x == s->data)
//            return p;
//        p++;
//        s = s->next;
//    }
//    if(s == NULL)
//    {
//    printf("找不到");
//    }
//}
//
//void print_index(List list, int p)
//{
//    if(list.size == 0)
//    {
//        printf("没有数据，无法打印\n");
//        return;
//    }
//    else if(p > list.size)
//    {
//        printf("无法打印数据\n");
//    }
//    else {
//        Node *s = (Node *) malloc(sizeof(Node));
//        assert(s != NULL);
//        s = list.first->next;
//        int i = 1;
//        while (i < p) {
//            s = s->next;
//            i++;
//        }
//        printf("%d\n", s->data);
//    }
//
//}
//
//
//void list_Length(List list)
//{
//     printf("链表长度:%d\n",list.size);
//}
//
//
//void free_List(List *list)
//{
//    Node*s = list->first->next;
//    if(s != NULL)
//    {
//        free(s);
//    }
//    s=NULL;
//
//    list->size = 0;
//
//    free(list->first);
//    list->first = list->last = NULL;
//
//    return;
//}
//
//int increase(List *list)
//{
//    if(list->size == 0)
//    {
//        printf("无数据，无法进行升序判断\n");
//        return -1;
//    }
//
//    int k = 1;
//    Node* s;
//    s = list->first->next;
//    while(s->next != NULL )
//    {
//        int i = s->data;
//        s = s->next;
//        if(i < s->data)
//        {
//            k++;
//            continue;
//        }
//        else
//            break;
//    }
//    if(k==list->size)
//    {
//        return 1;
//    }
//    else
//        return 0;
//}
//
//void sort_List(List *list)
//{
//    int tmp = 0;
//    Node * s = list->first->next;
////    Node * p = list->first->next;
//
//    while(s->next != NULL)
//    {
//        Node *p = s;
//        Node * t = s->next;
//        tmp = s->data;
//        while(t != NULL)
//        {
//            if (t->data < tmp) {
//                tmp = t->data;
//                p = t;
////            p->data = s->data;
////            s->data = tmp;
//            }
//            t = t->next;
//        }
//        p->data = s->data;
//        s->data = tmp;
//       // p = p->next;
//        s = s->next;
//
//    }
//
//}
//
//
//void main()
//{
//    ElemType Item;
//    List mylist;
//    InitList(&mylist);
//    while(scanf("%d",&Item),Item != -1) {
//        CreateList(&mylist, Item);
//    }
//    pop(&mylist,3);
//    printf("%d\n",mylist.size);
//    printf("%d\n",mylist.last->data);
// //1  insert_index(&mylist,1,1);
//   int p = find_pos(mylist,2);
//   printf("%d\n",p);
//   // printf("%d\n",mylist.size);
//   print_index(mylist,2);
//    ShowList(mylist);
//    list_Length(mylist);
//
//     int i = increase(&mylist);
//     if(i == 1)
//     {
//         printf("是升序排序\n");
//     }
//     else if(i == 0)
//     {
//         printf("不是升序排序\n");
//     }
//    sort_List(&mylist);
//    ShowList(mylist);
//    free_List(&mylist);
//
//    return;
//}

//循环链表：单项
//#include<stdio.h>
//#include<malloc.h>
//#include<assert.h>
//#define ElemType int
//typedef struct
//{
// ElemType data;
// struct Node* next;
//}Node, *PNode;
//
//typedef struct
//{
//  PNode first;
//  PNode last;
//  int size;
//}List;
//
//void InitSCList(List* list)
//{
//    Node* s = (Node*)malloc(sizeof(Node));
//    assert(s != NULL);
//    list->first = list->last = s;
//    list->last->next = list->first;
//    list->size = 0;
//}
//
//void push_back(List* list, ElemType x)
//{
//    Node* s = (Node*)malloc(sizeof(Node));
//    assert(s!=NULL);
//    s->data = x;
//    s->next = NULL;
//    list->last->next = s;
//    list->last = s;
//    list->last->next = list->first;
//    list->size++;
//}
//
//void showList(List list)
//{
//    Node*p = list.first->next;
//    while(p->next != list.first)
//    {
//        printf("%d->",p->data);
//        p=p->next;
//    }
//    printf("%d",p->data);
//    printf("\n");
//}
//
//List* combine(List* list1, List* list2)
//{
//
//    list1->last->next = list2->first->next;
//    list2->last->next = list1->first;
//    list1->size = list1->size + list2->size;
//    return list1;
//}
//
//int main()
//{
//    ElemType Item1;
//    ElemType Item2;
//   List mylist;
//   List yourlist;
//    InitSCList(&mylist);
//    InitSCList(&yourlist);
//    while(scanf("%d",&Item1),Item1 != -1)
//    {
//        push_back(&mylist,Item1);
//    }
//    showList(mylist);
//    fflush(stdin);
//    while(scanf("%d",&Item2),Item2 != -1)
//    {
//        push_back(&yourlist,Item2);
//    }
//    showList(yourlist);
//    showList(*combine(&mylist,&yourlist));
//
//}


