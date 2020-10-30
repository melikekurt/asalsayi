//kullanicinin girdigi sayinin asal olup olmadigini belirler
#include<stdio.h>
int main(){
	int n ;
	printf("Lutfen asal olup olmadigini belirlemek istediginiz sayiyi giriniz.\n");
	scanf("%d",&n);
	//2.... giden sayilara bolunmemeli
	int asal=2 ;
	while(n>0){
			n= n/asal;
			asal++;
		if(n%asal==0){
		printf("ASAL ");
	}
	
		else
		printf("ASAL DEGIL");
		
		
			
	
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0 ;
}
