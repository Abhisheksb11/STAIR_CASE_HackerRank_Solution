void staircase(int n) 
{
    int i,j,s;
    for(i=0;i<n;i++)
    {
        s=n-(i+1);
        for(j=0;j<s;j++)
        {
            printf(" ");
        }
    for(j=0;j<i+1;j++)
    {
        printf("#");
    }
    printf("\n");
    }        
}
