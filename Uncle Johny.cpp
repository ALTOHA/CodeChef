#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int casos, num_canciones, i, canciones[105], preferida, valor;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &num_canciones);
		
		for(i=0; i<num_canciones; i++){
			scanf("%d", &canciones[i]);	
		}
		
		scanf("%d", &preferida);
		
		valor=canciones[preferida-1];
		sort(canciones, canciones+i);
		
		for(i=0; i<num_canciones; i++){
		
			if(valor == canciones[i])
				printf("%d\n", i+1), i=num_canciones+1;
	
		}		
	}	
	return 0;
}
