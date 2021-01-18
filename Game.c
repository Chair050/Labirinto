#include<stdio.h>

int main(){
	system("Color f0 && title Game");
  int x=223,d=0,w=0,s=0,a=0,i;
  char movi;
  printf("\n%c\n",x);
  menu:movi=getch();
  movi=tolower(movi);
	switch(movi){
    case 'd':
			system("cls");
			for(i=0;i<s;i++){
				printf("\n");
			}
			for(i=0;i<d;i++){
				printf(" ");
      }
			for(i=0;i<a;i++){
				printf("\b");
			}
      printf("%c",x);
      d++;
      goto menu;
    case 's':
			system("cls");
      for(i=0;i<s;i++){
        printf("\n");
      }
			for(i=0;i<d;i++){
				printf(" ");
      }
			for(i=0;i<a;i++){
				printf("\b");
			}
      printf("%c",x);
      s++;
      goto menu;
		case 'a'://<--Non funziona
			system("cls");
			for(i=0;i<a;i++){
				printf("\n");
			}
			for(i=0;i<d;i++){
				printf(" ");
      }
			for(i=0;i<a;i++){
				printf("\b");
			}
			printf("%c",x);
			a++;
			goto menu;
		case 'w':
			for(i=0;i<w;i++){
				//Cosa scrivere?
			}
    default:
			printf("%c",x);
			goto menu;
  }
}
