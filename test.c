#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
int main(){
	int i,j,n;
	int flag=1;
	A[][MAX]={"Vaporeon", "Jolteon","Flareon", "Espeon", "Umbreon", "Leafeon", "Glaceon", "Sylveon"};
	char B[MAX];
	scanf("%d",&n);
	scanf("%s",B);
	if(n==6)
	printf("Espeon");
	if(n==8)
	printf("Vaporeon");
	for(i=0;i<6;i++)
	{
		flag=1;
		for(j=0;j<n;j++)
		{
			if(B[j]=='0')
			continue;
			
			if(A[i][j]!=B[j])
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			printf("%s",A[i]);
			break;
			
		}
		
	}
	
	
	
}
