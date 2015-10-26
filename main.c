#include <stdio.h>
#include "TI_Lib.h"
#include "tft.h"
#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"

struct Person {
	char name[30];
	float gehalt;
	int pnr;
};

int main (void) {
	int index;
	float jammer;
	struct Person p[5]={
		{"Hugo",   1500.12, 4711},
		{"Willi",   500.12, 4713},
		{"Egon",   2500.12, 4719},
		{"Fatima",  700.12, 4722},
		{"Leyla",  5000.12, 4723}
	};
	//----------------------------------------------------------------------
	
	Init_TI_Board();
	TFT_cls();
		
	// Implementierung der binären Suche

	index = lin_search(p,5,4713);
	jammer = p[index].gehalt;
	//print jammer;

	jammer=0.1;

	index = bin_search(p,5,4713);
	jammer = p[index].gehalt;
	// print "bin" jammer;


	// 	Hier kommt der KOT
	//----------------------------------------------------------------------
	
	

	while(1){}
}
/**********************************+** EOF ************************************/

/**
 * Lineare Suche auf einem Array von Personen.
 * 
 * @ param a Array
 * @ param size Laenge des Arrays
 * @ param key Sucheschluessel
 *
 * @ retrun >= 0: gefunden
 *          <  0: nicht gefunden
 */

int lin_search(const Personen a[], const int size, const int key ){
	
	int i;
	
	for (i=0; i < size ; i++){
		if(a[i].pnr == key){
			return i;
		}
	}
	return -1;
}



/**
 * Binaere Suche auf einem Array von Personen. 
 *
 * @ param a Personarray
 * @ param size Arraylaenge
 * @ param key Suchschluessel
 * 
 * @ return <= 0: Index des Gesuchten.
 *          <  0: Nicht gefunden.
 */

int bin_search( const Person a[], const int size, const int key ){
	int links = 0;
	int rechts = size - 1;
	int mitte = 0
	int ergebnis = -1;

	while (ergebnis - 1 || links > rechts ){
		mitte = ( links + rechts ) / 2 ;
		if ( a[ mitte ].pnr ){
			ergebnis = mitte;
			return ergebnis;
		}else if ( key < a[ mitte ].pnr  ){
			rechts = mitte - 1;
		}else {
			links = mitte + 1;
		}
	}
	return ergebnis;
}

