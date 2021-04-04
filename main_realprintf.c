#include <stdio.h>

int	main()
{
	int i = -45;
	int *p;
	p = &i;

	int n = -23456;
	int f = 23456;
	int max = 2147483647;
	unsigned int umax =  4294967295;

	printf("\n------\n");
	printf("------ les INT D AVEC NB POS -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%d|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2d|,  |%-7.8d|, |%-9.7d|, |%-2.8d|, |%-8.2d|, |%-25.25d|, |%-35.25d|, |%-25.35d|, |%-.d|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2d|, |%-5d|, |%-8d|, |%-20d|, |%-d|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2d|, |%07.8d|, |%010.7d|, |%02.8d|, |%08.2d|, |%025.25d|, |%035.25d|, |%025.35d|, |%0.d|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2d|, |%0.5d|, |%0.8d|, |%0.20d|, |%0.d|", f, f, f, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2d|, |%.5d|, |%.8d|, |%.20d|, |%-d|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02d|, |%05d|, |%08d|, |%021d|, |%0d|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2d|, |%5d|, |%8d|, |%20d|, |%d|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2d|,|%7.8d|, |%10.7d|, |%2.8d|, |%8.2d|, |%25.25d|,  |%35.25d|, |%25.35d|, |%.d|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n------\n");
	printf("------ INT MAX D -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%d|", max);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2d|,  |%-7.8d|, |%-9.7d|, |%-2.8d|, |%-8.2d|, |%-25.25d|, |%-35.25d|, |%-25.35d|, |%-.d|", max, max, max, max, max, max, max, max, max);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2d|, |%-5d|, |%-8d|, |%-20d|, |%-d|", max, max, max, max, max);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2d|, |%07.8d|, |%010.7d|, |%02.8d|, |%08.2d|, |%025.25d|, |%035.25d|, |%025.35d|, |%0.d|", max, max, max, max, max, max, max, max, max);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2d|, |%0.5d|, |%0.8d|, |%0.20d|, |%0.d|", max, max, max, max, max);
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2d|, |%.5d|, |%.8d|, |%.20d|, |%-d|", max, max, max, max, max);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02d|, |%05d|, |%08d|, |%021d|, |%0d|", max, max, max, max, max);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2d|, |%5d|, |%8d|, |%20d|, |%d|", max, max, max, max, max);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2d|,|%7.8d|, |%10.7d|, |%2.8d|, |%8.2d|, |%25.25d|,  |%35.25d|, |%25.35d|, |%.d|", max, max, max, max, max, max, max, max, max);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT D AVEC NB NEG -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%d|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2d|,  |%-7.8d|, |%-9.7d|, |%-2.8d|, |%-8.2d|, |%-25.25d|, |%-35.25d|, |%-25.35d|, |%-.d|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2d|, |%-5d|, |%-8d|, |%-20d|, |%-d|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2d|, |%07.8d|, |%010.7d|, |%02.8d|, |%08.2d|, |%025.25d|, |%035.25d|, |%025.35d|, |%0.d|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2d|, |%0.5d|, |%0.8d|, |%0.20d|, |%0.d|", n, n, n, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2d|, |%.5d|, |%.8d|, |%.20d|, |%-d|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02d|, |%05d|, |%08d|, |%021d|, |%0d|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2d|, |%5d|, |%8d|, |%20d|, |%d|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2d|,|%7.8d|, |%10.7d|, |%2.8d|, |%8.2d|, |%25.25d|,  |%35.25d|, |%25.35d|, |%.d|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT D AVEC NB POS ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%d|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*d|,  |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-.d|", 4, 2, f, 7, 8, f, 9, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*d|, |%-*d|, |%-*d|, |%-*d|, |%-d|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0.d|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*d|, |%0.*d|, |%0.*d|, |%0.*d|, |%0.d|", 2, f, 5, f, 8, f, 20, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*d|, |%.*d|, |%.*d|, |%.*d|, |%-d|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*d|, |%0*d|, |%0*d|, |%0*d|, |%0d|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*d|, |%*d|, |%*d|, |%*d|, |%d|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*d|,|%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|,  |%*.*d|, |%*.*d|, |%.d|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT MAX ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%d|", max);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*d|,  |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-.d|", 4, 2, max, 7, 8, max, 9, 7, max, 2, 8, max, 8, 2, max, 25, 25, max, 35, 25, max, 25, 35, max, max);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*d|, |%-*d|, |%-*d|, |%-*d|, |%-d|", 2, max, 5, max, 8, max, 20, max, max);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0.d|", 4, 2, max, 7, 8, max, 10, 7, max, 2, 8, max, 8, 2, max, 25, 25, max, 35, 25, max, 25, 35, max, max);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*d|, |%0.*d|, |%0.*d|, |%0.*d|, |%0.d|", 2, max, 5, max, 8, max, 20, max, max);
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*d|, |%.*d|, |%.*d|, |%.*d|, |%-d|", 2, max, 5, max, 8, max, 20, max, max);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*d|, |%0*d|, |%0*d|, |%0*d|, |%0d|", 2, max, 5, max, 8, max, 20, max, max);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*d|, |%*d|, |%*d|, |%*d|, |%d|", 2, max, 5, max, 8, max, 20, max, max);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*d|,|%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|,  |%*.*d|, |%*.*d|, |%.d|", 4, 2, max, 7, 8, max, 10, 7, max, 2, 8, max, 8, 2, max, 25, 25, max, 35, 25, max, 25, 35, max, max);
	printf("\n");




	printf("\n------\n");
	printf("------ les INT D AVEC NB NEG ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%d|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*d|,  |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-*.*d|, |%-.d|", 4, 2, n, 7, 8, n, 9, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*d|, |%-*d|, |%-*d|, |%-*d|, |%-d|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0*.*d|, |%0.d|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*d|, |%0.*d|, |%0.*d|, |%0.*d|, |%0.d|", 2, n, 5, n, 8, n, 20, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*d|, |%.*d|, |%.*d|, |%.*d|, |%-d|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*d|, |%0*d|, |%0*d|, |%0*d|, |%0d|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*d|, |%*d|, |%*d|, |%*d|, |%d|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*d|,|%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|,  |%*.*d|, |%*.*d|, |%.d|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");


	printf("\n------\n");
	printf("------ les INT I AVEC NB POS -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%i|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2i|,  |%-7.8i|, |%-9.7i|, |%-2.8i|, |%-8.2i|, |%-25.25i|, |%-35.25i|, |%-25.35i|, |%-.i|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2i|, |%-5i|, |%-8i|, |%-20i|, |%-i|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2i|, |%07.8i|, |%010.7i|, |%02.8i|, |%08.2i|, |%025.25i|, |%035.25i|, |%025.35i|, |%0.i|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2i|, |%0.5i|, |%0.8i|, |%0.20i|, |%0.i|", f, f, f, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2i|, |%.5i|, |%.8i|, |%.20i|, |%-i|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02i|, |%05i|, |%08i|, |%021i|, |%0i|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2i|, |%5i|, |%8i|, |%20i|, |%i|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2i|,|%7.8i|, |%10.7i|, |%2.8i|, |%8.2i|, |%25.25i|,  |%35.25i|, |%25.35i|, |%.i|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT I AVEC NB NEG -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%i|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2i|,  |%-7.8i|, |%-9.7i|, |%-2.8i|, |%-8.2i|, |%-25.25i|, |%-35.25i|, |%-25.35i|, |%-.i|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2i|, |%-5i|, |%-8i|, |%-20i|, |%-i|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2i|, |%07.8i|, |%010.7i|, |%02.8i|, |%08.2i|, |%025.25i|, |%035.25i|, |%025.35i|, |%0.i|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2i|, |%0.5i|, |%0.8i|, |%0.20i|, |%0.i|", n, n, n, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2i|, |%.5i|, |%.8i|, |%.20i|, |%-i|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02i|, |%05i|, |%08i|, |%021i|, |%0i|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2i|, |%5i|, |%8i|, |%20i|, |%i|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2i|,|%7.8i|, |%10.7i|, |%2.8i|, |%8.2i|, |%25.25i|,  |%35.25i|, |%25.35i|, |%.i|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT I AVEC NB POS ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%i|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*i|,  |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-.i|", 4, 2, f, 7, 8, f, 9, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*i|, |%-*i|, |%-*i|, |%-*i|, |%-i|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0.i|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*i|, |%0.*i|, |%0.*i|, |%0.*i|, |%0.i|", 2, f, 5, f, 8, f, 20, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*i|, |%.*i|, |%.*i|, |%.*i|, |%-i|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*i|, |%0*i|, |%0*i|, |%0*i|, |%0i|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*i|, |%*i|, |%*i|, |%*i|, |%i|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*i|,|%*.*i|, |%*.*i|, |%*.*i|, |%*.*i|, |%*.*i|,  |%*.*i|, |%*.*i|, |%.i|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");


	printf("\n------\n");
	printf("------ les INT I AVEC NB NEG ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%i|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*i|,  |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-*.*i|, |%-.i|", 4, 2, n, 7, 8, n, 9, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*i|, |%-*i|, |%-*i|, |%-*i|, |%-i|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0*.*i|, |%0.i|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*i|, |%0.*i|, |%0.*i|, |%0.*i|, |%0.i|", 2, n, 5, n, 8, n, 20, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*i|, |%.*i|, |%.*i|, |%.*i|, |%-i|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*i|, |%0*i|, |%0*i|, |%0*i|, |%0i|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*i|, |%*i|, |%*i|, |%*i|, |%i|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*i|,|%*.*i|, |%*.*i|, |%*.*i|, |%*.*i|, |%*.*i|,  |%*.*i|, |%*.*i|, |%.i|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");






	printf("\n------\n");
	printf("------ les INT U AVEC NB POS -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%u|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2u|,  |%-7.8u|, |%-9.7u|, |%-2.8u|, |%-8.2u|, |%-25.25u|, |%-35.25u|, |%-25.35u|, |%-.u|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2u|, |%-5u|, |%-8u|, |%-20u|, |%-u|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2u|, |%07.8u|, |%010.7u|, |%02.8u|, |%08.2u|, |%025.25u|, |%035.25u|, |%025.35u|, |%0.u|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2u|, |%0.5u|, |%0.8u|, |%0.20u|, |%0.u|", f, f, f, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2u|, |%.5u|, |%.8u|, |%.20u|, |%-u|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02u|, |%05u|, |%08u|, |%021u|, |%0u|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2u|, |%5u|, |%8u|, |%20u|, |%u|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2u|,|%7.8u|, |%10.7u|, |%2.8u|, |%8.2u|, |%25.25u|,  |%35.25u|, |%25.35u|, |%.u|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT U MAX AVEC NB POS -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%u|", umax);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2u|,  |%-7.8u|, |%-9.7u|, |%-2.8u|, |%-8.2u|, |%-25.25u|, |%-35.25u|, |%-25.35u|, |%-.u|", umax, umax, umax, umax, umax, umax, umax, umax, umax);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2u|, |%-5u|, |%-8u|, |%-20u|, |%-u|", umax, umax, umax, umax, umax);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2u|, |%07.8u|, |%010.7u|, |%02.8u|, |%08.2u|, |%025.25u|, |%035.25u|, |%025.35u|, |%0.u|", umax, umax, umax, umax, umax, umax, umax, umax, umax);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2u|, |%0.5u|, |%0.8u|, |%0.20u|, |%0.u|", umax, umax, umax, umax, umax);
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2u|, |%.5u|, |%.8u|, |%.20u|, |%-u|", umax, umax, umax, umax, umax);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02u|, |%05u|, |%08u|, |%021u|, |%0u|", umax, umax, umax, umax, umax);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2u|, |%5u|, |%8u|, |%20u|, |%u|", umax, umax, umax, umax, umax);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2u|,|%7.8u|, |%10.7u|, |%2.8u|, |%8.2u|, |%25.25u|,  |%35.25u|, |%25.35u|, |%.u|", umax, umax, umax, umax, umax, umax, umax, umax, umax);
	printf("\n");


	printf("\n------\n");
	printf("------ les INT U AVEC NB NEG -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%u|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2u|,  |%-7.8u|, |%-9.7u|, |%-2.8u|, |%-8.2u|, |%-25.25u|, |%-35.25u|, |%-25.35u|, |%-.u|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2u|, |%-5u|, |%-8u|, |%-20u|, |%-u|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2u|, |%07.8u|, |%010.7u|, |%02.8u|, |%08.2u|, |%025.25u|, |%035.25u|, |%025.35u|, |%0.u|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2u|, |%0.5u|, |%0.8u|, |%0.20u|, |%0.u|", n, n, n, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2u|, |%.5u|, |%.8u|, |%.20u|, |%-u|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02u|, |%05u|, |%08u|, |%021u|, |%0u|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2u|, |%5u|, |%8u|, |%20u|, |%u|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2u|,|%7.8u|, |%10.7u|, |%2.8u|, |%8.2u|, |%25.25u|,  |%35.25u|, |%25.35u|, |%.u|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT U AVEC NB POS ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%u|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*u|,  |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-.u|", 4, 2, f, 7, 8, f, 9, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*u|, |%-*u|, |%-*u|, |%-*u|, |%-u|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0.u|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*u|, |%0.*u|, |%0.*u|, |%0.*u|, |%0.u|", 2, f, 5, f, 8, f, 20, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*u|, |%.*u|, |%.*u|, |%.*u|, |%-u|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*u|, |%0*u|, |%0*u|, |%0*u|, |%0u|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*u|, |%*u|, |%*u|, |%*u|, |%u|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*u|,|%*.*u|, |%*.*u|, |%*.*u|, |%*.*u|, |%*.*u|,  |%*.*u|, |%*.*u|, |%.u|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");


	printf("\n------\n");
	printf("------ les INT U AVEC NB NEG ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%u|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*u|,  |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-*.*u|, |%-.u|", 4, 2, n, 7, 8, n, 9, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*u|, |%-*u|, |%-*u|, |%-*u|, |%-u|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0*.*u|, |%0.u|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*u|, |%0.*u|, |%0.*u|, |%0.*u|, |%0.u|", 2, n, 5, n, 8, n, 20, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*u|, |%.*u|, |%.*u|, |%.*u|, |%-u|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*u|, |%0*u|, |%0*u|, |%0*u|, |%0u|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*u|, |%*u|, |%*u|, |%*u|, |%u|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*u|,|%*.*u|, |%*.*u|, |%*.*u|, |%*.*u|, |%*.*u|,  |%*.*u|, |%*.*u|, |%.u|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");






	printf("\n------\n");
	printf("------ les INT x AVEC NB POS -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%x|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2x|,  |%-7.8x|, |%-9.7x|, |%-2.8x|, |%-8.2x|, |%-25.25x|, |%-35.25x|, |%-25.35x|, |%-.x|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2x|, |%-5x|, |%-8x|, |%-20x|, |%-x|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2x|, |%07.8x|, |%010.7x|, |%02.8x|, |%08.2x|, |%025.25x|, |%035.25x|, |%025.35x|, |%0.x|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2x|, |%0.5x|, |%0.8x|, |%0.20x|, |%0.x|", f, f, f, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2x|, |%.5x|, |%.8x|, |%.20x|, |%-x|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02x|, |%05x|, |%08x|, |%021x|, |%0x|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2x|, |%5x|, |%8x|, |%20x|, |%x|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2x|,|%7.8x|, |%10.7x|, |%2.8x|, |%8.2x|, |%25.25x|,  |%35.25x|, |%25.35x|, |%.x|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT x AVEC NB NEG -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%X|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2x|,  |%-7.8x|, |%-9.7x|, |%-2.8x|, |%-8.2x|, |%-25.25x|, |%-35.25x|, |%-25.35x|, |%-.x|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2x|, |%-5x|, |%-8x|, |%-20x|, |%-x|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2x|, |%07.8x|, |%010.7x|, |%02.8x|, |%08.2x|, |%025.25x|, |%035.25x|, |%025.35x|, |%0.x|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2x|, |%0.5x|, |%0.8x|, |%0.20x|, |%0.x|", n, n, n, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2x|, |%.5x|, |%.8x|, |%.20x|, |%-x|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02x|, |%05x|, |%08x|, |%021x|, |%0x|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2x|, |%5x|, |%8x|, |%20x|, |%x|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2x|,|%7.8x|, |%10.7x|, |%2.8x|, |%8.2x|, |%25.25x|,  |%35.25x|, |%25.35x|, |%.x|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT x AVEC NB POS ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%x|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*x|,  |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-.x|", 4, 2, f, 7, 8, f, 9, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*x|, |%-*x|, |%-*x|, |%-*x|, |%-x|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0.x|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*x|, |%0.*x|, |%0.*x|, |%0.*x|, |%0.x|", 2, f, 5, f, 8, f, 20, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*x|, |%.*x|, |%.*x|, |%.*x|, |%-x|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*x|, |%0*x|, |%0*x|, |%0*x|, |%0x|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*x|, |%*x|, |%*x|, |%*x|, |%x|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*x|,|%*.*x|, |%*.*x|, |%*.*x|, |%*.*x|, |%*.*x|,  |%*.*x|, |%*.*x|, |%.x|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");


	printf("\n------\n");
	printf("------ les INT x AVEC NB NEG ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%x|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*x|,  |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-*.*x|, |%-.x|", 4, 2, n, 7, 8, n, 9, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*x|, |%-*x|, |%-*x|, |%-*x|, |%-x|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0*.*x|, |%0.x|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*x|, |%0.*x|, |%0.*x|, |%0.*x|, |%0.x|", 2, n, 5, n, 8, n, 20, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*x|, |%.*x|, |%.*x|, |%.*x|, |%-x|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*x|, |%0*x|, |%0*x|, |%0*x|, |%0x|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*x|, |%*x|, |%*x|, |%*x|, |%x|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*x|,|%*.*x|, |%*.*x|, |%*.*x|, |%*.*x|, |%*.*x|,  |%*.*x|, |%*.*x|, |%.x|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");





	printf("\n------\n");
	printf("------ les INT X AVEC NB POS -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%X|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2X|,  |%-7.8X|, |%-9.7X|, |%-2.8X|, |%-8.2X|, |%-25.25X|, |%-35.25X|, |%-25.35X|, |%-.X|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2X|, |%-5X|, |%-8X|, |%-20X|, |%-X|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2X|, |%07.8X|, |%010.7X|, |%02.8X|, |%08.2X|, |%025.25X|, |%035.25X|, |%025.35X|, |%0.X|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2X|, |%0.5X|, |%0.8X|, |%0.20X|, |%0.X|", f, f, f, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2X|, |%.5X|, |%.8X|, |%.20X|, |%-X|", f, f, f, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02X|, |%05X|, |%08X|, |%021X|, |%0X|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2X|, |%5X|, |%8X|, |%20X|, |%X|", f, f, f, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2X|,|%7.8X|, |%10.7X|, |%2.8X|, |%8.2X|, |%25.25X|,  |%35.25X|, |%25.35X|, |%.X|", f, f, f, f, f, f, f, f, f);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT X AVEC NB NEG -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%X|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2X|,  |%-7.8X|, |%-9.7X|, |%-2.8X|, |%-8.2X|, |%-25.25X|, |%-35.25X|, |%-25.35X|, |%-.X|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2X|, |%-5X|, |%-8X|, |%-20X|, |%-X|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%04.2X|, |%07.8X|, |%010.7X|, |%02.8X|, |%08.2X|, |%025.25X|, |%035.25X|, |%025.35X|, |%0.X|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.2X|, |%0.5X|, |%0.8X|, |%0.20X|, |%0.X|", n, n, n, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2X|, |%.5X|, |%.8X|, |%.20X|, |%-X|", n, n, n, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%02X|, |%05X|, |%08X|, |%021X|, |%0X|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2X|, |%5X|, |%8X|, |%20X|, |%X|", n, n, n, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2X|,|%7.8X|, |%10.7X|, |%2.8X|, |%8.2X|, |%25.25X|,  |%35.25X|, |%25.35X|, |%.X|", n, n, n, n, n, n, n, n, n);
	printf("\n");

	printf("\n------\n");
	printf("------ les INT X AVEC NB POS ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%X|", f);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*X|,  |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-.X|", 4, 2, f, 7, 8, f, 9, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*X|, |%-*X|, |%-*X|, |%-*X|, |%-X|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0.X|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*X|, |%0.*X|, |%0.*X|, |%0.*X|, |%0.X|", 2, f, 5, f, 8, f, 20, f, f );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*X|, |%.*X|, |%.*X|, |%.*X|, |%-X|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*X|, |%0*X|, |%0*X|, |%0*X|, |%0X|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*X|, |%*X|, |%*X|, |%*X|, |%X|", 2, f, 5, f, 8, f, 20, f, f);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*X|,|%*.*X|, |%*.*X|, |%*.*X|, |%*.*X|, |%*.*X|,  |%*.*X|, |%*.*X|, |%.X|", 4, 2, f, 7, 8, f, 10, 7, f, 2, 8, f, 8, 2, f, 25, 25, f, 35, 25, f, 25, 35, f, f);
	printf("\n");


	printf("\n------\n");
	printf("------ les INT X AVEC NB NEG ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%X|", n);
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*X|,  |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-*.*X|, |%-.X|", 4, 2, n, 7, 8, n, 9, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*X|, |%-*X|, |%-*X|, |%-*X|, |%-X|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb.nb :••\n");
	printf("|%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0*.*X|, |%0.X|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");

	printf("\n••0.nb :••\n");
	printf("|%0.*X|, |%0.*X|, |%0.*X|, |%0.*X|, |%0.X|", 2, n, 5, n, 8, n, 20, n, n );
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*X|, |%.*X|, |%.*X|, |%.*X|, |%-X|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••0nb :••\n");
	printf("|%0*X|, |%0*X|, |%0*X|, |%0*X|, |%0X|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*X|, |%*X|, |%*X|, |%*X|, |%X|", 2, n, 5, n, 8, n, 20, n, n);
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*X|,|%*.*X|, |%*.*X|, |%*.*X|, |%*.*X|, |%*.*X|,  |%*.*X|, |%*.*X|, |%.X|", 4, 2, n, 7, 8, n, 10, 7, n, 2, 8, n, 8, 2, n, 25, 25, n, 35, 25, n, 25, 35, n, n);
	printf("\n");





	printf("\n------\n");
	printf("------ les C -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%c|", 'c');
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-1c|, |%-5c|, |%-20c|, |%-c|", 'c', 'c', 'c', 'c');
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%1c|, |%5c|, |%20c|, |%c|", 'c', 'c', 'c', 'c');
	printf("\n");



	printf("\n------\n");
	printf("------ les C AVEC WILDCARD-------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%c|", 'c');
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*c|, |%-*c|, |%-*c|, |%-c|", 1, 'c', 5, 'c', 20, 'c', 'c');
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*c|, |%*c|, |%*c|, |%c|", 1, 'c', 5, 'c', 20, 'c', 'c');
	printf("\n");






	printf("\n------\n");
	printf("------ les STR -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%s|", "alice");
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-4.2s|,  |%-7.8s|, |%-9.7s|, |%-2.8s|, |%-8.2s|, |%-25.25s|, |%-35.25s|, |%-25.35s|, |%-.s|", "alice", "alice", "alice", "alice", "alice", "alice", "alice", "alice", "alice");
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-2s|, |%-5s|, |%-8s|, |%-20s|, |%-s|", "alice", "alice", "alice", "alice", "alice");
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.2s|, |%.5s|, |%.8s|, |%.20s|, |%-s|", "alice", "alice", "alice", "alice", "alice");
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%2s|, |%5s|, |%8s|, |%20s|, |%s|", "alice", "alice", "alice", "alice", "alice");
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%4.2s|,|%7.8s|, |%10.7s|, |%2.8s|, |%8.2s|, |%25.25s|,  |%35.25s|, |%25.35s|, |%.s|", "alice", "alice", "alice", "alice", "alice", "alice", "alice", "alice", "alice");
	printf("\n");

	printf("\n------\n");
	printf("------ les STR AVEC WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%s|", "alice");
	printf("\n");

	printf("\n••-nb.nb :••\n");
	printf("|%-*.*s|,  |%-*.*s|, |%-*.*s|, |%-*.*s|, |%-*.*s|, |%-*.*s|, |%-*.*s|, |%-*.*s|, |%-.s|", 4, 2, "alice", 7, 8, "alice", 9, 7, "alice", 2, 8, "alice", 8, 2, "alice", 25, 25, "alice", 35, 25, "alice", 25, 35, "alice", "alice");
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*s|, |%-*s|, |%-*s|, |%-*s|, |%-s|", 2, "alice", 5, "alice", 8, "alice", 20, "alice", "alice");
	printf("\n");

	printf("\n••.nb :••\n");
	printf("|%.*s|, |%.*s|, |%.*s|, |%.*s|, |%-s|", 2, "alice", 5, "alice", 8, "alice", 20, "alice", "alice");
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*s|, |%*s|, |%*s|, |%*s|, |%s|", 2, "alice", 5, "alice", 8, "alice", 20, "alice", "alice");
	printf("\n");

	printf("\n••nb.nb :••\n");
	printf("|%*.*s|,|%*.*s|, |%*.*s|, |%*.*s|, |%*.*s|, |%*.*s|,  |%*.*s|, |%*.*s|, |%.s|", 4, 2, "alice", 7, 8, "alice", 10, 7, "alice", 2, 8, "alice", 8, 2, "alice", 25, 25, "alice", 35, 25, "alice", 25, 35, "alice", "alice");
	printf("\n");


	printf("\n------\n");
	printf("------ les P AVEC UN NOMBRE ET WILDCARD -------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%p|", p);
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*p|, |%-*p|, |%-*p|, |%-*p|, |%-p|", 2, p, 14, p, 20, p, 25, p, p);
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*p|, |%*p|, |%*p|, |%*p|, |%p|", 2, p, 14, p, 20, p, 25, p, p);
	printf("\n");


	printf("\n------\n");
	printf("------ les P AVEC UNE STR ET WILDCARD-------\n");
	printf("------\n");

	printf("\n••normal :••\n");
	printf("|%p|", "alice");
	printf("\n");

	printf("\n••-nb :••\n");
	printf("|%-*p|, |%-*p|, |%-*p|, |%-*p|, |%-p|", 2, "alice", 14, "alice", 20, "alice", 25, "alice", "alice");
	printf("\n");

	printf("\n••nb :••\n");
	printf("|%*p|, |%*p|, |%*p|, |%*p|, |%p|", 2, "alice", 14, "alice", 20, "alice", 25, "alice", "alice");
	printf("\n");

	printf("\n••mix null no flags :••\n");
	printf("|%c|, |%s|, |%p|, |%d|, |%i|, |%u|, |%x|, |%X|", 0, NULL, NULL, 0, 0, 0, 0, 0);
	printf("\n");

	printf("\n••mix null flags :••\n");
	printf("|%4c|, |%4s|, |%4p|, |%4d|, |%4i|, |%4u|, |%4x|, |%4X|", 0, NULL, NULL, 0, 0, 0, 0, 0);
	printf("\n");

	printf("\n••mix null wildcard :••\n");
	printf("|%-*c|, |%-*s|, |%-*p|, |%-*d|, |%-*i|, |%-*u|, |%-*x|, |%-*X|", 4, 0, 4, NULL, 4, NULL, 4, 0, 4, 0, 4, 0, 4, 0, 4, 0);
	printf("\n");

	return (0);
}
