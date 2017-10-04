#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
int casos, num_piezas;
 
scanf("%d", &casos);
 
while(casos--){
    scanf("%d", &num_piezas);
 
 
    (360 % num_piezas == 0) ? printf("y ") : printf("n ");
 
    (num_piezas > 360) ? printf("n ") : printf("y ");
    
    ((num_piezas*(num_piezas+1))/2 <= 360) ? printf("y\n") : printf("n\n");
    
    
}
 
return 0;
} 