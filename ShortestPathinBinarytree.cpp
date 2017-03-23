#include <cstdio>

using namespace std;

int main(){
	int a, b, casos, i, cont=0;;
	scanf ("%d", &casos);
		for (i=0; i<casos; i++){
		scanf ("%d %d", &a, &b);
while (a!=b){
		if (a>b)
			a/=2;
		
		else b/=2;
cont++;
}
printf ("%d\n", cont);
cont=0;
}

	return 0;
}