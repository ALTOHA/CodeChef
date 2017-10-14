#include <bits/stdc++.h>

using namespace std;

int main(){
	map <char, int> hash;
	map <char, int> :: iterator it;
	
	int casos, tamano1, tamano2, cont=0, arr[200], ascii, i, j;
	char joyas[100], piedras[100];
	
	scanf("%d", &casos);
	
	while(casos--){
		
		fill(arr, arr+200, 0);		
		
		scanf("%s %s", joyas, piedras);
		
		tamano1 = strlen(joyas);
		tamano2 = strlen(piedras);	
		
		for(i=0; i<tamano1; i++){
			hash[joyas[i]] = 1;
		}
		
		for(it = hash.begin(); it != hash.end(); it++){
			for(j=0; j<tamano2; j++){
				
				if((it->first) == piedras[j])
					cont++;
			}
		}
		
		printf("%d\n", cont);
		cont = 0;
		hash.clear();
	}
	
	return 0;
}
