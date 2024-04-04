////
//// Created by enjuppa on 3/23/2024.
////
//#include<stdio.h>
//#include<malloc.h>
//#include<assert.h>
//
//typedef int ElemType;
//#define SEQLIST_INIT_SIZE 8
//typedef struct
//{
//    ElemType *base;
//    int capacity;
//    int size;
//}SeqList;
//
//void InitSeqList(SeqList* list)
//{
//    list->base = (ElemType*)malloc(sizeof(ElemType)*SEQLIST_INIT_SIZE);
//    assert(list->base != NULL);
//    list->capacity = SEQLIST_INIT_SIZE;
//    list->size = 0;
//}
//
//void push_back(SeqList *list,ElemType x)
//{
//    if(list->size == list->capacity)
//    {
//        printf("顺序表已满，无法插入数据\n");
//        return;
//    }
//    list->base[list->size] = x;
//    list->size++;
//}
//
//void show_List(SeqList list)
//{
//    if(list.size == 0)
//    {
//        printf("无数据\n");
//    }
//    for (int i = 0; i < list.size; ++i) {
//        if(i<list.size-1) {
//            printf("%d->", list.base[i]);
//        }
//        else
//        printf("%d",list.base[i]);
//    }
//    printf("\n");
//}
//
//int List_length(SeqList list)
//{
//    printf("%d",list.size) ;
//}
//
//void List_If_Empty(SeqList list)
//{
//    if(list.size != 0)
//    {
//        printf("顺序表不为空");
//    }
//    else
//        printf("顺序表为空");
//}
//
//void insert_data(SeqList *list,ElemType x,ElemType pos)
//{
//    if(pos > list->capacity || pos >= list->size)
//    {
//        printf("插入数据位无效\n");
//        return;
//    }
//    if(pos == list->size + 1)
//    {
//        list->base[list->size] = x;
//        list->size++;
//    }
//    else {
//        for (int i = list->size; i >= pos ; i--) {
//            list->base[i] = list->base[i - 1];
//        }
//        list->base[pos - 1] = x;
//        list->size++;
//    }
//
//}
//
//void show_data(SeqList list,ElemType pos)
//{
//    if(pos <= list.size)
//    {
//        printf("位置为%d的数值为%d\n",pos,list.base[pos-1]);
//
//    }
//    else
//        printf("无法打印数据");
//}
//
//int  data_index(SeqList list, ElemType x)
//{
//    int i;
//    for (i = 0; i < list.size; ++i) {
//        if(x == list.base[i])
//        {
//            printf("%d是%d的下标",i,list.base[i]);
//            break;
//        }
//
//    }
//    if(i>=list.size)
//    {
//        printf("找不到此数据下标\n");
//    }
//}
//
//void delete_data(SeqList *list, ElemType pos)
//{
//    if(pos > list->capacity || pos > list->size)
//    {
//        printf("无法删除数据\n");
//        return;
//    }
//    if(pos == list->size )
//    {
//        list->size--;
//    }
//    else {
//        for (int i = pos - 1 ; i < list->size ; i++) {
//            list->base[i] = list->base[i+1];
//        }
//        list->size--;
//    }
//}
//
//void clear_List(SeqList *list)
//{
//    list->size = 0;
//    list->capacity=0;
//    free(list->base);
//    list->base = NULL;
//}
//
//int main()
//{
//    setbuf(stdout,NULL);
//    SeqList List;
//    InitSeqList(&List);
//    int select = 1;
//    int pos,x;
//    ElemType Item;
//    while(select)
//    {
//        printf("1.push_back 2.insert_data\n");
//        printf("3.show_List 4.delete_data\n");
//        printf("5.show_data 6.free_List\n");
//        printf("7.data_index 0.exit\n");
//        scanf("%d",&select);
//        if(select == 0)
//            break;
//        switch(select)
//        {
//            case 1:
//                printf("输入-1停止插入数据\n");
//                while(scanf("%d",&Item),Item != -1)
//                    push_back(&List,Item);
//            break;
//            case 2:
//                printf("请输入要插入的数据及位置");
//                scanf("%d %d",&x,&pos);
//                insert_data(&List,x,pos);
//                break;
//            case 3:
//                show_List(List);
//                break;
//            case 4:
//                printf("请输入要删除的数据位置:");
//                scanf("%d",&pos);
//                delete_data(&List,pos);
//                break;
//            case 5:
//                scanf("%d",&pos);
//                show_data(List,pos);
//                break;
//            case 6:
//                clear_List(&List);
//                break;
//            case 7:
//                scanf("%d",&x);
//                data_index(List,x);
//                break;
//
//
//            default :
//                printf("输入错误，请重新输入\n");
//                break;
//
//
//        }
//
//
//    }
//
//    show_List(List);
//    List_length(List);
//    List_If_Empty(List);
//
//
//}


//#include<stdio.h>
//#include<malloc.h>
//#include<assert.h>
//#define SEQLIST_INI_SIZE 5
//typedef int ElemType;
//typedef struct
//{
//    int size;
//    int capacity;
//    ElemType * base;
//}SqList;
//
//void InitSqlist(SqList *L)
//{
//    L->base = (ElemType*)malloc(sizeof(ElemType)*SEQLIST_INI_SIZE);
//    assert(L->base != NULL);
//    L->size = 0;
//    L->capacity = SEQLIST_INI_SIZE;
//
//}
//
//int Judge_overflow(SqList L)
//{
//    if(L.size >= L.capacity)
//    {
//        printf("无法继续加入数据\n");
//        return 0;
//    }
//    else
//        return 1;
//}
//
//void addDate(SqList *L)
//{
//    ElemType Item;
//    Judge_overflow(*L);
//    printf("输入-1停止加入数据\n");
//    while(scanf("%d",&Item),Item != -1)
//    {
//        L->base[L->size] = Item;
//        L->size++;
//       if(Judge_overflow(*L) == 0)
//           break;
//    }
//}
//
//void show_List(SqList L)
//{
//    if(L.size == 0)
//    {
//        printf("无数据\n");
//    }
//    for (int i = 0; i < L.size; ++i) {
//        if(i<L.size-1) {
//            printf("%d->", L.base[i]);
//        }
//        else
//        printf("%d",L.base[i]);
//    }
//    printf("\n");
//}
//
//
//void deleteX(SqList*L,int x)
//{
//    int k = 0;
//    for (int i = 0; i < SEQLIST_INI_SIZE; ++i) {
//        if(x != L->base[i])
//        {
//            L->base[k] = L->base[i];
//               k++;
//        }
//    }
//       L->size=k;
//}
//
//int main()
//{
//    setbuf(stdout,NULL);
//    SqList l;
//    InitSqlist(&l);
//    addDate(&l);
//    show_List(l);
//    int x;
//    printf("输入要删除的元素\n");
//    scanf("%d",&x);
//    deleteX(&l,x);
//    show_List(l);
//}