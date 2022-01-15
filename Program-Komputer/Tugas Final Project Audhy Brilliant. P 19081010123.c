#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
float hitung_keliling_lingkaran (float jari) 
 	{
 	float phi = 3.14, keliling;
	keliling = 2 * phi * jari;
	return keliling;	
	}
float hitung_luas_lingkaran (float jari)
	{
	float phi = 3.14, luas;
	luas = phi * jari * jari;
	return luas;
	}
float hitung_keliling_persegi (float sisi)
	{
	float keliling;
	keliling = 4 * sisi;
	return keliling;
	}
float hitung_luas_persegi (float sisi)
	{
	float luas;
	luas = sisi * sisi;
	return luas;	
	}
float hitung_keliling_persegi_panjang (float panjang, float lebar)
	{
	float keliling;
	keliling = 2 * (panjang + lebar);
	return keliling;	
	}
float hitung_luas_persegi_panjang (float panjang, float lebar)
	{
	float luas;
	luas = panjang * lebar;
	return luas;
	}
float hitung_keliling_segitiga (float sisi_1, float sisi_2, float sisi_3)
	{
	float keliling;
	keliling = sisi_1 + sisi_2 + sisi_3;
	return keliling;
	}
float hitung_luas_segitiga (float alas, float tinggi)
	{
	float luas;
	luas = alas * tinggi/2;
	return luas;	
	}
	
	struct data {
	char nomer		[30];
	char nama		[30];
	char merk 		[30];
	char tahun	 	[30];
	char jenis  	[30];
 	char kapasitas	[30];
	};
	
