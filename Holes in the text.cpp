#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, tamano, i, cont=0;
	char palabra[100];
	
	scanf("%d", &casos);
	
	while(casos--){
		
		scanf("%s", palabra);
		tamano=strlen(palabra);
		
		for(i=0; i<tamano; i++){
			if(palabra[i] == 'B')
				cont+=2;
			if(palabra[i] == 'A' || palabra[i] == 'R' || palabra[i] == 'O' || palabra[i] == 'P' || palabra[i] == 'D' || palabra[i] == 'Q')
				cont++;
		}
		
		printf("%d\n", cont);
		cont=0;
		
	}
	
	return 0;
}
