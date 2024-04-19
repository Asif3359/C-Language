#include<stdio.h>

long long int min(long long int A, long long int B)
{
    if(A<B)
    {
        return A ;
    }
    else
    {
        return B; 
    }
}

int main(int argc, char const *argv[])
{
    long long int ey , mo , bo ;
    scanf("%lld %lld %lld",&ey, &mo, &bo);

    long long int mini = min(min(ey,mo),bo);

    long long int Result ;
    long long int adiCount ;
    
    if(mini == bo)
    {
        Result = bo;
    }

    else if(mini == mo)
    {
        adiCount = (ey-mini)/2;
        Result = mini+adiCount ;

        if(Result > bo)
        {
            Result = bo ;
        }
    }
    else
    {
        adiCount = (ey-mini)/2;
        Result = mini+adiCount ;
    }

    printf("%lld\n",Result);

    return 0;
}
