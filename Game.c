#include<stdio.h>
#include<stdlib.h>
/*I Comandi Commentati cioè
-//FILE*v=fopen("Game Output.txt","w");
-//fprintf(...);
-//fclose(...);
Sono comandi per il debug cioè per stampare su un file txt le coordinate e il tasto premuto

la funzione GenOstacolo dovrebbe far ritornare a 0 il cursore in questo modo non è condizionato al movimento del cubo

Lista Funzioni:
-GenOstacolo
		Genera l'ostacolo(al momento non funzionante)
-ConOstacolo
		Fa un controllo se l'utente ha raggiunto l'ostacolo(funzionante)


DA-FARE:
-Sitemare la funzione GenOstacolo
-Avere un'idea generale di cosa deve fare il gioco

????????
Rifare tutto il codice da capo
*/
void GenOstacolo(){//<--Da sistemare(Bugga il movimento)
	int i,z=1;
	for(i=0;i<10;i++){
		printf("\n");
	}
	for(i=0;i<10;i++){
		printf(" ");
	}
	printf("%c",z);

}

void ConOstacolo(Xpos,Ypos){
	if(Xpos==10 && Ypos==10){
		printf("\n---------------------------\n");
		printf("        GAME OVER          \n");
		printf("---------------------------\n");
		//fclose(v);
		exit(0);
	}
}

int main(){
	system("Color f0 && title Game");
	//FILE*v=fopen("Game Output.txt","w");
  int x=223,d=0,w=0,s=0,a=0,i;
  int Xpos=0,Ypos=0;
  char movi;
  do{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tWELCOME BACK TO THE MOVING!A GAME ON MOVING\n");
	printf("\t\t\t\t\t\t\t PRESS ENTER TO START or ESC to exit   \n");
	movi=getch();
  }while(!(movi==13 || movi==27));
  if(movi==27){
	exit(0);
  }
  system("cls");
	printf("%c",x);
  menu:movi=getch();
  movi=tolower(movi);
	//fprintf(v,"\nCommand :%c\t",movi);
	switch(movi){
    case 'd':
    		Xpos=0;
	    	Ypos=0;
				d++;
				system("cls");

				for(i=0;i<(s-w);i++){
					printf("\n");
				}
				for(i=0;i<d;i++){
					printf(" ");
	      		}
				for(i=0;i<a;i++){
					printf("\b");
				}
				printf("%c",x);
				Ypos+=(s-w);
				Xpos+=(d-a);
				GenOstacolo();
				ConOstacolo(Xpos,Ypos);
				//fprintf(v,"Coord. X: %d Y:%d",Xpos,Ypos);
     		goto menu;
    case 's':
				Xpos=0;
				Ypos=0;
				s++;
				system("cls");
				for(i=0;i<(s-w);i++){
					printf("\n");
				}
				for(i=0;i<d;i++){
					printf(" ");
						}
				for(i=0;i<a;i++){
					printf("\b");
				}
				printf("%c",x);
				Ypos+=(s-w);
				Xpos+=(d-a);
				GenOstacolo();
				//fprintf(v,"Coord. X: %d Y:%d",Xpos,Ypos);
	      goto menu;
		case 'a':
			Xpos=0;
			Ypos=0;
			a++;
			system("cls");
			for(i=0;i<(s-w);i++){
				printf("\n");
			}
			for(i=0;i<d;i++){
				printf(" ");
					}
			for(i=0;i<a;i++){
				printf("\b");
			}
			printf("%c",x);
			Ypos+=(s-w);
			Xpos+=(d-a);
			GenOstacolo();
			//fprintf(v,"Coord. X: %d Y:%d",Xpos,Ypos);
			goto menu;
		case 'w':
			Xpos=0;
			Ypos=0;
			w++;
			system("cls");
			for(i=0;i<(s-w);i++){
				printf("\n");
			}
			for(i=0;i<d;i++){
				printf(" ");
					}
			for(i=0;i<a;i++){
				printf("\b");
			}
			printf("%c",x);
			Ypos+=(s-w);
			Xpos+=(d-a);
			GenOstacolo();
			//fprintf(v,"Coord. X: %d Y:%d",Xpos,Ypos);
			goto menu;
		case 27:
			exit(0);
    default:
			printf("debug: Xpos: %d Ypos: %d",Xpos,Ypos);
			goto menu;
  }
}
