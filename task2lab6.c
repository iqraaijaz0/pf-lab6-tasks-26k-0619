#include<stdio.h>
int main(){
	int appliance_number,main_lights,water_heater,air_conditioner,security_camera;
	int operation=0;
	main_lights=1;
	water_heater=2;
	air_conditioner=4;
	security_camera=8;
	while(operation!=-1){
	printf("Enter appliance number\n1:Main lights\2:Water heater\n3:Air conditioner\n4:Security camera");
	scanf("%d",&appliance_number);
	printf("Enter desired operation:");
	scanf("%d",&operation);
			switch(operation){
			case 1:
				operation=operation|water_heater;
				printf("water heater switch ON");
				break;
				case 2:
					operation=operation&~air_conditioner;
				printf("air conditioner Turned OFF");
				break;	
				case 3:
					operation:operation^main_lights;
						printf("Main lights are flip");
				break;
				case 4:
					operation=operation&security_camera;
					printf("reporting current status of security camera");
					break;
			}
		printf("updated combine value is %d:",operation);
		if(((operation&air_conditioner)&&(operation&water_heater))!=0)
		printf("an overload worth flagging");
printf("Enter desired operation:");
	scanf("%d",&operation);
}
return 0;
}

	
	
	
