#include <stdio.h>

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main(void)
{
    int math, physics, chemistry;
    float avg;

    printf("กรอกคะแนนคณิตศาสตร์: ");
    scanf("%d", &math);
    printf("กรอกคะแนนฟิสิกส์: ");
    scanf("%d", &physics);
    printf("กรอกคะแนนเคมี: ");
    scanf("%d", &chemistry);

    avg = average(math, physics, chemistry);

    printf("\n--- ผลคะแนน ---\n");
    printf("คณิตศาสตร์ : %d\n", math);
    printf("ฟิสิกส์    : %d\n", physics);
    printf("เคมี       : %d\n", chemistry);
    printf("ค่าเฉลี่ย   : %.2f\n", avg);

    return 0;
}
