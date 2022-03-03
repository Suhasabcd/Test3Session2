#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction x;
  printf("Enter the fraction of the form :- num den\n");
  scanf("%d %d",&x.num,&x.den);
  return x;
}
int gcd(int a,int b)
{
  int i;
  if(a>b)
  {
    
    i=b;
  }
  else
  {
    i=a;
  }
  for(;i>0;i--)
    {
      if(a%i==0&&b%i==0)
      {
        
       return i;
      } 
    } 
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction x;
  int z;
  x.num = (f1.num*f2.den)+(f2.num*f1.den);
  x.den=(f2.den*f1.den);
  z=gcd(x.num,x.den);
  x.num = x.num/z;
  x.den=x.den/z;
  return x;
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
  printf("The sum of %d/%d and %d/%d is = %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}

int main()
{
  Fraction f1,f2,sum;
  f1=input_fraction();
  f2=input_fraction();
  sum= add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}
