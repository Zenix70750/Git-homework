#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,Number,Mask,Value,Inverse[31];    //次數,輸入值,除法整數值,餘數值,尚未顛倒值 
	printf("32位元10進制轉2進制轉換器,請輸入一 10進制整數: ");
	scanf("%d",&Number);
	  for(i=0;i<=31;i++){
		Mask=Number/2;       //取得除法後整數值 
		Value=Number%2;      //取後除法後餘數值 
		Number=Mask;         //將除法完後整數值拉回Mask繼續下一位除法 
		Inverse[i]=Value;    //將結果存進陣列(尚未顛倒值) 
	}
	printf("\n");
	printf("轉換結果: ");
	  for(i=31;i>=0;i--)     //將運算結果頭尾顛倒取得正確數值 
	    printf("%d",Inverse[i]);
	return 0;
}
