#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, i, j, primos[3000], primer, segundo, tecero;
	
	fill(primos, primos+3000, 0);
	
	primos[1] = 1;

	for(i=2; i<=3000; i++){
		if(primos[i] == 0){
			primos[i] = 2;
			
			for(j=i*2; j<= 3000; j+=i)
				primos[j] = 1;
			
		}
	}
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &primer, &segundo);
		
		for(i=primer + segundo + 1; i<=3000; i++){
			if(primos[i] == 2){
				printf("%d\n", i - (primer+segundo));
				break;
			}
		}
	}
	
	return 0;
}
