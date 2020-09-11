#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (){

 short m, n, i, j;
 bool escorreu = true;
	scanf ("%hd %hd ", &n, &m);
	char Parede [n][m+1];
	for (i = 1; i <= n; i++){
		scanf ("%s", Parede [i]);
		Parede [i][m] = 0;
	}
	while (escorreu){
		escorreu = false;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				if (Parede [i][j] == 'o'){
					if (i < n-1){
						if (Parede [i+1][j] == '.'){
							Parede [i+1][j] = 'o';
							escorreu = true;
						}else 
							if (Parede [i+1][j] == '#'){
								if (Parede [i][j+1] == '.'){
									Parede [i][j+1] = 'o';
									escorreu = true;
								}
								if (Parede [i][j-1] == '.'){
									Parede [i][j-1] = 'o';
									escorreu = true;
								}
							}
					}
				}
	}
	for (i = 0; i < n; i++)
		printf("%s\n", Parede[i]+1);

 return 0;
}
