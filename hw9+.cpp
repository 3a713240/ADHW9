#include<stdio.h>
#include<stdlib.h>


int main(void){

int m,d,s;
printf("輸入月份:");
scanf("%d",&m);
printf("輸入日期:");
scanf("%d",&d);
s=(m*2+d)%3;
if(s>=0&&s<1){
	printf("普通");
	
}
else if(s>=1&&s<2){
	printf("吉");
}
else{

	printf("大吉");
}












}

