#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



hosgeldinizfonksiyonu(){
	printf("*** BANKAMATIGE HOSGELDINIZ ***\n===============================\n Bankamiza kayitli iseniz lutfen giris yapiniz.\n Kayitli degilseniz lutfen bankamiza kayit olunuz.\n");
}
int secimfonksiyonu(){
	int secim;
	printf(" Asagidaki islemlerden birini seciniz:\n\n[1]--Kayit Ol\n[2]--Giris Yap\n");
	scanf("%d", &secim);
	return secim;	
}
int kayitfonksiyonu(){
	char adsoyad[30];
	int sifre;
	printf("Bankamiza kayit olmak icin lutfen asagidaki islemleri takip ediniz.\n Adiniz ve soyadinizi ekrana yaziniz: ");
	scanf("%s", &adsoyad);
	printf("Kendinize bir sifre olusturunuz: ");
	scanf("%d", &sifre);
	printf("Basarili bir sekilde kayit oldunuz. Giris ekranina yonlendiriliyorsunuz. Lutfen bekleyiniz.\n");
	girisfonksiyonu();
}
int girisfonksiyonu(char kullaniciadi[20], int sifre){
	char istenenkullaniciadi[20]={"elif"};
	int istenensifre={123};
	int kontrol;
	int false;
	int true;
	kontrol=false;
    while(kontrol==false){
	    printf("\n");
        printf("Kullanici adinizi giriniz: ");
    	scanf("%s", &istenenkullaniciadi);
    	printf("Sifrenizi giriniz: ");
    	scanf("%d", &istenensifre);
    	printf("\n");
    	if(strcmp(istenenkullaniciadi,"elif")==0 || strcmp(istenensifre,123)==0)
	    {
	    	printf("Giris basarili. Sisteme hosgeldiniz.\n\n");
	    	kontrol=true;
    	}
    	else
    	{
	    	printf("Giris basarisiz. Yeniden giris ekranina yonlendiriliyorsunuz.");
    	}
    }
}
int main(int argc, char *argv[]) {
		
	char kullaniciadi[20]="elif";
	int sifre=123;
	hosgeldinizfonksiyonu();
	int secim= secimfonksiyonu();
	if(secim==1){
		kayitfonksiyonu();
	}
	else if(secim==2){
		girisfonksiyonu(kullaniciadi,sifre);
	}
	else{
	    printf("Gecerli olmayan bir secim yapildi.");
	}
    int secim2;
    int para=10500;
    int yatirilacakpara,cekilecekpara,gonderilecekpara;
    printf("*** ISLEM MENUSU ***\n");
    printf("====================\n");
    printf(" [1]--Hesap Bakiyesi Goruntuleme\n [2]--Hesaba Para Yatirma\n [3]--Hesaptan Para Cekme\n [4]--Para Gonderme\n [5]--Cikis\n\nLutfen yapmak istediginiz islemi seciniz:\n ");
    scanf("%d", &secim2);
    switch(secim2){
        case 1: 
              printf("Hesap Bakiyesi Goruntuleme\n");
              printf("==========================\n");
              printf("Hesabinizda bulunan para: %d TL", para);
              break;
        case 2:
              printf("Hesaba Para Yatirma\n");
              printf("===================\n");
              printf("Yatirmak istediginiz para miktarini giriniz: ");
              scanf("%d", &yatirilacakpara);
              para+=yatirilacakpara;
              printf("Yatirilan para miktari: %d TL\n", yatirilacakpara);
              printf("Hesabinizda bulunan para: %d TL", para);
              break;
        case 3:
              printf("Hesaptan Para Cekme\n");
              printf("===================\n");
              while(1){
                  printf("Cekmek istediginiz para miktarini giriniz: ");
                  scanf("%d", &cekilecekpara);
                  if(cekilecekpara<=para){
                  para-=cekilecekpara;
                  printf("Cekilen para miktari: %d TL\n", cekilecekpara);
                  printf("Hesabinizda kalan para: %d TL", para);  
                  break;
                  }
                  else{
                  printf("Bakiye yetersiz. Para cekme ekranina yeniden yonlendiriliyorsunuz. Lutfen bekleyiniz.\n");
                  continue;
                  }
              }
              break;
        case 4: 
              printf("Para Gonderme\n");
              printf("=============\n");
              while(1){
                printf("Gondermek istediginiz para miktarini giriniz: ");
                scanf("%d", &gonderilecekpara);
                if(gonderilecekpara<=para){
                  para-=gonderilecekpara;
                  printf("Gonderilen para miktari: %d TL\n", gonderilecekpara);
                  printf("Hesabinizda kalan para: %d TL", para);
                  break;
                }
                else{
                  printf("Bakiye yetersiz. Para gonderme ekranina yeniden yonlendiriliyorsunuz. Lutfen bekleyiniz.\n");
                  continue;    
                 }
              }
              break;
        case 5:
              printf("Cikis ekranina yonlendiriliyorsunuz. Lutfen bekleyiniz.\n Yapmak istediginiz baska bir islem var mi?");
              break;
            
               
         }
    



	return 0;
}
