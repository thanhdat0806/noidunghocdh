int main()
{
    int n;
    do
    {
        printf("Nhap n:");
        scanf("%d",&n);
        if(n<=0|| n>=50)
            printf("dieu kien 0<n<50");
    }while(n<=0||n>=50);
}
