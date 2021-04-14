#include <stdio.h>
int main()
{
    float v,f,bso;
    printf("vize notunuzu giriniz : ");
    scanf("%f",&v);
    printf("final notunuzu giriniz : ");
    scanf("%f",&f);
    bso=((v/100)*30)+((f/100)*70);
    if (bso>=50)
    {
        printf("%f",bso);
        printf(" ortalama ile geçtiniz TEBRİKLER");

    }
    else
    {
        printf("%f",bso);
        printf(" puan ile Kaldın aptal \n\n\n\n");
    }
    return 0;
}


