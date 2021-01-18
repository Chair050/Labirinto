#include<stdio.h>

int main(){
	system("Color f0 && title Game");
  int x=223,d=0,i,a=0;
  char mov;
  printf("\n%c\n",x);
  menu:mov=getch();
  mov=tolower(mov);
  switch(mov){
    case 'd':
      system("cls");
      for(i=0;i<d;i++){
        printf(" ");
      }
      printf("%c",x);
      d++;
      goto menu;
    case 's':
      system("cls");
      for(i=0;i<a;i++){
        printf("\n");
      }
      printf("%c",x);
      a++;
      goto menu;
    default:
      system("cls");
  }

}
