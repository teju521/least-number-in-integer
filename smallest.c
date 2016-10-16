#include<stdio.h>
int main(void)
{
	int a[20],b[30];
	int i,j,num,res=999,k=0,l,del,temp,c=1;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("enter the digits to delete\n");
	scanf("%d",&del);
	for(i=0;num!=0;i++)
	{
		
			a[i] = num%10;
			num=num/10;
		
			
	}

    temp = i-del;
    for(l=i-1;l>=0;l--)
	{
	    b[k]=a[l];
	    for(j=l-1;j>=0;j--)
	        {
	            del=j;
	            while(c<temp){
	            b[k]=(b[k]*10)+a[del];
	             c++;
	             del--;
	            }
	            
	              if(b[k]<res)
			            res=b[k];
			    k++;
	           	b[k]=a[l];
	           	c=1;
	           
	       
	        }
	}
	 printf("%d",res);
	
}