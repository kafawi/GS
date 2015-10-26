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

	


	// 	Hier kommt der KOT
	//----------------------------------------------------------------------
	
	

	while(1){}
}
/**********************************+** EOF ************************************/

/**
 * Lineare Suche auf einem Array von Personen. 
 *
 * @ param a Personarray
 * @ param size Arraylaenge
 * @ param key Suchschluessel
 * 
 * @ return <= 0: Index des Gesuchten.
 *          <  0: Nicht gefunden.
 */

int bin_search( const Person a[], const int size, const int key ){

x=(l+r)/2



}

