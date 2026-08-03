//判断语句IF的嵌套，分段函数
#include<stdio.h>
int main()
{int x,f;
printf("请输入自变量x");
scanf("%d",&x);
    if (x<0)
    {f=-1;
        
    }
    else if (x==0)
    {f=0;
        
    }
    else 
    {f=2*x;
        
    }
printf("函数值f(%d)为%d",x,f);


}












