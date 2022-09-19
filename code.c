#include<stdio.h>
#include<string.h>
int main()
{
    int i, N, mini = 0, maxi = 0; //Hint : use mini and maxi to store indices
    scanf("%d\n", &N);                    //of the smallest and greatest string
    char s[N][50];
    for (i = 0; i < N; i++) gets(s[i]);
    //your code here
    for(i=0;i<N;i++)
    {
        if(strcmp(s[i],s[maxi])>0)
        {
            maxi=i;
        }
        else if(strcmp(s[i],s[mini])<0)
        {
            mini=i;
        }
    }
    printf("%s\n",s[mini]);
    printf("%s",s[maxi]);
    return 0;
}
