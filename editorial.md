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
<summary>Solution - Theory</summary>
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
   k.(x + y) = (y - x).(x + y) = y<sup>2</sup> - x<sup>2</sup><br></p>
  Hence, for every c the possible values of a + b is y<sup>2</sup> - x<sup>2</sup> such that gcd(x,y) = 1 and x.y = c
</details>

<details>
  <summary>Solution - Code</summary>
  <br>
  
    #include<iostream>  
    #include<bits/stdc++.h>  
    using namespace std;  
    #define pb push_back
    #define vi vector<int> 
    typedef long long int ll;
      
    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL); 

    
    vector<int> lp(1000000+5,0);
    vector<int> pr;

    //setting vector lp
    for(int i=2;i<=1000000;i++){
        if(lp[i]==0){
            lp[i]=i;
            pr.pb(i);
        }
        for(int j=0;i*pr[j]<=1000000;j++){
            lp[i*pr[j]]=pr[j];
            if(pr[j]==lp[i]) break;
        }
    }
    
    int n;
    cin>>n;
    
    ll ans=0;
    for(int j=0;pr[j]*pr[j]<=n;j++){
        if(n%pr[j]==0){
            ll temp=n;
            ll sum=1;
            while(temp%pr[j]==0){
                sum=sum*pr[j];
                temp/=pr[j];
            }
            ans+=abs(sum*sum-temp*temp);
        }
    }
    ans+=n*n-1;
    cout<<ans;
    }
    
  
</details>

<br> And with that, I am done here. Adios Amigo!!
