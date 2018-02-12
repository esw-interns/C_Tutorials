#include <stdio.h>
#include <stdlib.h>

#define MASK(p,w,m) (((m>>(p-1))<<(64-w))>>(64-p-w+1))
/*Above macro is used to mask the bits.
 * p is bit-position,w is the width of the mask,and m is the mask value.
 * i take mask value as 0xffffffffffffffff 64-bit value all 1's.(unsigned value)
 * and i right shift it (bit-position-1) positions. 
 * again after the right shift i do left shift of (64-mask_width) places.
 * again i do right shift of (64-bit_position-mask_width+1)places.
*/
int main(int argc, char **argv)
{
    unsigned long long int REG , result,mask; //declared Register and mask, result
    int bit_pos,mask_width; 
    
    REG = 0xFF33BE4F5622EDAD; //assign some 64-bit value to register REG
    mask = 0xffffffffffffffff; //taken mask as all 1's as in the macro desription
    printf("\n\nEnter the bit position and mask width (integers): ");
    scanf("%d %d",&bit_pos,&mask_width);
    mask = MASK(bit_pos,mask_width,mask);
    /*Calling macro function by assigning
     * p=bit_pos  w=mask_width   m=mask
     * taken the created mask in mask variable.
     * the mask is created such that bit_position to the width of the mask, all positions intialized with 1's
   */
    
    
    printf("\n\nyour mask is: %p",mask);
    result = REG & mask;
     printf("\n\nresult is: %p\n\n",result);
    result = result>>(bit_pos-1);
    /*bit wise and operation between Register and mask we created
     * We get the output of our required bits of data in the desired positions
     * rest of the positions are all 0's.
     * Right shift used shift the value to the right end. 
    */
    printf("\n\nresult is: %p\n\n",result);
    return 0;
}