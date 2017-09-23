#include <cstdio>
#include <iostream>

using namespace std;
	
int main(){
	unsigned long long int valor;
	cin>>valor;
	
		(valor == 1 || (valor%6 == 0) || ((valor-3)%6==0) || ((valor-1)%6==0)) ? printf("yes\n") : printf("no\n");
	
	return 0;
}
