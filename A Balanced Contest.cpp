#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, num_problemas, resul, participantes, cont1=0, cont2=0;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &num_problemas, &participantes);
		
		while(num_problemas--){
			scanf("%d", &resul);
			
			if(resul <= participantes / 10)
				cont1++;
			
			else if(resul >= participantes / 2 )
				cont2++;
		}
		(cont1 == 2 && cont2 == 1) ? printf("yes\n") : printf("no\n");
		
		cont1=cont2=0;
	}
	return 0;
}
