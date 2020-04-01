//
// Created by mac on 2020/4/1.
//

#include "chapter5_practice.h"

void ch5_p1() {
    int x, y;
//    x = (2 + 3) * 6;
//    x = (12 + 6) /2 * 3;
//    y = x = (2 + 3) / 4;
    y = 3 + 2 * (x = 7 / 2);
    printf("%d %d\n", x, y);
}

void ch5_p2() {
    int x1 = (int) 3.8 + 3.3;
    int x2 = (2 + 3) * 10.5;
    int x3 = 3 / 5 * 22.0;
    int x4 = 22.0 * 3 / 5;

    printf("%d %d %d %d\n", x1, x2, x3, x4);
}

void ch5_p5() {
    int num = 10;

    printf("FORMAT, FORMAT\n");
    printf("%d\n", ++num); // 11
    printf("%d\n", num++); // 11  num = 12
    printf("%d\n", num--); // 12 num = 11
    printf("%d\n", num); // 11
}

void ch5_p6() {
    char c1, c2;
    int diff;
    float num;

    c1 = 'S';
    c2 = 'O';
    diff = c1 - c2;
    num = diff;
    printf("%c%c%d: %d %3.2f\n", c1, c2, c1, diff, num);
}


void ch5_p7() {
    int ten = 10;
    int n = 0;
    while (n++ < ten) {
        printf("%5d", n);
    }
    printf("\n");
}

/* 打印 'a'到'g' */
void ch5_p8() {
    char first_letter = 'a' - 1;
    char last_letter = 'g';
//    int n0 = (int)first_letter - 1;
//    int n1 = (int)last_letter;

    while (first_letter++ < last_letter) {
        printf("%5c", first_letter);
    }
    printf("\n");
}

void ch5_p9() {
    int x = 0;
    while (++x < 3) {
        printf("%4d\n", x);
    }
    printf("---------\n");
    int y = 100;
    while (y++ < 103) {
        printf("%4d\n", y);
        printf("%4d\n", y);
    }
    printf("---------\n");
    char ch = 's';
    while (ch < 'w') {
        printf("%c", ch);
        ch++;
    }
    printf("\n");
    printf("---------\n");
    printf("%c\n", ch);

}

/* 编程练习 5。11 */
void ch5_p10() {
    const int times = 60;
    int input_time;
    printf("please input the time:\n");
    scanf("%d", &input_time);
    while (input_time > 0) {
        int minute = input_time % 60;
        if (minute<10 && minute >= 0)
            printf("%2d:0%d\n", input_time/60,minute);
        else
            printf("%2d:%2d\n", input_time/60,minute);
        scanf("%d", &input_time);
    }
}

/* p2 */

void ch5_e2(int x)
{
    int max = x + 10;
    x--;
    while (x++ < max){
        printf("%d\n",x);
    }
}

void ch5_e3(int x)
{
    if (x < 0){
        printf("x shoud >= 0!\n");
        return;
    }
    else{
        int week = x / 7;
        int days = x % 7;
        printf("%d days are %d weeks, %d days.\n", x, week, days);
    }
}
