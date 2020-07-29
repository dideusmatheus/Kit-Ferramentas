#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	
	int menu;
	int num, i, resultado = 0;  // tipo da variavel do exercicio 1
	
	int questao2;
	float ladoquad, somaquad, ladoret1, ladoret2, somaret, base, alt, area; // tipo da veriavel do exercicio 2
	
	int a = 0, b = 1, auxiliar, ii, n; // tipo da variavel do exercicio 3
	
	int fat, nn; // tipo da variavel do exercicio 4
	
	int x, y, potencia; // tipo da variavel do exercicio 5
	
	float somamedia, quant, m; // tipo da variavel do exercicio 6
	
	setlocale(LC_ALL, "Portuguese");  // para codigo permitir acentos
	
	do{   // repetir o codigo at� o usuario quiser fechar o programa

	_sleep (550);
	system ("CLS||CLEAR");
	printf(" \n\t\t\t\t##### KIT DE FERRAMENTAS ##### \n");
	printf("ESCOLHA UMA FERRAMENTA APERTANDO SEU RESPECTIVO NUMERO E CASO QUEIRA SAIR DIGITE ZERO \n");
	printf("1. Verifica se o n�mero � primo.\n\n2. Calcula a �rea de uma figura (funcionando para quadrado, ret�ngulo e tri�ngulo).\n\n3. Calcula o en�simo elemento da sequ�ncia de Fibonacci.\n\n4. Calcula o fatorial de um n�mero.\n\n5. Calcula o valor de x elevado a y (xy).\n\n6. Calcula a m�dia de n n�meros inseridos.\n\n7. Calcula m�ximo divisor comum entre dois n�meros.\n\n8. Uma calculadora com soma, subtra��o, multiplica��o e divis�o. Guardando valor uma parapr�xima opera��o.\n\n9. Calcula a diferen�a entre duas datas em anos, meses e dias.\n\n10. Converta um valor inteiro decimal para n�mero romano.\n\n11. Distancia entre dois pontos\n\n\n\n\n");
	printf("\tN�mero: ");   
	scanf("%d", &menu);     
    // essa parte � onde imprimi o menu do programa e informa as op��es ao usuario
	

	switch(menu)   // usamos switch para reduzir a complexidade de v�rios if/else
	{
		case 1: 
			
			system("CLS||CLEAR");
			printf("1. Verifica se o n�mero � primo. \n\n");  
			printf("Digite um n�mero: ");   // onde usuario fornece o numero
 			scanf("%d", &num);
 
 					for (i = 2; i <= num / 2; i++) {  // aqui indica se o numero � primo ou n�o
    					if (num % i == 0) {
       						resultado++;
       							break;
    				}
 				}		if (resultado == 0){		// se resultado for igual a 0 � um numero primo
    						printf("\n%d � um n�mero primo!\n\n\n", num);
    						_sleep (1250);
 						}else{
    						printf("\n%d n�o � um n�mero primo!\n\n\n", num);
    						_sleep (1250);
    					}
					break;
		
		case 2:
			
			system ("CLS||CLEAR");
			_sleep (250);	
			printf("\n2. Calcula a �rea de uma figura (funcionando para quadrado, ret�ngulo e tri�ngulo).");
			printf("\n\nDigite o n�mero de acordo com qual �rea voc� quer calcular: \n1) �rea de um quadrado.\n2) �rea de um ret�ngulo.\n3) �rea de um tri�ngulo.\n");
			printf("\nN�mero: ");
			scanf("%d", &questao2);			// onde o usuario vai decidir qual area ele vai querer calcular
				
				if( questao2 == 1){			// calcula um quadrado
					
					printf("Tamanho de um lado do quadrado: ");
					scanf("%f", &ladoquad);
					
					somaquad = ladoquad * ladoquad;		// conta para descobrir a conta do quadrado
					
					printf("�rea do quadrado � %.2f", somaquad);
					_sleep (1250);
				}
				else if( questao2 == 2){       // calcula um retangulo
					
					printf("Tamanho de um lado do ret�ngulo: ");
					scanf("%f", &ladoret1);
					printf("Tamanho do outro lado do ret�ngulo: ");
					scanf("%f", &ladoret2);				// onde o usuario informa os lados de um retangulo
					
					somaret = ladoret1 * ladoret2;
					
					printf("�rea do ret�ngulo � %.2f", somaret);
					_sleep (1250);
				}
				else if( questao2 == 3){		// calcula um triangulo
					
					printf("Declare a base: ");
					scanf("%f", &base);
					printf("Declare a altura: ");		// usuario informa os lados
					scanf("%f", &alt);
					
					area = (base * alt)/2;		//	calcula a area do triangulo
					
					printf("�rea desse tri�ngulo � igual a %.2f\n", area);
					_sleep (1250);
				}
					
					
						break;
			
		case 3:
			
		system ("CLS||CLEAR");
		printf("\n3. Calcula o en�simo elemento da sequ�ncia de Fibonacci.\n\n");
		
					printf("\nDigite um n�mero: ");	// entrada do numero
					scanf("%d", &n);
  					printf("S�rie de Fibonacci:\n");	  // A fun��o scanf obt�m um valor digitado.
  					printf("%d\n", b);		
  					
  						 for(i = 0; ii < n; ii++){  // Com a estrutura de controle for() gero a sequ�ncia.
    						auxiliar = a + b;
    						a = b;
    						b = auxiliar;
    						printf("%d\n", auxiliar);		 // Imprimo o n�mero na tela.
					}
					_sleep (1250);
			break;
			
		case 4:
			
		system ("CLS||CLEAR");
		printf("\n4. Calcula o fatorial de um n�mero.\n\n");
		
					printf("Insira um valor para o qual deseja calcular seu fatorial: ");
					scanf("%d", &nn);		// A vari�vel �nn� armazena o n�mero no qual se quer calcular o fatorial
 
						for(fat = 1; nn > 1; nn = nn - 1)		/* o loop � executado, a vari�vel �n� � multiplicada por �fat�, ent�o temos �fat = n� e a cada itera��o 1 unidade � subtra�da do n�mero escolhido at� que ele seja igual � 1, ou seja, a vari�vel �fat� � multiplicada a cada itera��o pelo antecessor do n�mero escolhido. */
							fat = fat * nn;
 
							printf("\nFatorial calculado: %d", fat);
					
			_sleep (1250);
			break;
			
		case 5:
			
		system ("CLS||CLEAR");		
		printf("\n5. Calcula o valor de x elevado a y.\n\n");
		int res;
						printf("Informe a base: ");   // base 
    					scanf("%d", &x);
 	
    					printf("\nInforme o expoente: ");   // expoente 
    					scanf("%d", &y);
    					
    					res=x;
    					for(i=1; i<y; i++){		// calculo da potencia
    						res*=x;
						}
 
    					printf("\nO resultado: %d",res);
    					_sleep (1250);
		
					break;
			
		case 6:
			
		system ("CLS||CLEAR");		
		printf("\n6. Calcula a m�dia de n n�meros inseridos.\n\n");
			
			 do{
   						printf("Insira o valor a ser considerado para a media (0 para terminar) : ");
   						scanf("%f",&m);		// aqui usuario vai inserir a quantidade de numeros ate digitar 0 para sair
   						

       								somamedia += m;
       								quant++;
     	
   							
 			}while (m > 0);  // aqui est� a condi��o para sair do programa

 					printf("A media dos valores inseridos e : %.2f\n", somamedia/(quant-1));		// resultado da media � soma dos numeros dividido pelo quantidade de numeros digitados
 					_sleep (1250);

			break;
			
		case 7:
			
		system ("CLS||CLEAR");		
		printf("\n7. Calcula m�ximo divisor comum entre dois n�meros.");
			int n1;  
		    int n2; 
   			int mdc; //armazena os valores possiveis de mdc
			int divisor; //divisor dos numeros

		 	printf("\nDigite o primeiro numero: ");
		 	scanf ("%d", &n1);
  
		    printf("Digite o segundo numero: ");
			scanf ("%d", &n2);


   			divisor = 1;
		    while (divisor <= n1 && divisor <= n2){
			if (n1 % divisor == 0 && n2 % divisor == 0){
	            mdc = divisor;                
    		}
   		    divisor++;
    		}

  			printf("MDC = %d\n", mdc);
  			_sleep (1250);
			break;
			
		case 8:
		{
		system ("CLS||CLEAR");	
		printf("\n8. Uma calculadora com soma, subtra��o, multiplica��o e divis�o. Guardando valor uma para pr�xima opera��o.");
			int option, sub;
			float result=0;
			float number;
	
	
			do{
				printf("\nCalculadora\n1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n0-Sair\n\n");
				scanf("%d", &option);
		
				while(option<0 || option>4){
					printf("************Opcao Invalida***********\n");
					printf("Calculadora\n1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n0-Sair\n\n");
					scanf("%d", &option);
				}
		
				if(option==1){
					printf("%0.3f + ", result);
					scanf("%f", &number);
					result+=number;
					printf("Resultado: %0.3f\n\n", result);
					printf("1-Manter Resultado\n2-Zerar Resultado: ");
					scanf("%d", &sub);
					while(sub<1 || sub >2){
						printf("Opcao Invalida\n1-Manter Resultado\n2-Zerar Resultado: ");
						scanf("%d", &sub);
					}
					if(sub==2){
						result=0;
					}
			
				}else if(option==2){
					printf("%0.3f - ", result);
					scanf("%f", &number);
					result-=number;
					printf("Resultado: %0.3f\n\n", result);
					printf("1-Manter Resultado\n2-Zerar Resultado: ");
					scanf("%d", &sub);
					while(sub<1 || sub >2){
						printf("Opcao Invalida\n1-Manter Resultado\n2-Zerar Resultado: ");
						scanf("%d", &sub);
					}
					if(sub==2){
						result=0;
					}
					
				}else if(option==3){
					printf("%0.3f / ", result);
					scanf("%f", &number);
					result/=number;
					printf("Resultado: %0.3f\n\n", result);
					printf("1-Manter Resultado\n2-Zerar Resultado: ");
					scanf("%d", &sub);
					while(sub<1 || sub >2){
						printf("Opcao Invalida\n1-Manter Resultado\n2-Zerar Resultado: ");
						scanf("%d", &sub);
					}
					if(sub==2){
						result=0;
					}
					
				}else if(option==4){
					printf("%0.3f * ", result);
					scanf("%f", &number);
					result*=number;
					printf("Resultado: %0.3f\n\n", result);
					printf("1-Manter Resultado\n2-Zerar Resultado: ");
					scanf("%d", &sub);
					while(sub<1 || sub >2){
						printf("Opcao Invalida\n1-Manter Resultado\n2-Zerar Resultado: ");
						scanf("%d", &sub);
					}
					if(sub==2){
						result=0;
					}
				}
		
			}while(option!=0);
			_sleep(1250);
		}
		break;
		
		
		case 9:
		{
		system ("CLS||CLEAR");	
		printf("\n9. Calcula a diferen�a entre duas datas em anos, meses e dias.\n\n");
		
			int dia1, dia2, mes1, mes2, ano1, ano2;
			int cont=0; // contador intermediario de dias
			int contmes=0; //contador intermedi�rio de mes
			int contano=0; //contador intermedi�rio de ano
			int dia, mes, ano; // contador final dos dias meses e anos
	
			printf("Insira a primeira data, dia/mes/ano serapado por espacos: ");
			scanf("%d%d%d", &dia1, &mes1, &ano1);
			printf("Insira a segunda data, dia/mes/ano serapado por espacos: ");
			scanf("%d%d%d", &dia2, &mes2, &ano2);
	
			if(mes1!=mes2){
				while(mes1!=mes2){ //Contar a difere�a de meses e os dias
					if(mes1==12){
						mes1=0;
					}
					mes1++;
					contmes++;
				}
			}
		
			if(mes1==mes2){ //Contar os dias, se os meses forem iguais
				while(dia1!=dia2){
					if(mes1==1 && dia1==31){
						dia1=0;
					}else if(mes1==2){
						if(ano1%400==0 && dia1==29){
							dia1=0;
						}else if(ano1%4==0 && ano1%100!=0 && dia1==29){
							dia1=0;
						}else if(ano1%400!=0 && dia1==28){
							dia1=0;
						}
					}else if(mes1==3 && dia1==31){
						dia1=0;
					}else if(mes1==4 && dia1==30){
						dia1=0;
					}else if(mes1==5 && dia1==31){
						dia1=0;
					}else if(mes1==6 && dia1==30){
						dia1=0;
					}else if(mes1==7 && dia1==31){
						dia1=0;
					}else if(mes1==8 && dia1==31){
						dia1=0;
					}else if(mes1==9 && dia1==30){
						dia1=0;
					}else if(mes1==10 && dia1==31){
						dia1=0;
					}else if(mes1==11 && dia1==30){
						dia1=0;
					}else if(mes1==12 && dia1==31){
						dia1=0;
					}
					dia1++;
					cont++;
				}
			}
	
	
			if(ano1!=ano2){ //contar os anos e os meses se o dia e o mes for igual
				while(ano1!=ano2){
					ano1++;
					contano++;
				}
			}

			printf("\n\nDiferenca de tempo das datas:\n%d Ano(s), %d Mes(es), %d Dia(s)", contano, contmes, cont);
			_sleep(1250);
		}
		break;
			
			
		case 10:
		{
		system ("CLS||CLEAR");	
		printf("\n10. Converta um valor inteiro decimal para n�mero romano.\n\n");
		
			int num; //num dado em decimal
		 	char *romanos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"}; //Dados dos n�meros romanos
			int decimais[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000}; //N�meros decimais que ser�o correspondentes aos s�mbulos romanos
		    int transf; //trasnforma��o de decimais para romano

        
		    printf("Digite o numero em Decimal: ");
		    scanf("%d", &num);
    
   			 while(num<=0){
   			 	printf("Numero invalido\nSomente numeros maiores que ZERO\nDigite o num em Decimal: ");
   			 	scanf("%d", &num);
			}
        
    	   
    		transf = (sizeof(decimais) / sizeof(decimais[0])) - 1;
    		while (num > 0) {
        		if (num >= decimais[transf]) {
  	 	  	       printf("%s", romanos[transf]);
    	    	    num -= decimais[transf];
  		      	} else {
        	    	transf--;
	        	}
	    	}
	   		printf("\n");
	   		_sleep(1250);
		
		}
		break;
			
			
		case 11:
		{
		system ("CLS||CLEAR");	
		printf("\n11. Uma ferramenta interessante escolhida pelo grupo.");
			int n;
			float xA,xB,yA,yB,dist,resultado;

	  
			printf("Digite o primeiro ponto: (x1 , y1):\n");
			scanf("%f %f",&xA, &yA);
			printf("Digite o segundo ponto: (x2 , y2):\n");
			scanf("%f %f",&xB, &yB);
	
			dist= ((xB-xA)*(xB-xA)) + ((yB-yA)*(yB-yA));  // calcula a distancia em a raiz

		  	float recorre = dist;
	   
		    for (n = 0; n < 10; ++n) // tira a raiz da variavel dist
    		      recorre = recorre/2 + dist/(2*recorre);
	
		
			printf("Pontos ( %f %f) e ( %f %f)\n", xA,yA,xB,yB);	
			printf("Distancia e: %.4f",recorre);
			_sleep(1250);	
		
		break;
		}
		
		default:
			printf("\n\n\t\tPROGRAMA FINALIZADO!");
	}
		}while(menu > 0);
	

}
