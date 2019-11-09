 #include<conio.h>
  #include<stdio.h>
  #include<math.h>
  #include<string.h>
 int  main()
  {	int i,b=4,c,a[4]={0,0,1,1};
  printf("program to find  hamming code for a 4 digit no\n");
 //step 1;
printf("case 1-going from left to right even parity\n");
printf("the give no is :\n");
 for(i=0;i<=3;i++)
{printf("%d",a[i]); }
printf("\nthe toatal no of parity bits are 3\n"); 
// step 2;
printf("deciding the position of the parity bits\n");
int p[3]={p[0],p[1],p[2]};
for(i=0;i<=2;i++)
{ p[i] = pow(2,i) ;}
for(i=0;i<=2;i++)
  {printf("p[%d] is on bit no %d\n",i,p[i]);}
// step 3;
printf("finding out the parity bit value\n");
printf("for even parity\n");
printf("values of the parity are:\n");
if((a[0]+a[1]+a[3]) % 2 ==0)
{p[0]=0;}
else
{p[0]=1;}
if((a[2]+a[0]+a[3]) %2 == 0)
{p[1]=0;}
else
{p[1]=1;}
if((a[1]+a[2]+a[3]) %2 == 0)
{p[2]=0;}
else
{p[2]=1;}
for(i=0;i<=2;i++)
{printf("%d\n",p[i]);
}//step 4;
int d[7];
d[1]=p[0];
d[2]=p[1];
d[3]=a[0];
d[4]=p[2];
d[5]=a[1];
d[6]=a[2];
d[7]=a[3];
printf("the encoded message is ");
for(i=1;i<=7;i++)
printf("%d",d[i]);
printf("\n************************************************************\ncase 2- going from left to right odd parity\n");
printf("\nthe toatal no of parity bits are 3\n"); 
// step 2;
printf("deciding the position of the parity bits\n");
for(i=0;i<=2;i++)
{ p[i] = pow(2,i) ;}
for(i=0;i<=2;i++)
{printf("p[%d] is on bit no %d\n",i,p[i]);}
// step 3;
printf("finding out the parity bit value\n");
printf("for even parity\n");
printf("values of the parity are:\n");
if((a[0]+a[1]+a[3]) % 2 ==0)
{p[0]=1;}
else
{p[0]=0;}
if((a[2]+a[0]+a[3]) %2 == 0)
{p[1]=1;}
else
{p[1]=0;}
if((a[1]+a[2]+a[3]) %2 == 0)
{p[2]=1;}
else
{p[2]=0;}
for(i=0;i<=2;i++)
{printf("%d\n",p[i]);}
//step 4;
d[1]=p[0];
d[2]=p[1];
d[3]=a[0];
d[4]=p[2];
d[5]=a[1];
d[6]=a[2];
d[7]=a[3];
printf(" the encoded message is ");
for(i=1;i<=7;i++)
printf("%d",d[i]);
printf("\n**********************************************************\ncase 3- going from right to left  even parity\n");
printf("for even parity\n");
printf("\nthe toatal no of parity bits are 3\n"); 
// step 2;
printf("deciding the position of the parity bits\n");
for(i=0;i<=2;i++)
{ p[i] = pow(2,i) ;}
for(i=0;i<=2;i++)
  {printf("p[%d] is on bit no %d\n",i,p[i]);}

printf("values of the parity are :\n");
if((a[0]+a[1]+a[3]) % 2 ==0)
{p[0]=0;}
else
{p[0]=1;}
if((a[2]+a[0]+a[3]) %2 == 0)
{p[1]=0;}
else
{p[1]=1;}
if((a[1]+a[2]+a[3]) %2 == 0)
{p[2]=1;}
else
{p[2]=0;}
for(i=0;i<=2;i++)
{printf("%d\n",p[i]);}
//step 4;
d[1]=a[0];
d[2]=a[1];
d[3]=a[2];
d[4]=p[2];
d[5]=a[3];
d[6]=p[1];
d[7]=p[0];
printf(" the encoded message is ");
for(i=1;i<=7;i++)
{printf("%d",d[i]);}
printf("\n***********************************************************\ncase 4- going from right to left odd parity\n");
printf("\nfor odd parity\n");
printf("\nthe toatal no of parity bits are 3\n"); 
// step 2;
printf("deciding the position of the parity bits\n");
for(i=0;i<=2;i++)
{ p[i] = pow(2,i) ;}
for(i=0;i<=2;i++)
  {printf("p[%d] is on bit no %d\n",i,p[i]);}

printf("values of the parity are:\n");
if((a[0]+a[1]+a[3]) % 2 ==0)
{p[0]=1;}
else
{p[0]=0;}
if((a[2]+a[0]+a[3]) %2 == 0)
{p[1]=1;}
else
{p[1]=0;}
if((a[1]+a[2]+a[3]) %2 == 0)
{p[2]=0;}
else
{p[2]=1;}
for(i=0;i<=2;i++)
{printf("%d\n",p[i]);}
//step 4;
d[1]=a[0];
d[2]=a[1];
d[3]=a[2];
d[4]=p[2];
d[5]=a[3];
d[6]=p[1];
d[7]=p[0];
printf("the encoded message is ");
for(i=1;i<=7;i++)
printf("%d",d[i]);
printf("\n***********************************************************\n");}
