#include <stdio.h>
#include <stdlib.h>



int main() {

float classe1[13], classe2[15];
float M , min , max ;
int i  ;
int admis ;

	for ( i=0 ; i < 13; i++) {
		
	printf("saisir les moyennes des etudiants \n");
	scanf("%f",&classe1[13]);
	}
	
 min = classe1[0];
 for (  i=1; i<13 ; i++ ) {
 	if ( min > classe1[i] )
 	min = classe1 [i];
 }
 printf("la plus petite moyenne est %.2f \n" , min );
 
     max = classe1[0];
	for ( i = 1 ; i < 13 ; i++ )  {
 	if (max  < classe1[i])
 	max = classe1 [i];
 }
  	for ( i=0 ; i < 15; i++) {
		
	printf("saisir les moyennes des etudiants \n");
	scanf("%f", &classe2[15]);
	}
	
 min = classe2[0];
 for (  i=1; i<15 ; i++ ) {
 	if ( min > classe1[i] )
 	min = classe1 [i];
 }
 printf("la plus petite moyenne est %.2f \n" , min );
 
 max = classe1[0];
	for ( i = 1 ; i < 15 ; i++ )  {
 	if (max  < classe2[i])
 	max = classe2[i];
 }
 
 printf ("la plus grand moyenne est %.2f\n" , max );
 
 admis =0;
 	for ( i= 0 ; i < 13 ; i++ ) {
 	if ( classe2[i]>=10){
 	 admis++ ;
 } 
 }
  printf ("le nombre des eleves a obtenu une moyenne est %d\n" , admis);
 
 
 
 
 
 // CLASSE 2
 
 	for ( i=0 ; i < 15; i++) {
		
	printf("saisir les moyennes des etudiants \n");
	scanf("%f", &classe2[15]);
	}
	
 min = classe2[0];
 for (  i=1; i<15 ; i++ ) {
 	if ( min > classe1[i] )
 	min = classe1 [i];
 }
 printf("la plus petite moyenne est %.2f \n" , min );
 
 max = classe2[0];
	for ( i = 1 ; i < 15 ; i++ )  {
 	if (max  < classe2[i])
 	max = classe2[i];
 }
 
 printf ("la plus grand moyenne est %.2f\n" , max );
 
 admis =0;
 	for ( i= 0 ; i < 13 ; i++ ) {
 	if ( classe2[i]>=10){
 	 admis++ ;
 } 
 }
  printf ("le nombre des eleves a obtenu une moyenne est %d\n" , admis);
	return 0;
}

