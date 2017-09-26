#include <cstdio>
#include <ctype.h>
#include <cstring>

using namespace std;

int main(){
	int casos, tamano, i, ascii=0;
	char palabra[150], byteland[150];

	scanf("%d %s", &casos, byteland);

	while(casos--){
		scanf("%s", palabra);

		tamano = strlen(palabra);
		
		for(i=0; i<tamano; i++){
			if(palabra[i]>='A' && palabra[i]<='Z')
				ascii=palabra[i] - 65;
			else if(palabra[i]>='a' && palabra[i] <= 'z')
				ascii = palabra[i] - 97;

			if((palabra[i] >= 'A' && palabra[i] <= 'Z') && (byteland[ascii] >= 'a' && byteland[ascii] <= 'z'))
				printf("%c",toupper(byteland[ascii]));
			else if(palabra[i] >= 'a' && palabra[i] <= 'z' && byteland[ascii]>='A' && byteland[ascii] <= 'Z')
				printf("%c",tolower(byteland[ascii]));
			
			else if(palabra[i] == '_')
				printf(" ");

			else if(palabra[i] == '?')
				printf("?");

			else if(palabra[i] == ',')
				printf(",");

			else if(palabra[i] == '.')
				printf(".");

			else if(palabra[i] == '!')
				printf("!");
			else
				printf("%c", byteland[ascii]);
		}
		printf("\n");

	}
return 0;
}