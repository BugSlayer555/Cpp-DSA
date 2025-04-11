
/*____________Pattern 1____________
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}*/



/*__________Pattern 2____________
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}*/






/*________Pattern 3__________
#include<bits/stdc++.h>
using namespace std;
void Pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    Pattern3(n);
}*/






/*_________Pattern 4___________
#include<bits/stdc++.h>
using namespace std;
void Pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    Pattern4(n);
}*/



/*__________Pattern 5____________
#include<bits/stdc++.h>
using namespace std;
void Pattern5(int n){
    int j =n;
    for(int i=1;i<=n;i++){
        while(j!=0){
            cout<<"*"<<" ";
            j--;
        }
        j = n-i;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    Pattern5(n);
}*/



/*__________Pattern 6____________
#include<bits/stdc++.h>
using namespace std;
void Pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    Pattern6(n);
}*/






/*_______________Pattern 7______________
#include<bits/stdc++.h>
using namespace std;
void Pattern7(int n){
    for(int i=0;i<n;i++){
        //Space
        for(int j=1;j<=n-i+1;j++){
            cout<<" ";
        }
        //Star
        for(int j=1;j<=2*i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    Pattern7(n);
}*/






/*_______________Pattern 8______________
#include<bits/stdc++.h>
using namespace std;
void Pattern8(int n){
    for(int i=0;i<n;i++){
        //Space
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //Star
        for(int j=1;j<=(2*n)-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    Pattern8(n);
}*/





/*_______________Pattern 9______________
#include<bits/stdc++.h>
using namespace std;

void Pattern7(int n){
    for(int i = 0; i < n; i++){
        // Space
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        // Star
        for(int j = 1; j <= 2 * i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern8(int n){
    for(int i = 0; i < n; i++){
        // Space
        for(int j = 1; j <= i + 1; j++){
            cout << " ";
        }
        // Star
        for(int j = 1; j <= 2 * (n - i - 1) + 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    Pattern7(n);
    Pattern8(n);
}/*
