#include <stdio.h>
int main()
{
  //declare variables
  int intnum=10;
  float floatnum=3.5;
  double doublenum=4.75;
  //display orginal values
  printf("orginal integer :d\n",intnum);
  printf("orginal float :%.2f\n",floatnum);
  printf("orginal double:%.2f\n",doublenum);
  //implicit type casting
  float result1=intnum+floatnum;
  //int to float
  printf("implicit casting(int+float):%.2f\n",result1);
  //explicit type casting
  int result2=(int)floatnum+intnum;//float to int
  printf("explicit casting (float to int):%d\n",result2);
  //casting double to float
  float result3=(float)doublenum;//double to float
  printf("casting double to float:%.2f\n",result3);
  //performing airthematic with different types
  double result4=(double)intnum/floatnum;
  //int to double
  printf("division(int to double):%.2f\n",result4);
  //demonstrating loss of precision
  int result5=(int) doublenum;//double to int
  printf("casting double to int(loss of precision):%d\n",result5);
  return 0;
}
