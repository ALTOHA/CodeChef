#include <cstdio>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int main(){
	int casos, num_caballos, dif_min=INT_MAX, caballos[5005], i;
	
	scanf("%d", &casos);
	
	while(casos--){
	
		dif_min=INT_MAX;
		
		scanf("%d", &num_caballos);	
			
			for(i=0; i<num_caballos; i++){
				scanf("%d", &caballos[i]);
			}
			
			sort(caballos, caballos+i);
			
			for(i=0; i<num_caballos; i++){
			
				if(i!=0){
				
					if(abs(caballos[i]-caballos[i-1]) < dif_min)
						dif_min= abs(caballos[i]-caballos[i-1]);
				
				}
			}
			
			printf("%d\n", dif_min);
	
	}
	
	return 0;
}
