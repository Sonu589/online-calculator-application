#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    char c;
    char input;
    start:
    sub:
    starte:
    divi:
     powe:
      modu:
   cout<<"--------------------------------  WELCOME TO THE ONLINE CALCULATOR  ---------------------------------"<<endl;
   cout<<"--------------------------------  Follow the Instructions Carefully ---------------------------------"<<endl;
   cout<<"(1) Please Type 'a' or 'A' for Addition "<<endl;
   cout<<"(2) Please Type 's' or 'S' for Subtraction "<<endl;
   cout<<"(3) Please Type 'm' or 'M' for Multiply "<<endl;
   cout<<"(4) Please Type 'd' or 'D' for Division "<<endl;
   cout<<"(5) Please Type 'p' or 'P' for Power "<<endl;
   cout<<"(6) Please Type 'o' or 'O' for Modulo"<<endl;
   cout<<endl;
   restart:
   cout<<"Enter input to perform operations/calculations: "<<endl;
   cin>>c;
   int addition(void);
   int multipication(void);
   int subtraction(void);
   int Division(void);
   int power(void);
   int modulo(void);
   if(c=='a' ||c=='A'){
       int result=addition();
       cout<<"The addition is: "<<result<<endl;
       starts:
       cout<<"Do you want to use our application again type 'y' or 'n' ?"<<endl;
       cin>>input;
       if(input=='y' || input=='Y'){
           goto start;
       }
       else if(input=='n' || input=='N'){
           cout<<"Thank You For Using Our Application"<<endl;
           exit(0);
       }
       else{
           cout<<"You have enter wrong input, Please Type again!!"<<endl;
           goto starts;
       }
   }
    else if(c=='s' ||c=='S'){
       int result=subtraction();
       cout<<"The Subtraction is: "<<result<<endl;
       subt:
       cout<<"Do you want to use our application again type 'y' or 'n' ?"<<endl;
       cin>>input;
       if(input=='y' || input=='Y'){
           goto sub;
       }
       else if(input=='n' || input=='N'){
           cout<<"Thank You For Using Our Application"<<endl;
           exit(0);
       }
       else{
           cout<<"You have enter wrong input, Please Type again!!"<<endl;
           goto subt;
       }
   }
   else if(c=='m' ||c=='M'){
       int result=multipication();
       cout<<"The Multipication is: "<<result<<endl;
       startss:
       cout<<"Do you want to use our application again type 'y' or 'n' ?"<<endl;
       cin>>input;
       if(input=='y' || input=='Y'){
           goto starte;
       }
       else if(input=='n' || input=='N'){
           cout<<"Thank You For Using Our Application"<<endl;
           exit(0);
       }
       else{
           cout<<"You have enter wrong input, Please Type again!!"<<endl;
           goto startss;
       }
   }
   else if(c=='d' ||c=='D'){
       int result=Division();
       cout<<"The Division is: "<<result<<endl;
       divii:
       cout<<"Do you want to use our application again type 'y' or 'n' ?"<<endl;
       cin>>input;
       if(input=='y' || input=='Y'){
           goto divi;
       }
       else if(input=='n' || input=='N'){
           cout<<"Thank You For Using Our Application"<<endl;
           exit(0);
       }
       else{
           cout<<"You have enter wrong input, Please Type again!!"<<endl;
           goto divii;
       }
   }
   else if(c=='p' ||c=='P'){
       int result=power();
       cout<<"Then Power is: "<<result<<endl;
       powee:
       cout<<"Do you want to use our application again type 'y' or 'n' ?"<<endl;
       cin>>input;
       if(input=='y' || input=='Y'){
           goto powe;
       }
       else if(input=='n' || input=='N'){
           cout<<"Thank You For Using Our Application"<<endl;
           exit(0);
       }
       else{
           cout<<"You have enter wrong input, Please Type again!!"<<endl;
           goto powee;
       }
   }
   else if(c=='o' ||c=='O'){
       int result=modulo();
       cout<<"The Remainder is: "<<result<<endl;
       modul:
       cout<<"Do you want to use our application again type 'y' or 'n' ?"<<endl;
       cin>>input;
       if(input=='y' || input=='Y'){
           goto modu;
       }
       else if(input=='n' || input=='N'){
           cout<<"Thank You For Using Our Application"<<endl;
           exit(0);
       }
       else{
           cout<<"You have enter wrong input, Please Type again!!"<<endl;
           goto modul;
       }
   }
   else{
       cout<<"You have enter wrong input!! Try again enter correct input"<<endl;
       goto restart;
   }
}
int addition(){
    int value;
    int total=0;
    char types;
    yolk:
    cout<<"Enter value to perform addition: "<<endl;
    cin>>value;
    total=total+value;
    car:
    cout<<"Do you want to perform more addition type 'y' or 'n'? "<<endl;
    cin>>types;
    if(types=='y' || types=='Y'){
        goto yolk;
    }
    else if(types=='n' || types=='N' ){
        return total;
    }
    else{
        cout<<"You have enter wrong input, please try again"<<endl;
        goto car;
    }
    return total;
}
int subtraction(){
    int value;
    int tot=0;
    char types;
    int total;
    yolk:
    cout<<"Subtraction Operation"<<endl;
    cout<<"Enter value of a: "<<endl;
    cin>>value;
    cout<<"Enter value of b: "<<endl;
    cin>>tot;
    total=value-tot;
    car:
    cout<<"Do you want to perform more Subtraction type 'y' or 'n'? "<<endl;
    cin>>types;
    if(types=='y' || types=='Y'){
        goto yolk;
    }
    else if(types=='n' || types=='N' ){
        return total;
    }
    else{
        cout<<"You have enter wrong input, please try again"<<endl;
        goto car;
    }
    return total;
}
int multipication(){
    int value;
    int total;
    int tot;
    char types;
    yolk:
    cout<<"Multipication Operation/Calculation"<<endl;
    cout<<"Enter value of a: "<<endl;
    cin>>value;
    cout<<"Enter value of b: "<<endl;
    cin>>tot;
    total=tot*value;
    car:
    cout<<"Do you want to perform more Multipication type 'y' or 'n'? "<<endl;
    cin>>types;
    if(types=='y' || types=='Y'){
        goto yolk;
    }
     else if(types=='n' || types=='N' ){
        return total;
    }
    else{
        cout<<"You have enter wrong input, please try again"<<endl;
        goto car;
    }
    return total;
}
int Division(){
    int value;
    int total;
    int tot;
    char types;
    yolk:
    cout<<"Division Operation/Calculation"<<endl;
    cout<<"Enter value of a: "<<endl;
    cin>>value;
    cout<<"Enter value of b: "<<endl;
    cin>>tot;
    total=value/tot;
    car:
    cout<<"Do you want to perform more Division type 'y' or 'n'? "<<endl;
    cin>>types;
    if(types=='y' || types=='Y'){
        goto yolk;
    }
     else if(types=='n' || types=='N' ){
        return total;
    }
    else{
        cout<<"You have enter wrong input, please try again"<<endl;
        goto car;
    }
    return total;
}
int power(){
    int value;
    int total;
    int tot;
    char types;
    yolk:
    cout<<"Power Operations"<<endl;
    cout<<"Enter value for base: "<<endl;
    cin>>value;
    cout<<"Enter value for power: "<<endl;
    cin>>tot;
    total=pow(value,tot);
    car:
    cout<<"Do you want to perform more Power type 'y' or 'n'? "<<endl;
    cin>>types;
    if(types=='y' || types=='Y'){
        goto yolk;
    }
     else if(types=='n' || types=='N' ){
        return total;
    }
    else{
        cout<<"You have enter wrong input, please try again"<<endl;
        goto car;
    }
    return total;
}
int modulo(){
    int value;
    int total;
    char types;
    int tot;
    yolk:
    cout<<"Remainder operation"<<endl;
    cout<<"Enter quotient : "<<endl;
    cin>>value;
    cout<<"Enter dividend: "<<endl;
    cin>>tot;
    total=tot%value;
    car:
    cout<<"Do you want to perform more Remainder type 'y' or 'n'? "<<endl;
    cin>>types;
    if(types=='y' || types=='Y'){
        goto yolk;
    }
     else if(types=='n' || types=='N' ){
        return total;
    }
    else{
        cout<<"You have enter wrong input, please try again"<<endl;
        goto car;
    }
    return total;
}
