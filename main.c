#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,Number,Mask,Value,Inverse[31];    //����,��J��,���k��ƭ�,�l�ƭ�,�|���A�˭� 
	printf("32�줸10�i����2�i���ഫ��,�п�J�@ 10�i����: ");
	scanf("%d",&Number);
	  for(i=0;i<=31;i++){
		Mask=Number/2;       //���o���k���ƭ� 
		Value=Number%2;      //���ᰣ�k��l�ƭ� 
		Number=Mask;         //�N���k�����ƭȩԦ^Mask�~��U�@�찣�k 
		Inverse[i]=Value;    //�N���G�s�i�}�C(�|���A�˭�) 
	}
	printf("\n");
	printf("�ഫ���G: ");
	  for(i=31;i>=0;i--)     //�N�B�⵲�G�Y���A�˨��o���T�ƭ� 
	    printf("%d",Inverse[i]);
	return 0;
}
