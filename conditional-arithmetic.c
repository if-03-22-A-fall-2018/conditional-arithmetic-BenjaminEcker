#include <stdio.h>
#include <float.h>

    void printMenu()
    {
    	int choice;

    	printf("Choose an operation: <Add(1)-Multiply(2)>");
      scanf("%d",choice);

        if(choice == 1)
        {
        	Add();
        }
        else if(choice== 2)
        {
        	Multiply();
        }
    }

    void Add()
    {
    	int num =readNumber();
      int res;
      for (int i = num; i > 0 ; i--)
      {
         if (i % 3 == 0 || i % 5 == 0)
         {
           res += i;
         }
      }
      printResult(res);
    }

    void Multiply()
    {
    	int num = readNumber();
      int res=1;
      for (int i = num; i > 0 ; i--)
      {
         if (i % 3 == 0 || i % 5 == 0)
         {
            res *= i;
         }
      }
      printResult(res);
    }

    int ReadNumber()
    {
    	printf("Select a number in the range (1-100):");
        return scanf("%d",&choice);
    }

    void printResult(int res)
    {
      printf("Ergebniss: %d\n", res);
    }
    int main(int argc, char const *argv[])
    {
    	printMenu();
    }
