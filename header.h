void at1 ()
{
    int x=55;
    if(x%5==0 && x%11==0) printf("O numero 55 e divisivel por 5 e 11\n\n");
}
void at2()
{
    int x;
    scanf("%d",&x);
    int i=0, soma=0;
    while(i<x)
    {
        i++;
        soma+=i;
    }
    int soma2=0;
    for(i=0;i<=x;i++)
    {
        soma2+=i;
    }
    printf("A soma dos numeros usando while(%d), usando for(%d)\n",soma,soma2);
}
void at3 ()
{
    int x[10];
    for(int i=0;i<10;i++)
    {
        x[i]=rand()%10;
        printf("%d  ",x[i]);
    }
    int maior=0;
    for(int i=0;i<10;i++)
    {
        if(x[i]>maior)maior=x[i];
    }
    printf("\nO maior numero e %d\n",maior);
}
int at4 (int x)
{
    if(x<Limite)
    {
        printf("%d  ",x);
        return at4(++x);
    }
    return x;
}
void at5(int *a, int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
