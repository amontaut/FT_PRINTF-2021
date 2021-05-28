# FT_PRINTF-2021

Ft_printf graded 100 by the holy moulinette on April 2, 2021 with the Norm v2.

In this repo, you will find : 
- FINAL-ft_printf : where all the functions + makefile are
- SUBJECT-ft_printf-fr.pdf : the subject in french 🥖
- `main_my_ftprintf.c` and  `main_realprintf.c` : files to test my printf without bonuses. `main_my_ftprintf.c` is a main with **my** function and several tests, `main_realprintf.c`is a main with the same tests but with the **real** function printf. To compare both files and see the mistakes, run 
`gcc -Wall -Werror -Wextra -g3 -fsanitize=address ft_printf.c sources/*.c includes/*.h ../main_ftprintf.c  && ./a.out >> mine.txt` 
`gcc -Wall -Werror -Wextra -g3 -fsanitize=address ft_printf.c sources/*.c includes/*.h ../main_realprintf.c  && ./a.out >> real.txt` 
`diff mine.txt real.txt`
What appears is the difference between my ft_printf and the real one.

In addition to my tester, I used PFT (https://github.com/gavinfielder/pft), PFT-2019 (https://github.com/YulonSil/PFT_2019.git), 42TESTERS-PRINTF (https://github.com/Mazoise/42TESTERS-PRINTF) and printfTester (https://github.com/Tripouille/printfTester). 
