//this is main.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "screen.h"	//for user-defined header, use double quotes
#include "sound.h"
int main(){
	FILE *f;
	f = fopen("test.wav", "r");	//open the file for read only
	clearScreen();
	setColors(YELLOW, bg(YELLOW));
//	printf("printed from main.\n");
//	barChart(arr);
	if(f == NULL){
		printf("cannot open the wav file\n");
		return 1;
	}
	struct WAVHDR h;	//instance of wav header
	fread(&h, sizeof(h), 1, f);	//read wav header to h
	displayWAVHDR(h);	//show wave header information 
	resetColors();
	printf("Another message\n");
	getchar();
}
