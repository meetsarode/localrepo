#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define clrscr() system("cls");
void btod();
int btoo();
void btoh();
void dtob();
void dtoo();
void dtoh();
void otob();
void otod();
void otoh();
void htob();
void htod();
void htoo();
void design();
int main()
{
  clrscr();
  design();
   
}
void design()
{
  int choice;
  do
 {
   printf("\n----------Number System Conversion----------------");
   printf("\n 1.Binary to Decimal");
   printf("\n 2.Binary to Octal");
   printf("\n 3.Binary to Hexadecimal");
  
   printf("\n 4.Decimal to Binary");
   printf("\n 5.Decimal to Octal");
   printf("\n 6.Decimal to Hexadecimal");
  
   printf("\n 7.Octal to Binary");
   printf("\n 8.Octal to Decimal");
   printf("\n 9.Octal to Hexadecimal");
  
   printf("\n 10.Hexadecimal to Binary");
   printf("\n 11.Hexadecimal to Decimal");
   printf("\n 12.Hexadecimal to Octal");
   printf("\n 13.Exit");
   printf("\n_________________________________________________");
   printf("\nEnter your choice- ");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:btod();break;
    case 2:btoo();break;
    case 3:btoh();break;
    case 4:dtob();break;
    case 5:dtoo();break;
    case 6:dtoh();break;
    case 7:otob();break;
    case 8:otod();break;
    case 9:otoh();break;
    case 10:htob();break;
    case 11:htod();break;
    case 12:htoo();break;
    case 13:break;
    default:printf("invalid choice...Enter again");
   }
   }
  while (choice!=13);
  
  }
