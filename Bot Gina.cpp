#include <stdio.h>
#include <iostream>

/*Cr�ditos da cria��o por: 
@p.luca_melo
@nieelsz
@p_kaua_
@edeson_ph1
@jvt_3 */

main(){
	
	setlocale(LC_ALL,"portuguese");
char al,h;
int modalidade;

printf("Ol�, eu sou a Gina! Com quem estou falando? ");
scanf("%s",&al);
printf("Ol�, %s. Estas s�o as modalidades dispon�veis:\n 1 = Muscula��o\n 2 = Nata��o\n 3 = Pilates\n 4 = Dan�a\n Digite o n�mero correspondente a modalidade desejada: ", &al);
scanf("%d",&modalidade);

switch(modalidade) {
	case 1:
    	if(modalidade=1){
		printf("Voc� selecionou Muscula��o. Estes s�o os hor�rios dispon�veis:\n 1 = 13:00 �s 14:00\n 2 = 14:00 �s 15:00\n 3 = 15:00 �s 16:00\n 4 = 16:00 �s 17:00\n");
    	printf("Digite o n�mero correspondente ao hor�rio desejado: ");
    	
    	scanf("%d",&h);
    		switch(h){
    			case 1:
    				if(h=1){
	 					printf("Seu hor�rio est� confirmado para 13:00 �s 14:00.");
    		}
    			break;
    			
    			case 2:
    				if(h=2){
	 					printf("Seu hor�rio est� confirmado para 14:00 �s 15:00.");
    		}
    			break;
    			
    			case 3:
    				if(h=3){
	 					printf("Seu hor�rio est� confirmado para 15:00 �s 16:00.");
    		}
    			break;
    			
    			case 4:
    				if(h=4){
	 					printf("Seu hor�rio est� confirmado para 16:00 �s 17:00.");
    		}
    		break;
		}
	}
    	break;
    	
	case 2:
		if (modalidade=2) {
    	printf("Voc� selecionou Nata��o. Estes s�o os hor�rios dispon�veis:\n 1 = 13:00 �s 14:00\n 2 = 14:00 �s 15:00\n 3 = 15:00 �s 16:00\n 4 = 16:00 �s 17:00\n ");
    	printf("Digite o n�mero correspondente ao hor�rio desejado: ");
    	scanf("%d",&h);
    	
    	    switch(h){
    			case 1:
    				if(h=1){
	 					printf("Seu hor�rio est� confirmado de 13:00 �s 14:00.");
    		}
    			break;
    			
    			case 2:
    				if(h=2){
	 					printf("Seu hor�rio est� confirmado de 14:00 �s 15:00.");
    		}
    			break;
    			
    			case 3:
    				if(h=3){
	 					printf("Seu hor�rio est� confirmado de 15:00 �s 16:00.");
    		}
    		break;
    		
    			case 4:
    				if(h=4){
	 					printf("seu hor�rio est� confirmado de 16:00 �s 17:00.");
    		}
    		break;
		}
	}
		break;
	case 3:
		if (modalidade=3) {
    	printf("Voc� selecionou Pilates. Estes s�o os hor�rios dispon�veis:\n 1 = 13:00 �s 14:00\n 2 = 14:00 �s 15:00\n 3 = 15:00 �s 16:00\n 4 = 16:00 �s 17:00\n");
    	printf("Digite o n�mero correspondente ao hor�rio desejado: ");
    	scanf("%d",&h);
    	
    	    	    switch(h){
    			case 1:
    				if(h=1){
	 					printf("Seu hor�rio est� confirmado de 13:00 �s 14:00.");
    		}
    			break;
    			
    			case 2:
    				if(h=2){
	 					printf("Seu hor�rio est� confirmado de 14:00 �s 15:00.");
    		}
    			break;
    			
    			case 3:
    				if(h=3){
	 					printf("Seu hor�rio est� confirmado de 15:00 �s 16:00.");
    		}
    		break;
    		
    			case 4:
    				if(h=4){
	 					printf("Seu hor�rio est� confirmado de 16:00 �s 17:00.");
    		}
    		break;
		}
	}
		break;
		
	case 4:
		if (modalidade=4) {
    	printf("Voc� selecionou Dan�a. Estes s�o os hor�rios dispon�veis:\n 1 = 13:00 �s 14:00\n 2 = 14:00 �s 15:00\n 3 = 15:00 �s 16:00\n 4 = 16:00 �s 17:00\n");
    	printf("Digite o n�mero correspondente ao hor�rio desejado: ");
    	scanf("%d",&h);
    	
        	    switch(h){
    			case 1:
    				if(h=1){
	 					printf("Seu hor�rio est� confirmado de 13:00 �s 14:00.");
    		}
    			break;
    			
    			case 2:
    				if(h=2){
	 					printf("Seu hor�rio est� confirmado de 14:00 �s 15:00.");
    		}
    			break;
    			
    			case 3:
    				if(h=3){
	 					printf("Seu hor�rio est� confirmado de 15:00 �s 16:00.");
    		}
    		break;
    		
    			case 4:
    				if(h=4){
	 					printf("Seu hor�rio est� confirmado de 16:00 �s 17:00.");
    		}
    		break;
		}
	}
		break;
	}
}


