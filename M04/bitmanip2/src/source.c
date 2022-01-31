/*
Implement below function **mergeBits** which takes two 4 bit number as input values 
and returns a 8 bit value. This 8 bit value is formed from the two input values **a**
and **b**. The value **a** forms the 4 higher order bits of the return value whereas
**b** forms 4 lower order bits of the return value. For example, when a function 
is called as follows: `mergeBits (0x6, 0xD)`, then result will be eight-bit number, 
which is the hexadecimal representation `6D`.
*/

// define mergeBits function here
unsigned char mergeBits(unsigned char a, unsigned char b) {
  a = a & 0x0F;
  b = b & 0x0F;
  return a << 4 | b;
}
