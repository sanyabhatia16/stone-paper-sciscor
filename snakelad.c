#include<stdio.h>
#include<stdlib.h>
int rd()
{
    int rem;
    A:rem =rand()%7;
    goto A;
    else
    return rem;
}
void chart(int curp,char palyer[4]){
    int i,j,t,c,sft=0, discres,pos1,pos2;
    if (curp==100){
        printf("Congrationtion !!!!\n\n\n player %s wins",palyer);
        scanf("%s");
        exit(0);
    }
    for ( i = 10; i>0; i--)
    {
        t=i-1;
        if((sft %2)==0)
        {
            c=0;
            for (j=10 ;j>=1;j-- )
            discres=(i*j)+(t*c++);
            if (cur)

        }
    }
    


}
