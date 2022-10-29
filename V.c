#include <stdio.h>

int main()
{
   int n, t=1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d %d %d PUM\n", t, t+1, t+2);
		t += 4;
	}

    return 0;
}
