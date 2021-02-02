#include <stdio.h>
 
int main() {
    while(1){
 
   int A,B,C,D,TotalTime,a,b,c,d;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    if (A==C)
    {
        if (B==D)
        {
            TotalTime=24*60;
        }
        else if (B>D)
        {
            a=0+B;
            b=(23*60)+(60+D);
            TotalTime=b-a;   
        }
        else if (D>B)
        {
            a=0+B;
            b=0+D;
            TotalTime=b-a;   
        }    
    }
    else if (C>A)
    {
       if (B==D)
        {
            TotalTime=(C-A)*60;
        }
        else if (B>D)
        {
            a=(A*60)+B;
            b=((C-1)*60)+(60+D);
            TotalTime=b-a;   
        }
        else if (D>B)
        {
            a=(A*60)+B;
            b=(C*60)+D;
            TotalTime=b-a;   
        } 
    }
    else if (A>C)
    {
        if (B==D)
        {
            a=(A*60)+0;
            b=((24+C)*60)+0;
            TotalTime=b-a; 
        }
        else if (B>D)
        {
            a=(A*60)+B;
            b=((C+23)*60)+(D+60);
            TotalTime=b-a;   
        }
        else if (D>B)
        {
            a=(A*60)+B;
            b=((C+24)*60)+D;
            TotalTime=b-a;   
        }    
    }
    c=TotalTime/60;
    d=TotalTime%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,d);
    }
 
    return 0;
}