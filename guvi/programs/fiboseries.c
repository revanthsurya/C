#include <stdio.h>
int main(void) {
int n, t1 = 0, t2 = 1, n1;
scanf("%d", &n);
for (int i = 1; i <= n; ++i)
    {
        n1 = t1 + t2;
        t1 = t2;
        t2 = n1;
        printf("\n %d ", t1);
    }
return 0;
}
