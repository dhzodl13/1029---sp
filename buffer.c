#include <stdio.h>

void main(){
	int i,j,n,m;
	char c;
	printf("반복할 수 입력 : ");
	scanf("%d",&n);
	for(i=0; i<=n; i++){
		printf("반복할 문자와 반복할 수 입력 : ");
	        fflush(stdin);
		scanf("%c %d",&c,&m);
		for(j=1;j<=m;j++){
			printf("%c",c);
		}
	}
}

