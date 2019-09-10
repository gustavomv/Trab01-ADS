#include <stdio.h>
#include <time.h>
#include <omp.h>

int main() {
    double start, end;
    double runTime;
    start = clock();
    int num = 1,primes = 0;

    int limit = 1000000;
	
    FILE *fp;
    fp = fopen("arq1.txt", "w+");

#pragma omp parallel for schedule(dynamic) reduction(+ : primes)
    for (num = 1; num <= limit; num++) {
        int i = 2;
        while(i <= num) {
            if(num % i == 0)
                break;
            i++;
        }
        if(i == num)
            primes++;
//      fprintf(fp, "%d prime numbers calculated\n",primes);
    }

    end = clock();
    runTime = (start - end) / CLOCKS_PER_SEC;
    fprintf(fp, "This machine calculated all %d prime numbers under %d in %g seconds\n",primes,limit,runTime);

    return 0;
}
