#include<bits/stdc++.h>
using namespace std;

#define INT_BITS 8 
class rotate_bit
{
  public:
  int data ;
  unsigned int bit;// number of bits that left rotate
  int  left_rotate(int  data , unsigned int bit)
  {
     return (data<< bit) |(data>>(INT_BITS-bit));
  }
};

int main()
{
  rotate_bit left_rotate_bit;
  left_rotate_bit.data = 16;
  left_rotate_bit.bit =2;
  cout<< left_rotate_bit.left_rotate(left_rotate_bit.data,left_rotate_bit.bit);
  
  
  return 0;



}
