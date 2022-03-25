//1
#include <iostream>
using namespace std;
int main()
{
    cout <<"1 3 5 \n7 9 11\n13 15 17";
}

//2
#include <iostream>
using namespace std;
int main() {
int num1 = 1, num2 = 3, num3 = 5, num4 = 7, num5 = 9, num6 = 11, num7 = 13, num8 = 15, num9 = 17;
cout<<num1<<" "<<num2<<" "<<num3<<endl;
cout<<num4<<" "<<num5<<" "<<num6<<endl;
cout<<num7<<" "<<num8<<" "<<num9<<endl;
}

//3
#include <iostream>
using namespace std;
int Array[9]= {1, 3, 5, 7, 9, 11, 13, 15, 17};
int main(){
   cout<< Array[0]<<" ";
   cout<< Array[1]<<" ";
   cout<< Array[2]<<" "<<endl;
   cout<< Array[3]<<" ";
   cout<< Array[4]<<" ";
   cout<< Array[5]<<" "<<endl;
   cout<< Array[6]<<" ";
   cout<< Array[7]<<" ";
   cout<< Array[8]<<" ";
}

//4
#include <iostream>
using namespace std;

int main(){
    int number = 1;
    for( int i = 0 ; i < 9 ; i++ ){
        if (i==2 || i==5){
            cout << ( number + i * 2 )<<endl;
        }
        else {
            cout << ( number + i * 2 )<<" ";
        }
    }
}

//5
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    const int m = 3, n=3;
    int mat[m][n] = {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17}
    };
    for (auto &row: mat) {
        for (auto &i: row) {
            cout <<i<< ' ';
        }
        cout << endl;
    }
    return 0;
}

//6
#include<iostream>
using namespace std;
int main(){
int two=2;
    if (two != 3)
    {
        cout<< '\n';
        cout<< '\n';
        cout <<"1 3 5 "<< '\n' << + "7 9 11 " << '\n' << + "13 15 17";//second way using if
        cout<<endl;
        cout<<endl;

    }
}

//7
#include<studio.h>

int main(){
    int m=3, n=3;
    int a[3*3] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int *ptr = a;
    for(int i=0;i<m;i++){
        for(intj=0;j<n;j++)
        printf("%d ", *(ptr + (n*i+j)));
        printf("\n");
    }
    return 0;
}

//8
#include<iostream>
using namespace std;
int main(){
for (int i=0, i<=15, i+2)
{
    cout i;
}
}

//9
#include <iostream>
using namespace std;
int main()
{
    cout<<"1 ";
       for(int j=1; j<=8; j++)
       {
           if (j==2 || j==5){
            cout << ( 2*j +1 )<<endl;
        }
        else {
            cout << ( 2*j +1 )<<" ";
        }
       }
       cout<<endl;
   return 0;
}

//10
#include <iostream>
using namespace std;
int main()
{
    int one = 1; 
    if (one != 1)
    {
        cout <<"1 3 5 \n7 9 11\n13 15 17";
    }
    else 
    {
        cout <<"1 3 5 \n7 9 11\n13 15 17";
    }
}