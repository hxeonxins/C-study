#include <stdio.h>

int main() {
	char s[100];
	int i = 0, j = 0, k = 0;
	gets_s(s);
	while (s[i] != '\n0') {
		
		if (s[i] >= '0' && s[i] <= '9')
			j++;
		if (s[i] != ' ')
			k++;
		i++;
	}
	printf("%d \n", i);
	
	return 0;
}