#include <stdio.h>
#include <iostream>

/*Créditos da criação por: 
@p.luca_melo
@nieelsz
@p_kaua_
@edeson_ph1
@jvt_3 */

main(){
	
	setlocale(LC_ALL,"portuguese");
char al,h;
int modalidade;

printf("Olá, eu sou a Gina! Com quem estou falando? ");
scanf("%s",&al);
printf("Olá, %s. Estas são as modalidades disponíveis:\n 1 = Musculação\n 2 = Natação\n 3 = Pilates\n 4 = Dança\n Digite o número correspondente a modalidade desejada: ", &al);
scanf("%d",&modalidade);

switch(modalidade) {
	case 1:
    	if(modalidade=1){
		printf("Você selecionou Musculação. Estes são os horários disponíveis:\n 1 = 13:00 às 14:00\n 2 = 14:00 às 15:00\n 3 = 15:00 às 16:00\n 4 = 16:00 às 17:00\n");
    	printf("Digite o número correspondente ao horário desejado: ");
    	
    	scanf("%d",&h);
    		switch(h){
    			case 1:
    				if(h=1){
	 					printf("Seu horário está confirmado para 13:00 ás 14:00.");
    		}
    			break;
    			
    			case 2:
    				if(h=2){
	 					printf("Seu horário está confirmado para 14:00 ás 15:00.");
    		}
    			break;
    			
    			case 3:
    				if(h=3){
	 					printf("Seu horário está confirmado para 15:00 ás 16:00.");
    		}
    			break;
    			
    			case 4:
    				if(h=4){
	 					printf("Seu horário está confirmado para 16:00 ás 17:00.");
    		}
    		break;
		}
	}
    	break;
    	
	case 2:
		if (modalidade=2) {
    	printf("Você selecionou Natação. Estes são os horários disponíveis:\n 1 = 13:00 às 14:00\n 2 = 14:00 às 15:00\n 3 = 15:00 às 16:00\n 4 = 16:00 às 17:00\n ");
    	printf("Digite o número correspondente ao horário desejado: ");
    	scanf("%d",&h);
    	
    	    switch(h){
    			case 1:
    				if(h=1){
	 					printf("Seu horário está confirmado de 13:00 às 14:00.");
    		}
    			break;
    			
    			case 2:
    				if(h=2){
	 					printf("Seu horário está confirmado de 14:00 às 15:00.");
    		}
    			break;
    			
    			case 3:
    				if(h=3){
	 					printf("Seu horário está confirmado de 15:00 às 16:00.");
    		}
    		break;
    		
    			case 4:
    				if(h=4){
	 					printf("seu horário está confirmado de 16:00 às 17:00.");
    		}
    		break;
		}
	}
		break;
	case 3:
		if (modalidade=3) {
    	printf("Você selecionou Pilates. Estes são os horários disponíveis:\n 1 = 13:00 às 14:00\n 2 = 14:00 às 15:00\n 3 = 15:00 às 16:00\n 4 = 16:00 às 17:00\n");
    	printf("Digite o número correspondente ao horário desejado: ");
    	scanf("%d",&h);
    	
    	    	    switch(h){
    			case 1:
    				if(h=1){
	 					printf("Seu horário está confirmado de 13:00 às 14:00.");
    		}
    			break;
    			
    			case 2:
    				if(h=2){
	 					printf("Seu horário está confirmado de 14:00 às 15:00.");
    		}
    			break;
    			
    			case 3:
    				if(h=3){
	 					printf("Seu horário está confirmado de 15:00 às 16:00.");
    		}
    		break;
    		
    			case 4:
    				if(h=4){
	 					printf("Seu horário está confirmado de 16:00 às 17:00.");
    		}
    		break;
		}
	}
		break;
		
	case 4:
		if (modalidade=4) {
    	printf("Você selecionou Dança. Estes são os horários disponíveis:\n 1 = 13:00 às 14:00\n 2 = 14:00 às 15:00\n 3 = 15:00 às 16:00\n 4 = 16:00 às 17:00\n");
    	printf("Digite o número correspondente ao horário desejado: ");
    	scanf("%d",&h);
    	
        	    switch(h){
    			case 1:
    				if(h=1){
	 					printf("Seu horário está confirmado de 13:00 às 14:00.");
    		}
    			break;
    			
    			case 2:
    				if(h=2){
	 					printf("Seu horário está confirmado de 14:00 ás 15:00.");
    		}
    			break;
    			
    			case 3:
    				if(h=3){
	 					printf("Seu horário está confirmado de 15:00 às 16:00.");
    		}
    		break;
    		
    			case 4:
    				if(h=4){
	 					printf("Seu horário está confirmado de 16:00 às 17:00.");
    		}
    		break;
		}
	}
		break;
	}
}


