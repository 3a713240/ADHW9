#include<stdio.h>
#include<stdlib.h>


int main(void){

int m,d,s;
printf("��J���:");
scanf("%d",&m);
printf("��J���:");
scanf("%d",&d);
s=(m*2+d)%3;
if(s>=0&&s<1){
	printf("���q");
	
}
else if(s>=1&&s<2){
	printf("�N");
}
else{

	printf("�j�N");
}












}

