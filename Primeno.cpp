#include<iostream>
using namespace std;
int  main(){
      
        int count =0 ;
    int x[]={1,2,3,4,5,6,7,8};
     for(int i = 0 ; i<= 7 ; i++){
         for(int j = 0 ; j<=9 ; j++){
   
            if(x[i]%j){
            count++;
        }
        if(count==2 ){
                cout<<x[i];
        }
        else 
        cout<<"Not Prime";
    }
       
        return 0;
}
}