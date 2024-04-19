#include<stdio.h>

long long int Max (long long int A , long long int B) {
    if(A>B) {
        return A ;
    }
    else {
        return B ;
    }
}

long long int Min (long long int A , long long int B) {
    if(A>B) {
        return B ;
    }
    else {
        return A ;
    }
}

int main(int argc, char const *argv[]) {
    long long int A , B ;
    scanf("%lld %lld",&A, &B);

    long long int mx , mn ;
    mx = Max(A,B);
    mn = Min(A,B);

    long long int even = (mx - mn + 1) / 2;

    long long int odd = (mx - mn + 1) / 2;
    if ((mx % 2 != 0 && mn % 2 != 0) || (mx % 2 == 0 && mn % 2 == 0)) {
        
        if (mx % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even : %lld\nOdd  : %lld", even, odd);
    
    return 0;
}
