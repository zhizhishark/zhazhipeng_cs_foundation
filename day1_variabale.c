//*变量的定义、初始化、赋值、输入输出*
#include<stdio.h>
int main()
{int i=0;//*定义并初始化变量*
int a=10,b=20;//*定义多个变量*
const int C=100;//*定义常量，常量不可以再次赋值,并强调大写*
printf("输入数字：");    
scanf("%d",&i);
    printf("输出为,%d,%d",i,C);
    return 0;

}
//gcc -fexec-charset=GBK day1.c -o day1.exe 
//*因为环境配置问题，msys2默认使用GBK，发现中文出现是乱码*