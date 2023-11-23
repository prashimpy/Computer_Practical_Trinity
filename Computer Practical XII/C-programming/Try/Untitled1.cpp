#include <stdio.h>

int main() {
    int m, s, c;
    float pmm, pms, pmc, pmt;

    printf("Enter the marks of maths: ");
    scanf("%d", &m);

    printf("Enter the marks of science: ");
    scanf("%d", &s);

    printf("Enter the marks of computer: ");
    scanf("%d", &c);

    pmm = ((float)m / 75) * 100;
    pms = ((float)s / 75) * 100;
    pmc = ((float)c / 75) * 100;
    pmt = (pmm + pms + pmc) / 3;

    printf("Maths Percentage: %.2f\n", pmm);
    printf("Science Percentage: %.2f\n", pms);
    printf("Computer Percentage: %.2f\n", pmc);

    if (pmm < 40.0 || pms < 40.0 || pmc < 40.0 || pmt < 40.0) {
        printf("Fail\n");
    } else {
        printf("Pass and total percentage is %.2f\n", pmt);
    }

    return 0;
}

