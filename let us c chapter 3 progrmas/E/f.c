// Write a program to fill the entire screen with diamond and 
// heart alternatively. The ASCII value for heart is 3 and that of 
// diamond is 4. 

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==0)
            {
                printf("%c",4);
                }
                else
                {
                    printf("%c",3);
                    }
                    }
                printf("\n");
                    }
return 0;
                    
}