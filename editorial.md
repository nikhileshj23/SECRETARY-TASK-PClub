## Editorial
Welcome to the editorial of my first problem, INERTED MATH. So, lets's begin.

<details>
<summary>Want a hint first?</summary>
<br>
  Consider only a and b for the time being. Let gcd(a,b) be k.  
  Then we can write, a=k.x and b=k.y for some x and y such that gcd(x,y)=1. <br> <br>
  Now, substituting a and b in terms of k, x and y, the equation becomes:<br>
  
  <p align="center">                                       
   c.(y-x)=k.x.y </p>
   Now, notice that a,b and c have no common factor other than 1 and that is only possible is gcd(c,k)=1.
   You can try to take it from here.
</details>

<details>
<summary>Solution</summary>
<br>
  After reaching at the conclusion gcd(c,k)=1, we can say that from our previously obtained equation, that :
  <p align="center">                                       
   c | xy </p>
  Also as we have gcd(x,y)=1, we get another result:
  <p align="center">                                       
   xy | c </p>
  This is only possible when both of them are equal. Hence we arrive at the result :
  <p align="center">                                       
   c = xy </p>
  Thus, we also get that:
  <p align="center">                                       
   k = (y-x) </p>
  Thus, the required sum of a and b is:
  <p align="center">                                       
   a + b = k.x + k.y<br>
   k.(x + y) = (y - x).(x + y) = <br>
    
</details>
