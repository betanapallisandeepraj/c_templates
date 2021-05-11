#include <stdio.h>
int main()
{
    int i;
    char s[4],t[4];
    float a=678.98,b;
    char *p;
    char *q;
    p=(char *)&a;
    printf("%.2f\n",a);
    for(i=0;i<4;i++){
        s[i]=*(p+i);
//        printf("%d\t",s[i]);
//        printf("\n");
    }
    for(i=0;i<4;i++){
        t[i]=s[i];
//        printf("%d\t",t[i]);
//        printf("\n");
    }
    q=(char *)&b;
    for(i=0;i<4;i++){
        *(q+i)=t[i];
    }
    printf("%.2f\n",b);
    return 0;
}
/*
Output:
678.98
678.98
*/
