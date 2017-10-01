#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	map <int, int> copy;
	map <int, int> ::iterator it;
	int casos, tam_arr, valor;
	
	scanf("%d", &casos);
	
	while(casos--){
		
		scanf("%d", &tam_arr);
			
			for(int i=0; i<tam_arr; i++){
				scanf("%d", &valor);
				
				copy[valor] = 1;
			
			}
			
			printf("%d\n", copy.size());
			copy.clear();
			

	}
	
	return 0;
} 
