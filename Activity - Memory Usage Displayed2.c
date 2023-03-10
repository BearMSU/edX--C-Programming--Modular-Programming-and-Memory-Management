#include <stdio.h>
 
int main(void){
    char c;
    int num;
    int spacePer;
    int memory;
    int mega, kilo, byte;
    
    scanf("%c", &c);
    scanf("%d", &num);
    
    if (c=='c') spacePer = sizeof(char);
    else if (c=='s') spacePer = sizeof(short);
    else if (c=='i') spacePer = sizeof(int);
    else spacePer = sizeof(double);
    
    memory = spacePer*num;
    mega = memory/1000000;
    kilo = (memory-mega*1000000)/1000;
    byte = memory-mega*1000000-kilo*1000;
    
    if (mega>0){
        printf("%d MB and %d KB and %d B", mega, kilo, byte);
    } else if (kilo>0){
        printf("%d KB and %d B", kilo, byte);
    } else{ 
        printf("%d B", byte);
    }
        
    return 0;
}
