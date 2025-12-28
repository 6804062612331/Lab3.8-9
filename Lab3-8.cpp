#include <stdio.h>

int main() {
    int h,m,s,m2;
    scanf("%d:%d:%d",&h,&m,&s);
    
    printf("hour:%d\nminute:%d\nsecond:%d\n",h,m,s);
    
    printf("Next minutes: ");
    scanf("%d",&m2);

    m2 = m+m2;
    if (m2>59){
        m2 = m2-60;
        h +=1;
        printf("hour:%d\nminute:%d\nsecond:%d\n",h,m2,s);
    }
    else{
        printf("hour:%d\nminute:%d\nsecond:%d\n",h,m2,s);
    }

    return 0;
}