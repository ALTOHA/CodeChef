#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> minutos;
	map <int, int> :: iterator it;
	int casos, num_arboles, manzanas;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &num_arboles);
		
		for(int i=0; i<num_arboles; i++){
			scanf("%d", &manzanas);
			
			minutos[manzanas] = 1;
		}
		
		printf("%d\n", minutos.size());
		minutos.clear();
	}
	return 0;
}
