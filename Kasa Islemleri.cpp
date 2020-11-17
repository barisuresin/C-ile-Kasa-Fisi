#include <stdio.h>
int main()
{
	int butce,urun1 = 5, urun1adet,
	urun2 = 10, urun2adet,
	urun3 = 15, urun3adet,
	urun4 = 20, urun4adet,
	urun5 = 25, urun5adet,
	kalanpara, birimfiyat, toplam1, toplam2, toplam3, toplam4, toplam5, geneltoplam, verilenpara, paraustu,kalantoplam;
	printf("Butce belirtin:");
	scanf("%d",&butce);

printf("1. Urun 5TL, Kac adet istersiniz:");
		scanf("%d",&urun1adet);
		birimfiyat = urun1adet * urun1;
		kalanpara = butce - birimfiyat;
		printf("Kalan Para:%d\n",kalanpara);
		toplam1 = birimfiyat;
		if( kalanpara < 0)
		{
			printf("Bu urunu alamazsiniz, paraniz yeterli degil.");
		}
	

printf("2. Urun 10TL, Kac adet istersiniz:");
		scanf("%d",&urun2adet);
		birimfiyat = urun2adet * urun2;
		kalanpara = kalanpara - birimfiyat;
		printf("Kalan Para:%d\n",kalanpara);
		toplam2 = birimfiyat;
		 if( kalanpara < 0)
		{
			printf("Bu urunu alamazsiniz, paraniz yeterli degil.");
		}
	
					
printf("3. Urun 15TL, Kac adet istersiniz:");
		scanf("%d",&urun3adet);
		birimfiyat = urun3adet * urun3;
		kalanpara = kalanpara - birimfiyat;
		printf("Kalan Para:%d\n",kalanpara);
		toplam3 = birimfiyat;
		if( kalanpara < 0)
		{
			printf("Bu urunu alamazsiniz, paraniz yeterli degil.");
		}
	
		

printf("4. Urun 20TL, Kac adet istersiniz:");
		scanf("%d",&urun4adet);
		birimfiyat = urun4adet * urun4;
		kalanpara = kalanpara - birimfiyat;
		printf("Kalan Para:%d\n",kalanpara);
		toplam4 = birimfiyat;
		if( kalanpara < 0)
		{
			printf("Bu urunu alamazsiniz, paraniz yeterli degil.");
		}
	
		

printf("5. Urun 25TL, Kac adet istersiniz:");
		scanf("%d",&urun5adet);
		birimfiyat = urun5adet * urun5;
		kalanpara = kalanpara - birimfiyat;
		printf("Kalan Para:%d\n\n",kalanpara);
		toplam5 = birimfiyat;
		if( kalanpara < 0)
		{
			printf("Bu urunu alamazsiniz, paraniz yeterli degil.");
		}
		
		
		geneltoplam = toplam1 + toplam2 + toplam3 + toplam4 + toplam5;
		paraustu = butce - geneltoplam;
		
		
		
		
		printf("KASA FISI:\n");
		printf("ADET: %d , %d , %d ,%d , %d\n",urun1adet,urun2adet,urun3adet,urun4adet,urun5adet);
		printf("BIRIM FIYAT: %dTL , %dTL , %dTL , %dTL , %dTL\n",urun1,urun2,urun3,urun4,urun5);
		printf("TOPLAM: %dTL ,%dTL , %dTL , %dTL , %dTL\n",toplam1,toplam2,toplam3,toplam4,toplam5);
		printf("______________________________\n");
		printf("GENEL TOPLAM	%dTL\n",geneltoplam);
		printf("VERILEN PARA	%dTL\n",butce);
		printf("PARA USTU	%dTL\n",paraustu);
		
		
		
	
	
	
	
	return 0;
}
