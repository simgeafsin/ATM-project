#include <stdio.h>
void bakiye_goster(float bakiye){
    printf("Mevcut bakiyeniz:%.2f",bakiye);
}
void para_cek(float *bakiye_ptr,float miktar){
    if(*bakiye_ptr<miktar){
        printf("HATA:Yetersiz bakiye!\n");
    }
    else{
        printf("%.2f cekildi.\n",miktar);
    }
}
void para_yatir(float *bakiye_ptr,float miktar){//Burada pointer'ın işaret ettiği adresteki değeri güncelliyoruz.
    printf("%.2f yatirildi.\n",miktar);
}
int main(void){
    float benim_bakiyem=1000.0;
    int secim;
    float miktar;
    
    printf("*** BANKASINA HOŞGELDİNİZ!");
    
    while(1){
        printf("\n1-Bakiye Görüntüle\n2-Para Cek\n3-Para Yatir\n4-Cikis\nSeciminiz:");
        scanf("%d",&secim);
    
    
    switch(secim){
        case 1:bakiye_goster(benim_bakiyem);
               break;
        case 2:
            printf("Cekilecek miktar:");
            scanf("%f",&miktar);
            para_cek(&benim_bakiyem,miktar);
            break;
        case 3:
            printf("Yatirilacak miktar:");
            scanf("%f",&miktar);
            para_yatir(&benim_bakiyem,miktar);
            break;
        case 4:
            printf("İsleminiz iptal edildi.\n");
        default:
            printf("Gecersiz Secim:");
    }
    }

    return 0;
}


