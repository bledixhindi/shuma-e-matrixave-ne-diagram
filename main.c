#include <stdio.h>

int main()
{
    int i,j,v[10][10],sum,n;
    
    printf("Vendos n:");
    scanf("%d",&n);
    
    printf("mbush:");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Vendos vleren ne matricat v[%d][%d]:",i,j);
            scanf("%d",&v[i][j]);
        }
    }
    
    printf("Matricat jane:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",v[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			sum=sum+v[i][j];
			}
		}
	}
	printf("Shuma eshte :%d \t",sum);
		
	return 0;
}
