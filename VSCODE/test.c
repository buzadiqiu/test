#include<stdio.h>
#include<string.h>
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//      a++;
//     printf("2222uuu我很好\n");
//     printf("%d",a);
//     getchar();
//     return 0;
// }

     //二维数组的打印 利用之指针
// void print(int (*p)[4],int a,int b)
// {
//     int i=0;
//     int j=0;
//     for(i=0;i<a;i++)
//     {
//         for(j=0;j<b;j++)
//         {
//             printf("%d ",*(*(p+i)+j));
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     print(arr,3,4);
//     return 0;
// }

             //计算器 函数指针数组的使用
//常规实现
// void menu()
// {
//     printf("#################\n");
//     printf("######1.add######\n");
//     printf("######2.sub######\n");
//     printf("######3.mul######\n");
//     printf("######4.div######\n");
//     printf("######0.exit#####\n");
//     printf("#################\n");
// }
// int add(int a,int b)
// {
//     return a+b;
// }
// int sub(int a,int b)
// {
//     return a-b;
// }
// int mul(int a,int b)
// {
//     return a*b;
// }
// int div(int a,int b)
// {
//     return a/b;
// }

// void test()
// {
//     int input=0;
//     do
//     {
//         int a=0;
//         int b=0;
//         int ret=0;
//         printf("\n");
//         menu();
//         printf("选择:");
//         scanf("%d",&input);
//         if(input>0&&input<5)
//         {
//             printf("输入两个数字:");
//             scanf("%d%d",&a,&b);
//         }
//         switch(input)
//         {
//             case 0:
//                 printf("退出\n");
//                 break;
//             case 1:
//             {
//                 ret=add(a,b);
//                 break;
//             }
//             case 2:
//             {
//                 ret=sub(a,b);
//                 break;
//             }
//             case 3:
//             {
//                 ret=mul(a,b);
//                 break;
//             }
//             case 4:
//             {
//                 ret=div(a,b);
//                 break;
//             }   
//             default:
//             {
//                 printf("重新输入\n");
//                 break;
//             }
//         }
//         while(ret!=0)
//         printf("%d\n",ret);
//     } while(input);
// }
// int main()
// {
//     test();
//     return 0;
// }

//用函数指针数组管理函数
// void menu()
// {
//     printf("#################\n");
//     printf("######1.add######\n");
//     printf("######2.sub######\n");
//     printf("######3.mul######\n");
//     printf("######4.div######\n");
//     printf("######0.exit#####\n");
//     printf("#################\n");
// }
// int add(int a,int b)
// {
//     return a+b;
// }
// int sub(int a,int b)
// {
//     return a-b;
// }
// int mul(int a,int b)
// {
//     return a*b;
// }
// int div(int a,int b)
// {
//     return a/b;
// }
// void test()
// {
//     int input=0;
//     do
//     {
//         int a=0;
//         int b=0;
//         int ret=0;
//         int (*parr[5])(int,int)={NULL,add,sub,mul,div};//函数指针数组  又称转移表
//         menu();
//         printf("选择功能:");
//         scanf("%d",&input);
//         if(input<5)
//         {
//             if(input!=0)
//             {
//                 printf("输入两个数:");
//                 scanf("%d%d",&a,&b);
//                 ret=(parr[input])(a,b);//访问函数指针数组
//                 printf("%d\n",ret);
//             }
//             else
//             {
//                 printf("退出");
//                 break;
//             }
//         }
//         else
//         {
//             printf("重新输入:\n");
//         }
//     } while(input);
// }
// int main()
// {
//     test();
//     return 0;
// }

// 存放整形的数组         int  arr[10]={};
// 指向整形数组的指针     int (*p)[10]=&arr;

// 存放整形指针的数组     int* arr[10]={};
// 指向整形指针数组的指针 int* (*P)[10]=&arr;

// 函数指针              void (*p)(int,int)=add;
// 存放函数指针的数组     void (*parr[10])(int,int)={};
// 指向函数指针数组的指针 void (*(*P)[10])(int,int)=&parr;

//利用回调函数实现
// void menu()
// {
//     printf("#################\n");
//     printf("######1.add######\n");
//     printf("######2.sub######\n");
//     printf("######3.mul######\n");
//     printf("######4.div######\n");
//     printf("######0.exit#####\n");
//     printf("#################\n");
// }
// int add(int a,int b)
// {
//     return a+b;
// }
// int sub(int a,int b)
// {
//     return a-b;
// }
// int mul(int a,int b)
// {
//     return a*b;
// }
// int div(int a,int b)
// {
//     return a/b;
// }
// int Fun(int (*funp)(int,int))//函数指针接收
// {
//     int a=0;
//     int b=0;
//     printf("输入两个数:");
//     scanf("%d%d",&a,&b);
//     return funp(a,b);

// }
// void test()
// {
//     int input=0;
//     int ret=0;
//     do
//     {
//         menu();
//         printf("选择:");
//         scanf("%d",&input);
//         switch(input)
//         {
//             case 0:
//                 printf("退出\n");
//                 break;
//             case 1:
//             {
//                 ret=Fun(add);//回调函数 传的参数为函数
//                 break;
//             }
//             case 2:
//             {
//                 ret=Fun(sub);
//                 break;
//             }
//             case 3:
//             {
//                 ret=Fun(mul);
//                 break;
//             }
//             case 4:
//             {
//                 ret=Fun(div);
//                 break;
//             }   
//             default:
//             {
//                 printf("重新输入\n");
//                 break;
//             }
//         }
//         if(input>0&&input<4)
//         printf("%d\n",ret);
//     } while(input);
// }
// int main()
// {
//     test();
//     return 0;
// }

          //strlen的实现
// int mystrlen(char str[])
// {
//     int i=0;
//     int count=0;
//     while(str[i]!='\0')
//     {
//         count++;
//         i++;
//     }
//     return count;
// }
// int mystrlen(char* p)
// {
//     char* p0=p;
//     while(*p)
//     p++;
//     return p-p0;
// }
// int main()
// {
//     char str[]="advbg";
//     printf("%d",mystrlen(str));
//     return 0;
// }

                      //冒泡排序
//传数组名 用数组接收
void mysort(int arr[],int sz)
{
    int i=0;
    int j=0;
    int temp=0;
    for(i=0;i<sz-1;i++)//趟数
    {
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])  
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
} 
void print(int arr[],int sz)
{
    for(int i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[10]={2,1,3,7,6,0,8,4,9,5,};
    int sz=sizeof(arr)/sizeof(arr[0]);
    mysort(arr,sz);
    print(arr,sz);
    return 0;
}

//传数组名 用指针接收
// void mysort(int* p)
// {
//     int i=0;
//     int j=0;
//     int temp=0;
//     for(i=0;i<10;i++)
//     {
//         for(j=i+1;j<10;j++)
//         {
//             if(*(p+i)>*(p+j))
//             {
//                 temp=*(p+i);
//                 *(p+i)=*(p+j);
//                 *(p+j)=temp;
//             }
//         }
//     }
// }
// void print(int* p)
// {
//     for(int i=0;i<10;i++)
//     {
//         printf("%d ",*(p+i));
//     }
// }
// int main()
// {
//     int arr[10]={2,1,3,7,6,0,8,4,9,5,};
//     mysort(arr);
//     print(arr);
//     return 0;
// }