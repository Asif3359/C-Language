#include <stdio.h>
int main(int argc, char const *argv[])
{
    // overflow in implicit constant conversion [-Woverflow]
    // int in = 100000000000 ;
    int in = 1000000;
    printf("Output : %d \n", in);

    // wrong output
    // float fl = 10.00000187324816234;
    float fl = 1.50003;
    printf("Output : %f\n", fl);

    // overflow in implicit constant conversion [-Woverflow]
    // long long int lln = 1018738744168769875555677565;
    long long int lln = 1018738744168;
    printf("Output : %lld\n", lln);

    return 0;
}
