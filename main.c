#include<stdio.h>
#include<string.h>
#include<stdint.h>
#include<stdlib.h>
typedef enum
{
    AO= 1<<0,
    QUAN=1<<1,
    GIAY= 1<<2,
    TAT = 1<<3,
    VAY= 1<<4,
    NHAN= 1<<5,
    VONG= 1<<6,
    BATA = 1<<7
} TU_DO ;
uint8_t Thong;
void additem(uint8_t *x,TU_DO y)
{
    *x|=y;
}
void removeitem(uint8_t *x,TU_DO y)
{
    *x&=!y;
}
 void convert(uint8_t Thong, int* bin)
{
    int tam[8];
    for(int i=0;i<8;i++)
    {
        tam[i]=Thong %2;
        Thong =Thong/ 2; 
    }
    for(int i=0;i<8;i++)
    {
       bin[i]= tam[7-i];
    }
}
void checkitem(uint8_t x)
{
    int value[8];
    convert(x,value);
    printf("trong tu do dang co:  ");
    for (int i = 0; i <8; i++)
    {
        if(value[i]==1)
        {
            switch (i)
            {
            case 7:
                printf("\nAO");
                break;
            case 6:
                printf("\nQUAN");
                break;
            case 5:
                printf("\nGIAY");
                break;
            case 4:
                printf("\nTAT");
                break;
            case 3:
                printf("\nVAY");
                break;
            case 2:
                printf("\nNHAN");
                break;
            case 1:
                printf("\nVONG");
                break;
            case 0:
                printf("\nBATA");
                break;        

            default:
                break;
            }
        }
        
    }    
}
int main(int argc, char const *argv[])
{int value[8];
    additem(&Thong,AO|QUAN|GIAY|VONG);
    printf("%d\n",Thong);
    checkitem(Thong);
 //   checkitem(Thong);
  //  convert(Thong,value);
   // int x=5;
    //convert(x,value);

   // removeitem(&Thong,AO|QUAN|GIAY|VONG|BATA|VAY|TAT);
    
   // Thong =Thong/2;
    //printf("%d",Thong);
    //convert(Thong,value);
   // for(int i=0;i<8;i++)
    //printf("%d",value[i]);
    return 0;
}
