#include <cs50.h>
#include <stdio.h>

int main(void)

{
    printf("How much change is owed?");
    
    float c;
    do
    {
        c = get_float();
    }
    while (c < 0.00);
    
    printf("How much change is owed?\n");
    
    if(c <= 0.00)
    {
        printf("How much change is owed?");
    }
    
    while (c >= 0.25)
    {
        
    }
  
  
  
    printf("Good\n");
    
}