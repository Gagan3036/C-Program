#include <stdio.h>

int main()
    {
     int i, j, count;
        
        for(i=100; i<=500; i++)
        {
            count=0;
            for(j=1; j<=i; j++)
            {   if(i%j==0)
                {
                    count=count+1;
                }
            }
            if(count==2)
                {
                    printf("%d\t",i);
                }
        }
        return 0;
    }
    
