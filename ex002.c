#include <stdio.h>

int main() {
char chara;
printf("donner un chara :");
scanf("%c",&chara);
switch(chara){
case 'a':
case 'i':
case 'o':
case'u':
case 'e':
    printf("voyelle");
    break;
default:
    printf("non");
    break;




}

    return 0;
}



