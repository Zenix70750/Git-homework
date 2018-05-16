#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,number,mask,value,inverse[31];    //次數,輸入值,除法整數值,餘數值,未顛倒值 
	printf("32位元10進制轉2進制轉換器,請輸入一 10進制整數: ");
	scanf("%d",&number);
	  for(i=0;i<=31;i++){
		mask=number/2;       //取得除法後整數值 
		value=number%2;      //取後除法後餘數值 
		number=mask;         //將除法完後整數值拉回mask繼續下一位除法 
		inverse[i]=value;    //將結果存進陣列 
	}
	printf("\n");
	printf("轉換結果: ");
	  for(i=31;i>=0;i--)     //將運算結果頭尾顛倒取得正確數值 
	    printf("%d",inverse[i]);
	return 0;
}
