#include<stdio.h>

int main()
{
	int n,c=0,i,j,t;
	int a[100],b[100];

	scanf("%d",&n);
  if(n>0)
  {
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		t=a[i];

		while(t!=0){
			if(t%2 == 1)
				c++;

			t=t/2;
		}
		b[i]=c;
		c=0;

	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(b[j]>b[i]){
				t=b[j];
				b[j]=b[i];
				b[i]=t;

				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}

	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
  }
  else
  	printf("0");

return 0;
}