void btod()
{
  int n,dn=0,r,base=1;
    printf("Enter Binary Number-");
    scanf("%d",&n);
  while (n!=0)
  {
    r=n%10;
    if (r==0||r==1)
    {
        dn=dn+r*base;
        base=base*2;
         n=n/10;   
     }
    else
    {
      printf("INVALID INPUT...PLESE ENTER ONLY BINARY NUMBER(0 & 1).\n");
      break;
    }
  }
  if (n==0)
  {
      printf("Decimal Number is-%d\n",dn);

  }
  
}
int btoo()
{
      long int binarynum, octalnum = 0, j = 1, remainder;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binarynum);
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        if(remainder==0||remainder==1){
        octalnum = octalnum + remainder * j;
        j = j * 2;
        binarynum = binarynum / 10;}
        else{
            printf("invalid number..... enter only binary nnumber");
            return 1;
        }
    }
    printf("octal number is: %lo", octalnum);
    return 0;
}
void btoh()
{

    long long b;  
    int hex = 0;
    int i = 1, rem;

    printf("Enter the Binary number- ");
    scanf("%lld", &b);

    
    while (b != 0) 
    {
        rem = b % 10;
        if (rem==0 || rem==1)
       {
        hex += rem * i;
        i *= 2;
        b /= 10;
        }
        else
        {
           printf("Invalid binary input. Please enter only 0s and 1s.\n");
           break;
        }
    }
      if (b==0)
      {
       printf(" hexadecimal number is: %+X\n", hex);
      }
      
    
}
void dtob()
{
  int n,r,b=0,p=1;
  printf("Enter the decimal number-");
  scanf("%d",&n);

  while(n!=0)
  {
    r=n%2;     
    n=n/2;
    b=b+(r*p);
    p=p*10;        
  }
  printf("Binary number is -%d",b);
}
void dtoo()
{
   int r,n,ar[50],i=0;
  printf("Enter your decimal number-");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%8 ;
    ar[i]=r;
    i++;
    n=n/8; 
  }
  i--;
  printf("Octal number is-");
  while(i>=0)
  {
    printf("%d",ar[i]);
    i--;
  }
}
void dtoh()
{
   int r,n,ar[50],i=0;
  printf("Enter your decimal number-");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%16 ;
    ar[i]=r;
    i++;
    n=n/16; 
  }
  i--;
  printf("Hexadecimal number is-");
  while(i>=0)
  {
    switch(ar[i])
    {
     case 10:printf("A");break;
     case 11:printf("B");break;
     case 12:printf("C");break;
     case 13:printf("D");break;
     case 14:printf("E");break;
     case 15:printf("F");break;
     default:printf("%d",ar[i]);
    }
    i--;
  }
}
void otob()
{
    
    int  num, dec = 0, rem = 0, place = 0;  
    long bin = 0;  
  
    printf("Enter an Octal Number\n");  
    scanf("%d", &num);  

    while(num)  
    {  
        rem = num % 10;  
        dec = dec + rem * pow(8, place);  
        num = num / 10;  
        place++;  
    }  
  
    place = 1;  
    rem   = 0;  
    while(dec)  
    {  
        rem   = dec % 2;  
        bin   = bin + (rem * place);  
        dec   = dec / 2;  
        place = place * 10;  
    }  
    printf("Binary Number is- %ld.\n", bin);  
  
  

}
void otod()
{
  int num, dec = 0, rem = 0, place = 0;  
  
    printf("Enter an Octal Number\n");  
    scanf("%d", &num);  
  
      
    while(num)  
    {  
        rem = num % 10;  
        dec = dec + rem * pow(8, place);  
        num = num / 10;  
        place++;  
    }  
    printf("decimal Number is- %d\n", dec);  
  
}
void otoh()
{
      int octal, binary = 0, rem, position = 1;
    char hex[100];
    long long int i = 0;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    // Convert octal to binary
    while (octal != 0) {
        rem = octal % 10;
        binary += (rem * position);
        octal /= 10;
        position *= 8;
    }

    // Convert binary to hexadecimal
    while (binary != 0) {
        int temp = binary % 16;
        hex[i] = (temp > 9) ? (temp - 10 + 'A') : (temp + '0');
        binary /= 16;
        i++;
    }

    printf("Hexadecimal Number is- ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");

}
void htob()
{ 
  char binaryNumber[1000],hexaDecimal[1000];
    long int i=0;

    printf("Enter  hexadecimal number- ");
    scanf("%s",hexaDecimal);

    printf("\n Binary Number is- ");
    while(hexaDecimal[i]){
         switch(hexaDecimal[i]){
             case '0': printf("0000"); break;
             case '1': printf("0001"); break;
             case '2': printf("0010"); break;
             case '3': printf("0011"); break;
             case '4': printf("0100"); break;
             case '5': printf("0101"); break;
             case '6': printf("0110"); break;
             case '7': printf("0111"); break;
             case '8': printf("1000"); break;
             case '9': printf("1001"); break;
             case 'A': printf("1010"); break;
             case 'B': printf("1011"); break;
             case 'C': printf("1100"); break;
             case 'D': printf("1101"); break;
             case 'E': printf("1110"); break;
             case 'F': printf("1111"); break;
             case 'a': printf("1010"); break;
             case 'b': printf("1011"); break;
             case 'c': printf("1100"); break;
             case 'd': printf("1101"); break;
             case 'e': printf("1110"); break;
             case 'f': printf("1111"); break;
             default:  printf("\nInvalid hexadecimal digit %c ",hexaDecimal[i]); 
         }
         i++;
    }
}
void htod()
{
 char hex[100];
    int i = 0, len = 0, decimal = 0, place = 1;

    printf("Enter a Hexadecimal number- ");
    scanf("%s", hex);

    
    while (hex[len] != '\0')
    {
        len++;
    }

    
    for (i = len - 1; i >= 0; i--) {
        int temp = tolower(hex[i]) >= 'a' ? tolower(hex[i]) - 'a' + 10 : tolower(hex[i]) - '0';
        if (temp < 0 || temp > 15) {
            printf("Invalid hexadecimal digit: %c\n", hex[i]);
             
        }
        decimal += temp * place;
        place *= 16;
    }

    
    printf("Decimal Number is- %d\n", decimal);
}
void htoo()
{
    int hex, oct = 0, i = 1;

  printf("Enter a Hexadecimal Number- ");
  scanf("%x", &hex);

  while (hex != 0) {
    oct += (hex % 8) * i;
    hex /= 8;
    i *= 10;
  }

  printf("The octal Number is- %d\n", oct);


}
