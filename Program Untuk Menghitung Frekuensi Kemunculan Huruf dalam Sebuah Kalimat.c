#include<iostream>
#include <stdio.h>
#include <conio.h>

int main(){
	char kalimat[50];
	int i,temu=0;
	char cari;

	printf("Masukkan Kalimat (50 char) :");
	scanf("%[^\n]",kalimat);
	printf("Masukkan huruf (case sensitif) :");
	scanf("%s",&cari);
	for(i=0;kalimat[i]!='\n';i++){
		if(cari==kalimat[i])temu++;
	}
	if(temu!=0)
	printf("\nTerdapat Sebanyak %d Huruf '%c' dari Kalimat di atas !",temu,cari);
	else
	printf("\nHuruf yang diminta Tidak di Temukan Pada Kalimat diatas !");
	getch();
}
