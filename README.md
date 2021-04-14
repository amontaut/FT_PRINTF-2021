# FT_PRINTF-2021

Ft_printf graded 100 by the holy moulinette on April 2, 2021. 

The file `main_ftprintf.c` is a main tester (without bonuses) with my function, in order to compare it with the file `main_realprintf.c` which is a main with the real printf. To compare those files : 

`gcc -Wall -Werror -Wextra -g3 -fsanitize=address ft_printf.c sources/*.c includes/*.h ../main_ftprintf.c  && ./a.out >> mine.txt`

`gcc -Wall -Werror -Wextra -g3 -fsanitize=address ft_printf.c sources/*.c includes/*.h ../main_realprintf.c  && ./a.out >> real.txt`

`diff mine.txt real.txt`

What appears is the difference between my ft_printf and the real one. Please note that for pointers (%p), a difference should appear since the address changes everytime you launch gcc. However, the format shoud be the same. 

In addition to my tester, I used PFT (https://github.com/gavinfielder/pft), PFT-2019 (https://github.com/YulonSil/PFT_2019.git), 42TESTERS-PRINTF (https://github.com/Mazoise/42TESTERS-PRINTF) and printfTester (https://github.com/Tripouille/printfTester). 
