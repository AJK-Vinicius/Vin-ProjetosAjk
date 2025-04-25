#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int id, id2012, anon, anoa;
	id2012=2012;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &anon);
	printf("Digite o ano atual: ");
	scanf("%d", &anoa);
	
	id=anoa-anon;
	id2012= (id2012-anoa)+id;
	
	printf("\nSua idade: %d",id);
	printf("\nSua idade em 2012: %d", id2012);
	
	return 0;
}
