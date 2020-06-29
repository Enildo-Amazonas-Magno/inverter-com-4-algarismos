#include <stdio.h>
int main()
{
    int readNumber,writeNumber;
    scanf("%d", &readNumber);
    writeNumber=(readNumber/1000)+
    
    ((readNumber/100)-((readNumber/1000)*10))*10 
    
    + ((readNumber/10)-((readNumber/1000)*100) - (((readNumber/100)-((readNumber/1000)*10))*10)) *100
    
    +( ((readNumber)-((readNumber/1000)*1000))
    -(((readNumber/100)-((readNumber/1000)*10))*100)
    -(((readNumber/10)-((readNumber/1000)*100) - (((readNumber/100)-((readNumber/1000)*10))*10))*10)
    )*1000;
    printf("%d", writeNumber);
}