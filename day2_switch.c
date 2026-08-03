//switch_case 成绩评估练习
#include<stdio.h>
/*#include<stdlib.h>*/

int main()
{
int score;
printf("输入1-4的等级:\n");
scanf("%d",&score);
switch (score)
{
case 4:
   printf("优");
    break;

case 3:
   printf("良");
    break;

case 2:
    printf("中");
    break;

case 1:
   printf("差");
    break;

default:
    printf("???");
    break;
}
/*system("pause");  // 程序会停在这里，直到你按任意键
return 0;*/
}