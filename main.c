#include <stdio.h>
#include <stdlib.h>
typedef struct train{
struct train*g_1;
struct train*g_2;
struct train*g_3;
struct train*g_4;
char spy;
}car;

typedef struct{
car*driver;
}head;
int main()
{
    head driver_car;
    car c_1,c_2,c_3,c_4,c_5;

    driver_car.driver = &c_5;
    c_5.g_2 = &c_4;
    c_4.g_1 = &c_3;
    c_3.g_3 = &c_2;
    c_2.g_4 = &c_1;

    driver_car.driver->g_2->g_1->g_3->g_4->spy = 8;
    printf("%d",c_1.spy);
    return 0;
}
