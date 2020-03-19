#include <stdio.h>
#include <stdbool.h>

int main(void)
 {
	int n;
	while(true)
	{
		scanf("%d",&n);
		printf("%d\n",n);
		fflush(stdout);
		if(n == 42)
		break;
	}
	return 0;
}
