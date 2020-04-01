//
// Created by mac on 2020/3/24.
//
// 2.12 编程练习

#include "p2-13.h"

/* practice_1 */
void p212_1(void)
{
    char first_name[] = "Anton";
    char last_name[] = "Bruckner";
    printf("%s %s\n", first_name, last_name);
    printf("%s\n", first_name);
    printf("%s\n", last_name);
    printf("%s %s\n", first_name, last_name);
}

/* practice_2 */
void p212_2(void)
{
    char full_name_of_mine[] = "Todd Ren";
    char address_of_mine[] = "NO. 1 Ethelene Road";
    printf("%s\n", full_name_of_mine);
    printf("%s\n", address_of_mine);
}

/* practice_3 */
int p212_3(int x)
{
    return x * 365;
}

/* practice_4 */

void p212_4_1(void)
{
    printf("For he's a jolly good fellow!\n");
}

void p212_4_2(void)
{
    printf("Which nobody can deny.\n");
}

void p212_4(void)
{
    for (int i = 0; i < 3; ++i) {
        p212_4_1();
    }
    p212_4_2();
}

/* practice_5 */

void p212_5(void)
{
    int toes = 10;
    printf("%d, %d\n", toes + toes, toes * toes);
}

/* practice_6 */

void p212_6_1()
{
    printf("Smile!");
}

void p212_6()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 3 - i; j > 0; --j)
            p212_6_1();
        printf("\n");
    }
}
/* practice_7 */
void one()
{
    printf("One.\n");
}

void two()
{
    printf("Two.\n");
}

void three()
{
    printf("Three.\n");
}

void one_three()
{
    printf("starting now\n");
    one();
    two();
    three();
    printf("done!\n");
}
/* practice_6 */
/* practice_6 */
