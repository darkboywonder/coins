#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float m;
    float c;
    float l;
    int i = 0;
  
    // Gets amount of change left from the user
    do
    {
        printf("Hi, how much change is owed: ");
        m = GetFloat();
    } 
    while( m <= 0 );
    
    // converts money into cent form, rounds the number and stores value as int i
    c = ( m * 100 );
    l = roundl( c );
    i = ( l + 0 );
    
    //Finding what's left of value i with quarters
    int quarters = 0;
    while( i >= 25 ) 
    {
        quarters = quarters + 1;
        i = ( i - 25); 
    }
    
    //Finding what's left of value i with dimes 
    int dimes = 0; 
    while( i < 25 && i >= 10 ) 
    {
       dimes = dimes + 1;
       i = ( i - 10 );
    }
    
    //Finding what's left of value i with nickles
    int nickles = 0;
    while( i < 10 && i >= 5 ) 
    {
       nickles = nickles + 1;
       i = ( i - 5 );
    }
    
    //Finding what's left of value i with pennies
    int pennies = 0;
    while( i < 5 && i > 0 )
    {
       pennies = pennies + 1;
       i = ( i - 1 );
    }
    
    //prints out total to command line
    printf("%d\n", quarters + dimes + nickles + pennies );   
}
