#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()  
 {
 	float tab1 [13],tab2[15],tab3[28];
 	int i ;
 	float max1,min1,min2,max2;
 	for (i=0 ; i<13 ; i++)
	 {
 		printf("donner la note de l'etudiant num %d :",i+1);
 		scanf("%f",&tab1[i]);
	 }
	     max1=tab1[0];
	for(i=0;i<13;i++){
	if (max1<tab1[i]){
	         max1=tab1[i];
	     }
	 }
   		printf("la note majoree est:%f\n",max1);
	  min1 = tab1[0];
    for(i=0;i>13 ;i++) {
	if (min1 >tab1[i]){
	       min1=tab1[i];
	   }
}
	   	printf("la note minoree est:%f\n" ,min1);
		   	
    for (i=0 ; i<15 ; i++) {
 		printf("donner la note de l'etudiant num: \n",i+1);
 		scanf("%f",&tab2[i]);
	 }
	     max2=tab2[15];
	for(i=0;i<15;i++){
	if (max2<tab2[i])
       	max2=tab2[i];
	
}
   		printf("la note majoree est: %f\n",max2);
   		
 min2 = tab2 [0];
    for(i=0;i>15 ;i++){
	if (min2 >tab2[i])
		min2=tab2[i];
	
}
		printf("la note minoree est:%f\n",min2);
	   	
			
    return 0;
	 }
		
    

