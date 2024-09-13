//_____________While Loop__________
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    while(num!=0){
        cout<<num<<endl;
        num--;
    }
}*/




//____________For Loop_____________
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1 = 5;
    for(int i=1; i<=num1; i++){
        cout<< i << endl;
    }
}*/






//__________Do While_______________
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    do{
        cout << num;
        num--;
    }while(num==0);
}*/





//__________Array With For Loop__________
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int ArrSize;
    cout<<"Enter the size of Array: ";
    cin>>ArrSize;
    int arr[ArrSize];
    cout<<"Enter the Array Value: "<<endl;
    for(int i=0; i<ArrSize; i++){
        cin >> arr[i];
    }
    cout<< "Values are: "<< endl;
    for(int i=0; i<ArrSize; i++){
        cout << arr[i] << endl;
    }
}*/





//____________2D Array with Loop___________
#include<bits/stdc++.h>
using namespace std;
int main(){
    int RowSize,ColumnSize;
    cout<<"Enter Row Size: ";
    cin>>RowSize;
    cout<<"Enter Column Size: ";
    cin>>ColumnSize;
    int Arr[RowSize][ColumnSize];
    cout<<"Enter Matrix Values: "<<endl;
    for(int i=0; i<RowSize; i++){
        for(int j=0; j<ColumnSize; j++){
            cin>>Arr[i][j];
        }
    }
    cout<<"Matrix is ["<<RowSize<<"]x["<<ColumnSize<<"]: "<<endl;
    for(int i=0; i<RowSize; i++){
        for(int j=0; j<ColumnSize; j++){
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
}