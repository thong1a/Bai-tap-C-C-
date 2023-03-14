#include<stdio.h>
#include<stdint.h>
#include<string.h>
typedef union 
{
    struct
    {
        char uid[4];
        char data[8];

    }frame;
    char fr[12];
        
}frame_work;
char* transmit (frame_work *bien,char * uid, char* data)
{
  strcpy(bien->frame.uid,uid);
  strcpy(bien->frame.data,data);
  return bien->fr;
}
int main(int argc, char const *argv[])
{
    frame_work x;
    transmit(&x,(char*)"1234",(char*)"01010101");
    for (int  i = 0; i < 12; i++)
    {
        printf("%c",x.fr[i]);
    }
    
    return 0;
    
}
