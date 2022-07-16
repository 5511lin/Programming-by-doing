//problem 1
#include <iostream>
using namespace std;
int sum= 0;

int main(){
   for(int i=0; i<1000; i++){
    if(i%3 == 0 || i%5 == 0){
        sum = sum + i;
    }
}
cout<< sum;
return 0;
}


//problem 2
#include <iostream>
using namespace std;
int sum= 0;
int a = 0;
int b = 1;
int c;
int main(){
   
    while(b<4000000){
        c= a+b;
        a=b;
        b=c;
        if(b%2==0){
        sum = sum+c;
        }
    }
cout<< sum;
return 0;
}

//problem 3
#include <iostream>
using namespace std;
int a =2;
long c = 600851475143;
bool P =1;
int main(){
   for(int i = a; i<c; i++) {
       P= 1;
        for(int b=2; b<i; b++){
        if(i%b==0){
            P=0;
        }
        }
        if(P && (c%i == 0))
				{
					a = i;
					c = c/i;
				}
    }
cout<< c;
return 0;
}

