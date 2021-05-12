


#include <stdio.h>
#include <conio.h>

int main()
{
  int bit1,bit2;
  printf("enter  the 1st bit: ");
  scanf("%d",&bit1);
  printf("enter 2nd bit");
  scanf("%d",&bit2);
  if( (bit1==0||bit1==1)&& (bit2==0||bit2==1) )
  {
     if(bit1==bit2)
         {
	       printf(" result of %d XOR %d= 0",bit1,bit2);
          }
      else
       {
	        printf(" result of %d XOR %d= 1",bit1,bit2);
	    }
	    
   }
	  else
	       printf("sorry, you have enter wrong choice: ");
	
	getch();
	
	return 0;
}

