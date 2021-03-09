#include <stdio.h>
#include <math.h>
//The Collatz conjecture is a conjecture in mathematics that concerns a sequence defined as follows: start with any positive integer n. 
//Then each term is obtained from the previous term as follows: if the previous term is even, the next term is one half of the previous term. 
//If the previous term is odd, the next term is 3 times the previous term plus 1. 
//The conjecture is that no matter what value of n, the sequence will always reach 1.
void main()
{   
	int i, answer, steps;
	double n, peak, result;
	
	while (1) {
		steps=0;
		peak=1;
		printf("For testing Collatz Conjecture, please enter any positive integer to start with: "); scanf("%lf", &n);
		printf("\n\nThe sequence for n = %.0lf is:\n\n", n);	
			while (1) {
				printf(" %.0lf -", n);
					steps++;
					if (n>peak) peak=n;
                    result=fmod(n, 2);
					if (result==0) n=n/2;
						else n=3*n+1;
					if (n==1) { printf(" %.0lf", n); break;}
						}		
		printf("\n\n");	
		printf("This sequence takes %d steps, climbing to a high of %.0lf before descending to 1!", steps, peak);
		printf("\n\n\n");
		again:	
		printf("Would you like to try again? <Yes: 1, No: 0> "); scanf("%d", &answer);
			if (answer==0) break;
				else if (answer!=1) {
					printf("Invalid code entered!!!\n\n"); goto again;
					}
		printf("\n\n");	
	}
	printf("\n\n");	
	system("PAUSE");
}