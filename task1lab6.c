#include<stdio.h>
int main(){
	int age,show_category,ticket_price,day_number,final_price,remainder;
	float discountpercent;
	printf("enter your show category\n1:Regular\n2:3D\n3:premiere\n:");
	scanf("%d",&show_category);
	printf("\n");
	printf("enter the day number\n:");
	scanf("%d",&day_number);
	printf("enter your age\n:");
	scanf("%d",&age);
	while(age!=0){
		printf("iqra");
	
	switch(show_category){
		case 1:
			ticket_price=500;
			break;
			case 2:
				ticket_price=800;
				break;
			case 3:
				ticket_price=1200;
				break;
			}
		if(age<13){
		
		discountpercent=0.30;
		final_price=ticket_price-discountpercent*ticket_price;
	}
	else if(age>=60)
		{
					discountpercent=0.20;
		final_price=ticket_price-discountpercent*ticket_price;
		}
	else {
	final_price=ticket_price;
}
	remainder=day_number%5;
	if(remainder==0)
	final_price=final_price-50;
	if(final_price<100)
	final_price=100;
	printf("final price:%d",final_price);
	printf("enter age");
	scanf("%i", &age);
}

return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