int main ( ) {
	
	int pilihan_operasi, pilihan_program, pilihan_bentuk, pilihan_lk, pilihan_k_b_datar, pilihan_l_b_datar, angka_1, angka_2, hasilnya, tahun , nilai, x, y, b, k, tinggi_segitiga, p, q, matriks_1[8][8], matriks_2[8][8], hasil[8][8];
	float panjang, lebar, sisi, phi = 3.14, jari, sisi_1, sisi_2, sisi_3, alas, tinggi, keliling, luas;

	struct data mobil_1 ;

	printf("- + - + - + + +  SELAMAT DATANG DI PROGRAM KOMPUTER + + + - + - + -\n\n");
	
	printf("silahkan pilih program dibawah ini untuk melanjutkan\n\n");
	
	printf("1. program kalkulator\n");
	printf("2. program menentukan tahun kabisat\n");
	printf("3. program grading nilai\n");
	printf("4. program data mobil\n");
	printf("5. program kalkulator matriks\n");
	printf("6. program bentuk bintang\n");
	printf("7. program menghitung keliling dan luas bangun datar\n");

	printf("\npilihan : ");
	scanf("%i",&pilihan_program);
	
	switch(pilihan_program){
	
		case 1 :
		
			printf("\n- + - + - PROGRAM KALKULAOTR - + - + -\n\n");
		
			printf("silahkan pilih operasi dalam program ini\n\n");
	
			printf("1. penjumlahan\n");
			printf("2. pengurangan\n");
			printf("3. perkalian\n");
			printf("4. pembagian\n");
		
			printf("\npilihan : ");
			scanf("%i",&pilihan_operasi);
			
			switch(pilihan_operasi){
				
				case 1 :
					
					printf("\nanda memilih program penjumlahan\n\n");
				
					printf("masukan angka pertama\n");
					scanf("%i",&angka_1);
					
					printf("\nmasukan angka ke-2\n");
					scanf("%i",&angka_2);
					
					hasilnya = angka_1 + angka_2;
					printf("\nhasil dari penjumlahan tersebut adalah = %i",hasil);
					break;
				
				case 2 :
				
					printf("\nanda memilih program pengurangan\n\n");
				
					printf("masukan angka pertama\n");
					scanf("%i",&angka_1);
					
					printf("\nmasukan angka ke-2\n");
					scanf("%i",&angka_2);
					
					hasilnya = angka_1 - angka_2;
					printf("\nhasil dari pengurangan tersebut adalah = %i",hasil);
					break;
					
				case 3 :
					
					printf("\nanda memilih program perkalian\n\n");
				
					printf("masukan angka pertama\n");
					scanf("%i",&angka_1);
					
					printf("\nmasukan angka ke-2\n");
					scanf("%i",&angka_2);
					
					hasilnya = angka_1 * angka_2;
					printf("\nhasil dari perkalian tersebit adalah = %i",hasil);
					break;
					
				case 4 :
				
					printf("\nanda memilih program pembagian\n\n");
				
					printf("masukan angka pertama\n");
					scanf("%i",&angka_1);
					
					printf("\nmasukan angka ke-2\n");
					scanf("%i",&angka_2);
					
					hasilnya = angka_1 / angka_2;
					printf("\nhasil dari pembagian tersebit adalah = %i",hasil);
					break;
					
				default :
					
					printf("\noperasi tidak ditemukan");
					
			}
			break;
			
		case 2 :
			
			printf("\n+ - + - + PROGRAM MENENTUKAN TAHUN KABISAT + - + - +\n\n");
			
			printf("\nmasukan tahun = ");
			scanf("%i" ,&tahun);
	
				//tahun yang tidak habis dibagi 100 tetapi habis dibagi 4
				if (tahun%100 != 0 && tahun%4 == 0){ 
    				printf("\nTahun tersebut adalah tahun kabisat");
				}
	
				//tahun yang habis dibagi 100 dan habis dibagi 400
					else if (tahun%100 == 0 && tahun%400 == 0){ 
					printf("\ntahun tersebut adalah tahun kabisat");
				}
	
	 			//tahun yang habis dibagi 100 tetapi tidak habis dibagi 400
					else if (tahun%100 == 0 && tahun%400 != 0){ 
						printf("\ntahun tersebut bukan tahun kabisat");
					}
				else {
     		    	printf("\nTahun tersebut bukan tahun kabisat");
  					}
  			break;
			
		case 3 :
			
			printf("\n- + - + - PROGRAM MENENTUKAN GRADING - + - + -");
			
			printf("\n\nmasukan nilai akhir anda = ");
			scanf("%i" ,&nilai);
	
				if (nilai>80){
					printf("\ngrade anda adalah A");
				}
					else if (nilai>=70 && nilai<=80){
						printf("\ngrade anda adalah B");
					}
					else if (nilai>=60 && nilai<70){
						printf("\ngrade anda adalah C");
					}
					else if (nilai>=50 && nilai<60){
						printf("\ngrade anda adalah D");
					}
				else {
					printf("\ngrade anda adalah E");
				}	
  			break;
		
		case 4 :
 			
			printf("\n\n+++++++PROGRAM DATA MOBIL+++++++\n\n\n");
			
			printf("data mobil 1 \n\n");
			
			printf("Masukan nomer		mobil : ");
			fflush(stdin);
			gets(mobil_1.nomer);
						
			printf("Masukan nama		mobil : ");
			fflush(stdin);
			gets(mobil_1.nama);
			
			printf("Masukan merk		mobil : ");
			fflush(stdin);
			gets(mobil_1.merk);
			
			printf("Masukan tahun pembuatan	mobil : ");
			fflush(stdin);
			gets(mobil_1.tahun);
			
			printf("Masukan jenis		mobil : ");
			fflush(stdin);
			gets(mobil_1.jenis);
			
			printf("Masukan kapasitas	mesin : ");
			fflush(stdin);
			gets(mobil_1.kapasitas);
			
			printf("\n\n*****DATA*****MOBIL***** \n\n");
			
			printf( " nomer		mobil : %s\n",mobil_1.nomer);
			printf( " nama		mobil : %s\n",mobil_1.nama);
			printf( " merk		mobil : %s\n",mobil_1.merk);
			printf( " tahun pembuatan mobil : %s\n",mobil_1.tahun);
			printf( " jenis		mobil : %s\n",mobil_1.jenis);
			printf( " kapasitas	mesin : %s\n",mobil_1.kapasitas );
			 
			
			break;
			
		case 5 :	
		
			printf("\n+ - + - + PROGRAM KALKULATOR MATRIKS + - + - +\n\n");

			//untuk memasukan batas jumlah baris
			printf("Masukkan jumlah baris matriks: ");
			scanf("%i", &b);

			//untuk memasukan batas jumlah kolom
			printf("Masukkan jumlah kolom matriks: ");
			scanf("%i", &k);

			//untuk memasukan angka/elemen matriks pertama
			printf("\nMasukkan elemen matriks pertama: \n");
				for (x = 0; x < b; x++)
  				{
    				for (y = 0; y < k; y++)
    				{
      				scanf("%i", &matriks_1[x][y]);
    				}
				}
	
			//untuk memasukan angka/elemen matriks kedua
			printf("\nMasukkan elemen matriks kedua: \n");
			for (x = 0; x < b; x++)
 			{
    			for (y = 0; y < k; y++)
    			{
      			scanf("%i", &matriks_2[x][y]);
    			}
			}
	
			//pilihan untuk operasi penjumlahan/pengurangan
			printf("\npilih macam operasi di bawah ini\n\n");
			printf("1. penjumlahan	2. pengurangan\n");
			printf("\npilihan : ");
			//o= jenis operasi
			int o;

			scanf ("%i",&o );

			//jika memilih 1 maka akan menuju ke operasi penjumlahan matriks
			if (o == 1){


				printf("\nhasil penjumlahan matrix: \n");
					for (x = 0; x < b; x++)
  					{
   						for (y = 0; y < k; y++)
    					{
      					hasil[x][y] = matriks_1[x][y] + matriks_2[x][y];
     				 	printf("%i \t", hasil[x][y]);
    					}
    				printf("\n");
					}
				}

				//jika memilih 2 akan menuju ke operasi pengurangan matriks
			if (o == 2){
	
				printf("\nhasil pengurangan matrix: \n");
					for (x = 0; x < b; x++)
  					{
   						 for (y = 0; y < k; y++)
    					{
      					hasil[x][y] = matriks_1[x][y] - matriks_2[x][y];
      					printf("%i \t", hasil[x][y]);
    					}
    				printf("\n");
					}
			}
			else{
				printf("\noperasi tidak ditemukan");
			}
			break;
			
		case 6 :
			
			printf("\n- + - + - PROGRAM BENTUK BINTANG - + - + -\n\n");
	
			printf("pilih bentuk bintang dibawah ini\n\n");
		
			printf("1. segitiga siku-siku normal\n");
			printf("2. segitiga siku-siku terbalik\n");
			printf("3. segitiga samakaki normal\n");
			printf("4. segitiga samakaki terbalik\n");
			printf("5. belah ketupat\n");
			printf("6. jam pasir");
	
			printf("\n\nmasukan angka pilihan = ");
			scanf("%i",& pilihan_bentuk);
	
			switch(pilihan_bentuk){
		
				//pihihan bentuk segitiga siku-siku normal
				case 1 :
					
					printf("\n- - - bentuk segitiga siku-siku normal - - -\n\n");
			
					printf("masukan tinggi segitiga = ");
					scanf("%i",& tinggi_segitiga);
					printf("\n");
			
						for (p = 1; p <= tinggi_segitiga; p++) {
							printf("\n");
								for (q = 1; q <= p; q++) {
									printf("* ");
  								}
						}
					break;
		
				//pilihan bentuk segitiga siku-siku terbalik	
				case 2 :
							
					printf("\n- - - bentuk segitiga siku-siku terbalik - - -\n\n");
			
					printf("masukan tinggi segitiga = ");
					scanf("%i",& tinggi_segitiga);
					printf("\n");
			
						for(p = tinggi_segitiga; p>=1; p--)
   						{
        					for(q=1; q<=p; q++)
        					{
            				printf("* ");
        					}
    					printf("\n");
    					}
   					break;
		
				// pilihan bentuk segitiga samakaki normal	
				case 3 :
					
					printf("\n- - - bentuk segitiga samakaki normal - - -\n\n");
			
					printf("masukan tinggi segitiga = ");
					scanf("%i",& tinggi_segitiga);
					printf("\n");
				
						for(p = 1; p <= tinggi_segitiga; p++){
							for(q = tinggi_segitiga; q > p; q--){
							printf(" ");
							}
							for(q = 1; q <= (2*p-1); q++){
							printf("*");				
							}	
						printf("\n");
						}
					break;
					
				//pilihan bentuk segitiga samakaki terbalik	
				case 4 :
					
					printf("\n- - - bentuk segitiga samakaki terbalik - - -\n\n");
			
					printf("masukan tinggi segitiga = ");
					scanf("%i",& tinggi_segitiga);
					printf("\n");
			
						for(p = 1; p <= tinggi_segitiga; p++){
							for(q = 1; q < p; q++){
								printf(" ");
							}
							for(q = tinggi_segitiga; q >= (2*p-tinggi_segitiga); q--){
							printf("*");				
							}
					printf("\n");		
					}
					break;
			
				//pilihan bentuk belah ketupat	
				case 5 :
					
					printf("\n- - - bentuk belah ketupat - - -\n\n");
			
					printf("masukan tinggi segitiga = ");
					scanf("%i",& tinggi_segitiga);
					printf("\n");
				
						for(p = 1; p <= tinggi_segitiga; p++){
							for(q = tinggi_segitiga; q > p; q--){
							printf(" ");
							}
							for(q = 1; q <= (2*p-1); q++){
							printf("*");				
							}
						printf("\n");
						}
						for(p = 2; p <= tinggi_segitiga; p++){
							for(q = 1; q < p; q++){
							printf(" ");
							}
							for(q = tinggi_segitiga; q >= (2*p-tinggi); q--){
								printf("*");				
								}
						printf("\n");
						}
					break;
		
				//pilihan bentuk jam pasir		
				case 6 :
					
					printf("\n- - - bentuk jam pasir - - -\n\n");
				
					printf("masukan tinggi segitiga = ");
					scanf("%i",& tinggi_segitiga);
					printf("\n");
				
						for(p = 1; p <= tinggi_segitiga; p++){
							for(q = 1; q < p; q++){
								printf(" ");
								}
							for(q = tinggi_segitiga; q >= (2*p-tinggi_segitiga); q--){
								printf("*");				
								}
						printf("\n");
						}
						for(p = 2; p <= tinggi_segitiga; p++){
							for(q = tinggi_segitiga; q > p; q--){
								printf(" ");
								}
						for(q = 1; q <= (2*p-1); q++){
							printf("*");				
							}	
						printf("\n");
						}
					}
				break;
				
		case 7 :
					
			printf("\n+ - + - + PROGRAM MENGHITUNG KELILING DAN LUAS BANGUN DATAR + - + - +\n\n");
				
				printf("silahkaan pilih bentuk perhitungan dibawah ini\n\n");
				
				printf("1. keliling\n");
				printf("2. luas\n");
				printf("\npilihan : ");
				scanf("%i",&pilihan_lk);
			
					if (pilihan_lk == 1){
					
						printf("\n\n- - - keliling bangun datar - - -\n\n");
				
						printf("silahkan pilih bangun datar dibawah ini\n\n");	
						printf("1. lingkaran\n");
						printf("2. persegi\n");
						printf("3. persegi panjang\n");
						printf("4. segitiga\n");
						printf("\npilihan : ");
						scanf("%i",&pilihan_k_b_datar);	
						
							switch(pilihan_k_b_datar){
								
								case 1 :
									
									printf("\n\n+ + + keliling lingkaran + + +\n\n");
								
									printf("masukan jari-jari lingkaran (cm): ");
									scanf("%f",&jari);
								
									printf("\n\nkeliling lingkaran = 2 x 3.14 x %f",jari);
									keliling = hitung_keliling_lingkaran (jari);
									
									printf("\n\nkeliling lingkaran adalah : %lf cm",keliling);
								
									break;
								
								case 2 :
									
									printf("\n\n+ + + keliling persegi + + +\n\n");
								
									printf("masukan panjang sisi persegi (cm): ");
									scanf("%f",&sisi);
									
									printf("\n\nkeliling persegi = 4 x %f",sisi);
									keliling = hitung_keliling_persegi (sisi);
								
									printf("\n\nkeliling persegi adalah : %lf cm",keliling);
									
									break;
								
								case 3 :
									
									printf("\n\n+ + + keliling persegi panjang + +  +\n\n");
								
									printf("masukan panjang persegi panjang (cm): ");
									scanf("%f",&panjang);
									
									printf("\n\nkeliling persegi panjang = 2 x (%f + %f)",panjang,lebar);
									keliling = hitung_keliling_persegi_panjang (panjang,lebar);
									
								 	printf("\n\nkeliling persegi panjang adalah : %lf cm",keliling);
									
									break;
									
								case 4 :
									
									printf("\n\n+ + + keliling segitiga + + +\n\n");
									
									printf("masukan salah satu sisi segitiga (cm) : ");
									scanf("%f",&sisi_1);
									
									printf("\n\nmasukan salah satu sisi segitiga lainnya (cm): ");
									scanf("%f",&sisi_2);
									
									printf("\n\nmasukan salah satu sisi segitiga lainnya (cm): ");
									scanf("%f",&sisi_3);
									
									printf("\n\nkeliling segitiga = %f + %f + %f",sisi_1,sisi_2,sisi_3);
									keliling = hitung_keliling_segitiga (sisi_1,sisi_2,sisi_3);
									
									printf("\n\nkeliling segitiga adalah : %lf cm",keliling);
									
									break;
								
								default :
									printf("pilihan bangun datar tidak ditemukan");	
							}
							
					}
						else if (pilihan_lk == 2){
								
							printf("\n\n- - - luas bangun datar - - -\n\n");
				
							printf("silahkan pilih bangun datar dibawah ini\n\n");	
							printf("1. lingkaran\n");
							printf("2. persegi\n");
							printf("3. persegi panjang\n");
							printf("4. segitiga\n");
							printf("\npilihan : ");
							scanf("%i",&pilihan_l_b_datar);
							
								switch(pilihan_l_b_datar){
								
									case 1 :
										
										printf("\n\n+ + + luas lingkaran + + +\n\n");
										
										printf("masukan jari-jari lingkaran (cm): ");
										scanf("%f",&jari);
										
										printf("\n\nluas lingkaran = 3.14 x %f x %f",jari,jari);
										luas = hitung_luas_lingkaran (jari);
											
										printf("\n\nluas lingkaran adalah : %lf cm",luas);
											
										break;
										
									case 2 :
											
										printf("\n\n+ + + luas persegi + + +\n\n");
										
										printf("masukan panjang sisi persegi (cm): ");
										scanf("%f",&sisi);
										
										printf("\n\nluas persegi = %f x %f",sisi,sisi);
										luas = hitung_luas_persegi (sisi);
										
										printf("\n\nluas persegi adalah : %lf cm",luas);
										
										break;
									
									case 3 :
										
										printf("\n\n+ + + luas persegi panjang + +  +\n\n");
										
										printf("masukan panjang persegi panjang (cm): ");
										scanf("%f",&panjang);
										
										printf("\n\nmasukan lebar persegi panjang (cm): ");
										scanf("%f",&lebar);
										
										printf("\n\nluas persegi panjang = %f x %f",panjang,lebar);
										luas = hitung_luas_persegi_panjang (panjang,lebar);
										
										printf("\n\nluas persegi panjang adalah : %lf cm",luas);
										
										break;
										
									case 4 :
										
										printf("\n\n+ + + luas segitiga + + +\n\n");
										
										printf("masukan alas segitiga (cm): ");
										scanf("%f",&alas);
										
										printf("\n\nmasukan tinggi segitiga (cm): ");
										scanf("%f",&tinggi);
										
										printf("\n\nluas segitiga = 1/2 %f x %f",alas,tinggi);
										luas = hitung_luas_segitiga (alas,tinggi);
										
										printf("luas segitiga adalah : %lf cm",luas);
										
										break;
									
									default :
										printf("pilihan bangun datar tidak ditemukan");	
								}
							}
					else{
						printf("\npilihan tidak ditemukan");
					}
		//jika pilihan tidak ada didalam daftar	
		default :
			printf("\npilihan tidak ditemukan");
	}
		
	return 0;
}
