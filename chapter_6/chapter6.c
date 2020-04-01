//
// Created by mac on 2020/4/1.
//

#include "chapter6.h"

/* sum of input values */
void ch6_e1(void)
{
    long num;
    long sum = 0L;  // 注意这里 为什么用0L，0L是 long的0，这样类型保证一致；
    int status;

    /* 这里scafn（）的双重用法，
     * 1。 获取输入值
     * 2。 返回值
     *  返回值有三种情况，
     *      成功得到数字: 返回1，
     *      如果输入非数字: 则返回0，
     *      其他情况: 在赋值是出错 则返回EOF 一般为-1 */
    printf("Please enter an integer to be summed.");
    printf("(q to quit): ");
    status = scanf("%ld", &num); // 状态码 scanf 返回的状态码； return 值？？

    while (status == 1){
        sum = sum + num;
        printf("Please enter next integer.");
        printf("(q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
}
