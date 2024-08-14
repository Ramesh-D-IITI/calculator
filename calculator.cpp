#include<iostream>
using namespace std;
const double pi=3.14159265359; 
const double ln2=0.69314718056;

double add(double a,double b)
    {
    return(a+b);
    }
  
double subtract(double a,double b)
    {
    return(a-b);
   }

double multiply(double a,double b)
   {
    return(a*b);
   }
double divide(double a, double b)
{
    if(b!=0){return(a/b);}
    else {cout<<"b cannot be negative";return(0);}
}
double sqrt(double a)
{
    double s=1;int i;
    for(i=0;i<30;i++)
       {
        s=(s+a/s)/2;
       }
    return(s);
}
void quad()
{
    double a,b,c,disc,x1,x2;
    cout<<"\n enter the coefficients of x^2 , x and constant in that order:";cin>>a>>b>>c;
    if (b*b-4*a*c>=0)
    {
     disc=sqrt(b*b-4*a*c);
     x1=(-b+disc)/(2*a);
     x2=(-b-disc)/(2*a);
     cout<<"the roots are:"<<x1<<"and "<<x2;
    }
    else cout<<"no real roots";
}

double power(double a ,int n)
{
    double x=1;
    for(int i=0;i<n;i++)
    {
       x=x*a;
    }  
    return(x);
}

int fact(int n)
{   int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return(factorial);
}

double sin(int b)
{  
    double a=b*pi/180;
    double j=a,sinx=0;
    for(int i=1;i<15;i++)
    { sinx=sinx+j; 
      j=-(j*a*a)/(2*i*(2*i+1));  
    }
    return(sinx);
}

double cos(int b)
{
    double a=b*pi/180;
    double j=1,cosx=0;
    for(int i=1;i<15;i++)
    {
        cosx=cosx+j;
        j=-(j*a*a)/(2*i*(2*i-1));
    }
    return(cosx);
}

double sincheck(int a)
{   double sinx;int b=a%360;
    if(b>=0&&b<=45){sinx=sin(b);}
    if(b>45&&b<=90){sinx=(cos(90-b));}
    if(b>90&&b<=135){sinx=(cos(b-90));}
    if(b>135&&b<=180){sinx=(sin(180-b));}
    if(b>180&&b<=225){sinx=(-sin(b-180));}
    if(b>225&&b<=270){sinx=(-cos(270-b));}
    if(b>270&&b<=315){sinx=(-cos(b-270));}
    if(b>315&&b<=360){sinx=(-sin(360-b));}
    return(sinx);
}


double coscheck(int a)
{   double cosx;int b=a%360;
    if(b>=0&&b<=45){cosx=cos(b);}
    if(b>45&&b<=90){cosx=(sin(90-b));}
    if(b>90&&b<=135){cosx=(-sin(b-90));}
    if(b>135&&b<=180){cosx=(-cos(180-b));}
    if(b>180&&b<=225){cosx=(-cos(b-180));}
    if(b>225&&b<=270){cosx=(-sin(270-b));}
    if(b>270&&b<=315){cosx=(sin(b-270));}
    if(b>315&&b<=360){cosx=(cos(360-b));}
    return(cosx);
}

void tan(int a)
{
    double tanx;int b=a%90,c=a%180;
    if(b==0 && c!=0){cout<<"tan is not defined for the given angle";}
else {tanx=sincheck(a)/coscheck(a);cout<<"tan of the given angle is :"<<tanx;}
}

void cosec(int a)
{
    double cosecx;int b=a%180;
    if(b==0){cout<<"cosec is not defined for the given angle";}
    else {cosecx=1/sincheck(a);cout<<"cosec of the given angle is :"<<cosecx;}
}

void sec(int a)
{
    double secx;int b=a%90,c=a%180;
    if(b==0 && c!=0){cout<<"sec is not defined for the given angle";}
    else {secx=1/coscheck(a);cout<<"sec of the given angle is :"<<secx;}
}

void cot(int a)
{
    double cotx;int b=a%180;
    if(b==0){cout<<"cot is not defined for the given angle";}
    else {cotx=coscheck(a)/sincheck(a);cout<<"cot of the given angle is :"<<cotx;}
}

double exp(double a)
{
    int b;
    if(a>=0){b=(int)(a+1);}
    else {b=-(int)(a);}
    double x=a/b,ex,j=1;
    ex=1;
    for(int i=1;i<30;i++)
    {
        j=(j*x)/i;
        ex=ex+j;
    }
    ex=power(ex,b);
    return(ex);
}

double ln(double a)
{
   int n=1,m=0;double lnx=0,j;
   for(int i= 0;n<=a;i++)
   {if(2*n>a){m=i;break;}
    else{n=n*2;}}
    double x=(a/n)-1;
    j=x;
    for(int i=1;i<30;i++)
    {
     lnx=lnx +j ;
    j=-(j*i*x)/(i+1);  
    }
    lnx=lnx+m*ln2;
    return(lnx);
}

int main ()
{
   double x,y;int choice,i=0,n ;
   while(i==0)
   {
    cout<<"\n\n what my calculator can do : \n 1.add 2 numbers \n 2. subtract 2 numbers \n 3.multiply 2 numbers \n 4.divide two non zero numbers \n 5.find square root of a number \n 6.find roots of a quadratic equation \n 7.raising a number to positive integer power\n 8.sin of an angle \n 9.cos of an angle \n 10.tan of an angle\n 11.cosec of an angle\n 12.sec of an angle\n 13.cot of an angle \n 14.exponent of a number\n 15.natural logarithm of a positive real number\n 20.exit" ;
    cout<<"\n enter your choice :";
    cin>>choice;
    switch(choice)
    {
        case 1 :cout<<"enter 2 numbers:";cin>>x>>y;cout<<add(x,y);
                 break;
        case 2 :cout<<"enter 2 numbers :";cin>>x>>y;cout<<subtract(x,y);
                 break;         
        case 3 :cout<<"enter 2 numbers :";cin>>x>>y;cout<<multiply(x,y);
                 break;
        case 4 :cout<<"enter 2 non zero numbers :";cin>>x>>y;cout<<divide(x,y);
                 break;
        case 5 :cout<<"enter the number:";cin>>x;cout<<sqrt(x);
                 break;
        case 6 :quad();  
                break;
        case 7: cout<<" enter the number and positive integer power to which the number is to be raised:";cin>>x>>n;cout<<power(x,n);       
                break;
        case 8: cout<<" enter the angle in degrees:";cin>>n;cout<<"sin of the given angle is :";cout<<sincheck(n);
                break;
        case 9: cout<<" enter the angle in degrees:";cin>>n;cout<<"cos of the given angle is :";cout<<coscheck(n);
                break;
        case 10: cout<<"enter the angle in degrees:";cin>>n;tan(n);
                break;
        case 11:cout<<"enter the angle in degrees:";cin>>n;cosec(n);
                break;
        case 12:cout<<"enter the angle in degrees:";cin>>n;sec(n);
                break;
        case 13:cout<<"enter the angle in degrees:";cin>>n;cot(n);
                break;
        case 14:cout<<"enter the number whose exponent is to be calculated:";cin>>x;cout<<"exponent of the given number is:"<<exp(x);
                break;
        case 15:cout<<"enter the positive real number whose natural logarithm is to be calculated:";cin>>x;cout<<"natural logarithm of the given number is:"<<ln(x);
                break;
        case 20: i=1;
                break;
        default :cout<<"enter your choice:";
                 break;         
    }
   }
    return(0);
}