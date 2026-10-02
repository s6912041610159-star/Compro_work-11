#include <stdio.h>

void inputAndShow()
{
    double math, physics, chemistry;

    printf("กรอกคะแนนคณิตศาสตร์: ");
    scanf("%lf", &math);
    printf("กรอกคะแนนฟิสิกส์: ");
    scanf("%lf", &physics);
    printf("กรอกคะแนนเคมี: ");
    scanf("%lf", &chemistry);

    printf("\n--- คะแนนที่รับมา ---\n");
    printf("คณิตศาสตร์ : %.2f\n", math);
    printf("ฟิสิกส์    : %.2f\n", physics);
    printf("เคมี       : %.2f\n", chemistry);
}

int main(void)
{
    inputAndShow();
    return 0;
}
