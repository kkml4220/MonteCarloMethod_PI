#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10000

int main(void)
{
    int cnt = 0;

    srand((unsigned int)time(NULL));
    for (int i = 0; i < N; i++)
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;

        if ((x * x + y * y) <= 1.0)
            cnt += 1;
    }
    printf("円周率 : %lf\n", ((double)cnt / N) * 4.0);
}
