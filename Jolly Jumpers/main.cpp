#include<bits/stdc++.h>
using namespace std ;

int main(){
    int len ;

    while(cin >> len){
        int num1 , num2 , flag = 1 , instanse , beforSize ; 
        set<int> sets ;
        cin >> num1 ;
        for(int index = 1 ; index < len ; index++){
            cin >> num2 ; 
            instanse = abs(num2 - num1) ;
            beforSize = sets.size() ;
            sets.insert(instanse) ;
            if(instanse > len - 1 || beforSize == sets.size()) flag = 0 ; 
            num1 = num2 ;
        }
        cout << ((flag)?"Jolly\n":"Not jolly\n") ;
    }
}