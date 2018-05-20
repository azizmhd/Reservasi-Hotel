#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int i,harga,jumlahinap,PPN,total; /*deklarasi untuk harga, PPN, dan total*/
	char kode,kelas,CHECKOUT; /*deklarasi untuk kode,kelas,checkout*/


	kembali:
	system ("cls");
	printf("\n                             HOTEL.COM                                \n");
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^RESERVASI HOTEL^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\n\n************Berikut Kami Tampilkan Hotel Di Area XXX************");
	printf("\n\n\n=============================================================================");
	printf("						Hotel		          Kelas          Kelas             Kelas\n");
	printf("\t\t\tStandard(S)     Deluxe(D)      Presidential(P)\n");
	printf("===============================================================================\n");
	printf("1. Hotel A          	IDR 450.000    IDR 600.000      IDR 900.000\n");
	printf("2. Hotel B      	IDR 600.000    IDR 1.000.000  	IDR 3.200.000\n");
	printf("3. Hotel C     		IDR 550.000    IDR 1.200.000  	IDR 2.500.000\n");
	printf("4. Hotel D        	IDR 3.250.000  IDR 5.300.000  	IDR 8.000.000\n");
	printf("===============================================================================\n");

	for (i=0;i<=999;i++)/*untuk perulangan jika dibatalkan*/
	{
	printf("\nPilih Hotel anda (1/2/3/4): ");
	scanf("%d",&kode);

	switch(kode)/*proses yang akan dilakukan saat kode telah diinput oleh user*/
	{
		case 1: {/*proses yang akan dilakukan saat user memasukkan kode 1*/
					system ("cls");
					printf("Hotel Pilihan Anda : Hotel A\n");
					printf("\n-----------Silahkan Pilih Kamar Hotel Anda---------\n");
					printf("\n\nPilih Kelas Yang Anda Inginkan (S/D/P):\t");
					scanf("%s",&kelas);
					printf("\nBerapa Lama Anda Ingin Menginap?\t");
					scanf("%d", &jumlahinap);
					if(kelas=='S' || kelas=='s')
					{
						harga=450000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else if(kelas=='D' || kelas=='d')
					{
						harga=600000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else if(kelas=='P' || kelas=='p')
					{
						harga=900000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else {
						printf("\n\nKODE ERROR");

					}
			break;
		}
		case 2: /*proses yang akan dilakukan saat user memasukkan kode 2*/
			{
					system("cls");
					printf("Hotel Pilihan Anda : Hotel B\n");
					printf("\n-----------Silahkan Pilih Kamar Hotel Anda---------\n");
					printf("\n\nPilih Kelas Yang Anda Inginkan (S/D/P):\t");
					scanf("%s",&kelas);
					printf("\nBerapa Lama Anda Ingin Menginap?\t ");
					scanf("%d", &jumlahinap);
					if(kelas=='S' || kelas=='s')
					{
						harga=600000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else if(kelas=='D' || kelas=='d')
					{
						harga=1000000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else if(kelas=='P' || kelas=='p')
					{
						harga=3200000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else {
						printf("\n\nKODE ERROR");
					}

			break;
		}
		case 3: /*proses yang akan dilakukan saat user memasukkan kode 3*/
			{
					system ("cls");
					printf("Hotel Pilihan Anda : Hotel C\n");
					printf("\n-----------Silahkan Pilih Kamar Hotel Anda---------\n");
					printf("\n\nPilih Kelas Yang Anda Inginkan (S/D/P):\t");
					scanf("%s",&kelas);
					printf("\nBerapa Lama Anda Ingin Menginap?\t");
					scanf("%d", &jumlahinap);
					if(kelas=='S' || kelas=='s')
					{
						harga=550000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else if(kelas=='d' || kelas=='D')
					{
						harga=1200000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else if(kelas=='P' || kelas=='p')
					{
						harga=2500000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else {
						printf("\n\nKODE ERROR");
					}
			break;
		}
		case 4:/*proses yang akan dilakukan saat user memasukkan kode 4*/
			{
					system("cls");
					printf("Hotel Pilihan Anda : Hotel D\n");
					printf("\n-----------Silahkan Pilih Kamar Hotel Anda---------\n");
					printf("\n\nPilih Kelas Yang Anda Inginkan (S/D/P):\t");
					scanf("%s",&kelas);
					printf("\nBerapa Lama Anda Ingin Menginap?\t");
					scanf("%d", &jumlahinap);
					if(kelas=='S' || kelas=='s')
					{
						harga=3250000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else if(kelas=='D' || kelas=='d')
					{
						harga=5200000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else if(kelas=='P' || kelas=='p')
					{
						harga=8000000*jumlahinap;
						PPN=(10*harga)/100;
						total=harga+PPN;
						printf("\nHarga Kamar\t\t:\t IDR %d",harga);
						printf("\nPPN\t\t\t:\t IDR %d",PPN);
						printf("\nTotal pembayaran\t:\t IDR %d",total);
					}
					else {
						printf("\n\nKODE ERROR");
					}
			break;
		}
		default:
			printf("\n\nMaaf, Anda Salah Memasukkan Kode");/*jika user salah memasukkan kode, maka proses akan dimasukkan ke default*/

		}

			printf("\n\n\nApakah anda ingin checkout? (N/Y):");/*jika user ingin konfirmasi pembelian*/
			scanf("%s",&CHECKOUT);
			if (CHECKOUT=='n'|| CHECKOUT=='N'){
				goto kembali;
			}
			else if(CHECKOUT=='y'|| CHECKOUT=='Y'){/*jika ya, maka proses akan berhenti, jika tidak maka proses akan berulang*/
				system ("cls");
			break;
			}
	}

	system("cls");
	printf("\n\n============== Terima Kasih dan Selamat Berlibur :) ===============\n");
	printf("\nProgram dibuat oleh kelompok 10 Daskom03 --> Aziz, Daffa, dan Bonbon\n");
	return 0;
}
