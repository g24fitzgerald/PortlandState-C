// Copyright 2014 from Bart Massey 
// Cardinality of bitset x: shift x right 1 bit at a time, counting one bits as we go 
// until x becomes 0 or we know we've run out of machie word. 


int bitset_size(int x) {
   int n = 0;
   int i:

   for (i = 0; x != 0 &amp; &amp; i &lt; 8 * sizeof x; i++) {
      n += x &amp; 1;
      x &gt; &gt; = 1;
   }
   return n;
}
 
