#include <iostream>
using  namespace std;

int main(){
     int temp; int numColumns; int numRows;
     
    srand(unsigned(NULL));
    // int AR[4][4] = {{41,12,33,14},{15,46,17,68},{59,11,17,22},{23,44,65,66}};
    

    cout<<"Number of columns: "<<endl;
    cin>>numColumns;
    cout<<"Number of rows: "<<endl;
    cin>>numRows;
    int AR[numRows][numColumns];


    cout<<"Array before sorting!"<<endl;
    for(int i=0; i<numRows; i++){
        for(int j=0; j<numColumns; j++){
            AR[i][j] = rand()%26+97;
            cout<<char(AR[i][j]) << " ";
            }
            cout<<endl;
    }

    for(int k=0; k<numRows*numColumns; k++){
        for(int l=0; l<numColumns-1; l++){
            for(int m=0; m<numColumns-1; m++){
                if(AR[l][m] > AR[l][m+1]){
                    temp = AR[l][m];
                    AR[l][m] = AR[l][m+1];
                    AR[l][m+1] = temp;
                 }
            }
        }
        for(int o=0; o<numColumns; o++)
        {
            for(int p=0; p<numRows-1; p++){
                if(o%2==0){
                    if(AR[p][o]<AR[p+1][o]){
                        temp = AR[p][o];
                        AR[p][o] = AR[p+1][o];
                        AR[p+1][o] = temp;
                    }
                }else{
                    if(AR[p][o]>AR[p+1][o]){
                        temp = AR[p][o];
                        AR[p][o] = AR[p+1][o];
                        AR[p+1][o] = temp;
                    }
                }
            }
        }
    }
    cout<<"Array after sorting by rows!"<<endl;
    for(int i=0; i<numRows; i++){
        for(int j=0; j<numColumns; j++){
            cout<<char(AR[i][j]) << " ";
            }
            cout<<endl;
    }




    return 0;
}