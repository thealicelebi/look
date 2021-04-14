 
#include <stdio.h>
int main()
{
    int a;
    printf("kaça kadar saysın : ");
    scanf("%d",&a);
    /*for (int i = 0; i <= a; i++)
    {
         printf("%d",i);
         printf(".sayı :");
         printf("%d \n",i);
        
    }
*/
    while (a!=0)
    {   
        if (a>=100)
        {
            break;
        }
        printf("%d",a);
        printf(".sayı :");
        printf("%d \n",a);
        a++;
        
        
    }
    
   

    return 0;
}