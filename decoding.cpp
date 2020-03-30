 #include<conio.h>
  #include<stdio.h>
  #include<math.h>
 	int a[7]={1,0,1,0,1,0,1};
 int  main()
  {	int i,b=0,c;
  printf("program to decode a hamming code into the messaage for a 4 digit no\n");
 // case-1 step 1;
 printf("case 1\ngoing from left to right even parity\n");
  printf("the give no is :\n");
 for(i=0;i<7;i++)
 {printf("%d",a[i]);}
 printf("\n");
printf("the toatal no of parity bits are 3\n"); 
// step 2;
printf("deciding the position of the parity bits\n");
int p[3]={p[0],p[1],p[2]};
for(i=0;i<=2;i++)
{ p[i] = pow(2,i) ;  }
for(i=0;i<=2;i++)
  {printf("p[%d] has position %d\n",i,p[i]);  }
  printf("checking for the wrong bit position ");
  if((a[0]+a[2]+a[4]+a[6])%2 ==0)
{p[0]=0;}
else
{p[0]=1;}
if((a[1]+a[2]+a[5]+a[6]) %2 == 0)
{p[1]=0;}
else
{p[1]=1;}
if((a[3]+a[4]+p[5]+a[6]) %2 == 0)
{p[2]=0;}
else
{p[2]=1;}
for(i=2;i>=0;i--)
{printf("%d",p[i]);}
printf("\n");
 for(i=0;i<=2;i++)
{b=b+ (pow(2,i))*p[i];}
printf("%d\n",b);
printf("correcting the %d postion of the encoded message\n",b);
for(i=0;i<7;i++)
{if(i==(b-1) && a[i]==0)
 {a[i]=1;
 printf("\nnew change bit has value %d",a[i]);}
 else if(i==(b-1) && a[i]==1)
 {a[i]=0;
 printf("new change bit has value %d",a[i]);}
 }
printf("thus the correct decoded message would be\n");
for(i=0;i<7;i++)
{printf("%d",a[i]);}
printf("\nthe parity positions are:\n");
for(i=0;i<=2;i++)
{ p[i] = pow(2,i) ;}
for(i=0;i<=2;i++)
  {printf("p[%d] = %d\n",i,p[i]);}
  int k[4];
  k[0]=a[2];
  k[1]=a[4];
  k[2]=a[5];
  k[3]=a[6];

printf("the message bits are:");
for(i=0;i<4;i++)
{printf("%d",k[i]);
}
printf("\n");
printf("case-2\ngoing from left to right odd parity\n");
printf("the toatal no of parity bits are 3\n"); 
// step 2;
printf("deciding the position of the parity bits\n");
//int p[3]={p[0],p[1],p[2]};
for(i=0;i<=2;i++)
{ p[i] = pow(2,i) ;  }
for(i=0;i<=2;i++)
  {printf("p[%d] has position %d\n",i,p[i]);  }
  printf("checking for the wrong bit position ");
  if((a[0]+a[2]+a[4]+a[6])%2 ==0)
{p[0]=1;}
else
{p[0]=0;}
if((a[1]+a[2]+a[5]+a[6]) %2 == 0)
{p[1]=1;}
else
{p[1]=0;}
if((a[3]+a[4]+p[5]+a[6]) %2 == 0)
{p[2]=1;}
else
{p[2]=0;}
for(i=2;i>=0;i--)
{printf("%d",p[i]);}
printf("\n");
 for(i=0;i<=2;i++)
{b=b+ (pow(2,i))*p[i];}
printf("%d\n",b);
printf("correcting the %d postion of the encoded message\n",b);
for(i=0;i<7;i++)
{if(i==(b-1) && a[i]==0)
 {a[i]=1;
 printf("\nnew change bit has value %d",a[i]);}
 else if(i==(b-1) && a[i]==1)
 {a[i]=0;
 printf("new change bit has value %d",a[i]);}
 }
printf("\nthus the correct decoded message would be\n");
for(i=0;i<7;i++)
{printf("%d",a[i]);}
printf("the parity positions are:\n");
for(i=0;i<=2;i++)
{ p[i] = pow(2,i) ;}
for(i=0;i<=2;i++)
  {printf("p[%d] = %d\n",i,p[i]);}
  //int k[4];
  k[0]=a[2];
  k[1]=a[4];
  k[2]=a[5];
  k[3]=a[6];
printf("the message bits are:");
for(i=0;i<4;i++)
{printf("%d",k[i]);
}											
	}
