#include <iostream>
using namespace std;
 
int calculate_sum(int a, int B, int N){

    N--;
   return (((N/a) * (1 + (N/a)) * a / 2) + ((N/B) * (1 + (N/B)) * B / 2) - ((N/(a*B)) * (1 + (N/(a*B))) * (a*B) / 2));
}
 
//run
int main(){
    int a = 0, N = 0, B = 0;
    cout << "Input A: ";
    cin >> a;
    cout << endl << "Input B: ";
    cin >> B;
    cout << endl << "Input Limit N: ";
    cin >> N;
    cout << "Sum of multiples of "
         << a << " and " << B << " up to "<<N<<" = "
         << calculate_sum(a, B, N) << endl;
    return 0;
}