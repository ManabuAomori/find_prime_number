#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int isprime(int n){
      int i, max;
     max = (int)sqrt(n) + 1;

      if (n < 2) {
         return 0;
     }

     for (i = 2; i < max; i++) {
         if (n % i == 0) {
             return 0;
         }
     }
     return 1;
 }

int find_prime(int a_number){
	int i,sum;
    sum=0;
	for(i=1;i<a_number;i++){
	if( isprime(i))sum++;
	}
	return sum;
}

int main(){
    int i,l,r_val,r_val2;
    char s[80];
    for(;~scanf("%s",s);){
        l=strlen(s);
        for(i=0;i<l;i++)s[i]=toupper(s[i]);
	r_val = atoi(s);
        r_val2 = find_prime(r_val);
        printf("%d\n",r_val2);
    }
    return 0;
}



