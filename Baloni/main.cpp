#include<bits/stdc++.h>
using namespace std ;

struct Node {
    int value = 0 ;
};

int main(){
    int len , num , count = 0 ; 
    cin >> len ; 
    map<int , Node> table ;
    while(len--){
        cin >> num ;
        table[num].value++ ;
        if(table[num + 1].value > 0) table[num + 1].value-- ;
        else count++ ;
    }
    cout << count ;
}