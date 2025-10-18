/*
Name:Ayesha Ilias Shaikh
UIN:251M024
Class: Mechanical
Div: F
*/
#include <stdio.h>
int main() {
    
    int initial;
    int final;
    int add = 0;
    
    printf("\nEnter Initial Number : ");
    scanf("%d",&initial);
    printf("\nEnter Final Number : ");
    scanf("%d",&final);

    for(int i = initial; i<= final; i++)
    {
        if(i%2 != 0)    
        {
            add = add+i;
        }
    }
    printf("\nSum of Odd Number between %d",initial);
    printf(" and %d",final);
    printf(" = %d",add);

    return 0;
}
