#include <cstdio>
#include <climits>

using namespace std;

int main(){
	int casos, num_billetes, billetes, valor_min, dulce, total_dinero=0, respuesta;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &num_billetes, &dulce);
		
		valor_min=INT_MAX;
		
		for(int i=0; i<num_billetes; i++){
			scanf("%d", &billetes);
			
			if(valor_min > billetes)
				valor_min=billetes;
			
			total_dinero+=billetes;
		}
		respuesta = total_dinero / dulce;
		
		((total_dinero-valor_min)/dulce == respuesta) ? printf("-1\n") : printf("%d\n", respuesta);
		
		total_dinero=0;
	}

	return 0;
}
