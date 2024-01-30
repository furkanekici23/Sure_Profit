 //a:minor ratio(1/probability of occurrence of a situation with a high probability)
//b:major ratio (1/probability of occurrence of a situation with a low probability )
//y:money to risk for minor ratio
//p:money to risk for major ratio
//o:p+y means total money to risk

// You can find the mathematical explanation in word files: "Explanation" which is in English and "Açýklama" which is in Turkish.

//THIS PROGRAM HELPS YOU TO MAKE SURE PROFÝT ÝN CASE OF YOU ARE SURE THAT AT LEAST ONE OF TWO PROBILITIES COMES TRUE.
#include<stdlib.h>
#include<stdio.h>
#include <conio.h>

int ratio_control(float a,float b){
	if ((a*b)>(a+b)) 
	return 1;
	 else
	 return 0;	
}

int main (){
float a,b,c,f,y;
float k,l,m,n,t;
float o;
float p,r,s;
int d;
int v;
float g,h;
 
beginning:
 yellow();
 printf("----- WELCOME TO 'TWO PROBABILITIES-SURE PROFIT'-----");	
 giris:
 printf("\nEnter '1' to write the probabilities in terms of mathematical probabilities, or '2' to write them in ratios: ");
 scanf("%d",&v);
 switch (v){
 
 case 1 :  printf("\nEnter the high probability and the low probability (in the form of a decimal number) respectively.");
 printf("\nEnter the numerical value of the high probability:");
 scanf("%f",&g);
 a=(1/g);
 printf("\nEnter the numerical value of the low probability:");
 scanf("%f",&h);
 b=(1/h);
 break ;

 case 2 : printf("\nEnter the minor ratio and the major ratio respectively.");
 printf("\nMinor ratio:");
 scanf("%f",&a);
 printf("Major ratio:");
 scanf("%f",&b);
 break ;
 
 default :
 	printf("Please do not enter any value other than '1' or '2'.");
 	goto giris;
}
 c = ratio_control(a,b); 
 
	if (c==1){
		printf("\Probabilities are suitable for making a sure profit.\nAnd let's see how you can make sure profit.\n"); 
		yellow();
		printf(" Enter '1' to find total money to pay in, \nwith inputting ratio of the situation with minor ratio(with high probality) ; \n\n");
		
		printf(" Enter '2' to find spread of money, \nwith inputting the total money to pay in ; \n\n");
		
		scanf("%d",&d);
		 green(); 
		  switch(d){
		  	case 1:
		  		printf("\nInput the money will be payed for the situation with minor ratio(with high probality):");
		  		scanf("%f",&y);
		  		k=a*y ;
		  		l=(y*b)/(b-1);
		  		value_of_case1:
		  		cyan();	
		  		printf("\n%.3f > Total money to pay in > %.3f ",k,l);
		  		printf("\nInput the money to pay in, in range written above:");
		  		
		  		scanf("%f",&t);
		  		if(t>l && t<k){
				green() ; 
		  		printf("\nThe money to pay in minor ratio: %.3f \nThe money will be earned if this situation comes true:%.3f ",y,k); 
		  		p=(t-y);
		  		r=(t-y)*b;
		  		printf("\nThe money to pay in major ratio: %.3f \nThe money will be earned if this situation comes true:%.3f \n",p,r);}
		  		else{
		  			red();
				   printf("\nThe value you entered is not in the required range. Please enter a numerical value in the following range.\n") ;
				   
				   goto value_of_case1 ; }
		  		
		  		break;
		  	case 2:
		  		printf("\nInput the total money to pay in:");
		  		scanf("%f",&f);
		  		m=((f*(b-1))/b);
		  		n=f/a;
		  		value_of_case2:
		  		printf("\n%.3f > The money to pay in minor ratio > %.3f \n",m,n);
		  		cyan();
				printf("Input a value in range written above to pay in minor ratio:");
		  		scanf("%f",&o);
		  		if(o>n && o<m){
				green();  
		  		printf("\nThe money to pay in minor ratio: %.3f \nThe money will be earned if this situation comes true:%.3f \n",o,o*a) ;
		  		s=f-o ;
		  		printf("\nThe money to pay in major ratio: %.3f \nThe money will be earned if this situation comes true:%.3f \n",s,s*b) ;
		  		}
		  		else 
				  { red(); 
				   printf("\nThe value you entered is not in the required range. Please enter a numerical value in the following range.\n");
		  		 goto value_of_case2;}
		  		break;
		  } 
	}
	else 
	{ red();printf("\nProbabilities are NOT suitable for making a sure profit.Please consider other possibilities.\n");	} ;
	
printf("\nPRESS ANY KEY TO RESTART THE PROGRAM.");	
getch ();
system ("cls");
	goto beginning;
}

void red(){
	printf("\033[1;31m");
}

void yellow(){
	printf("\033[1;33m");
}

void green(){
	printf("\033[0;32m");
}

void cyan(){
	printf("\033[0;36m");	
}

void purple(){
	printf("\033[0;35m");	
}


