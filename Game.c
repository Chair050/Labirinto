#include<stdio.h>


int main(){
	system("Color f0 && title Game");
  int x=223,d=0,w=0,s=0,a=0,i;
  int Xpos=0,Ypos=0;
  char movi;
  do{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tWELCOME BACK TO THE MOVING!A GAME ON MOVING\n");
	printf("\t\t\t\t\t  PRESS ENTER TO START or ESC to exit   \n");
	movi=getch();
  }while(!(movi==13 || movi==27));
  if(movi==27){
	exit(0);
  }
  system("cls");
  menu:movi=getch();
  movi=tolower(movi);
	switch(movi){
    case 'd':
    		Xpos=0;
    		Ypos=0;
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
     		d++;
     		goto menu;
    case 's':
			Xpos=0;
    		Ypos=0;
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
			Ypos+=(s-w);
			Xpos+=(d-a);
			printf("%c",x);
	      s++;
	      goto menu;
		case 'a':
			Xpos=0;
    		Ypos=0;
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
			Ypos+=(s-w);
			Xpos+=(d-a);
			printf("%c",x);
			a++;
			goto menu;
		case 'w':
			Xpos=0;
    		Ypos=0;
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
			w++;
			goto menu;
		case 27:
			exit(0);
    default:
			printf("debug: Xpos: %d Ypos: %d",Xpos,Ypos);
			if(Xpos==10 && Ypos==10){
				printf("\n---------------------------\n");
				printf("        GAME OVER          \n");
				printf("---------------------------\n");
				exit(0);
			}
			goto menu;
  }
}/*
int main(){
	printf("%d",getch());
}*/
