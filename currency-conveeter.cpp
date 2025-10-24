#include <iostream>
using namespace std;
int main(){
    char startValue;
    char selectAgain;
    float converter(void);
    start:
    cout<<"****************Currency Converter****************"<<endl;
    cout<<" * Please follow the instructions * :"<<endl;
    cout<<"You have currencies dollar, rupees, euro, pound"<<endl;
    cout<<"You can type a,b,c,d for dollar, rupees, euro, pound respectively"<<endl;
    cout<<"Enter currency1 (from which you want to convert): "<<endl;
    cout<<"Enter value for currency1: "<<endl;
    cout<<"Enter currency2 (to which you want to convert): "<<endl;
    cout<<"(a) dollar"<<endl;
    cout<<"(b) rupees"<<endl;   
    cout<<"(c) euro"<<endl;
    cout<<"(d) pound"<<endl;
    cout<<"Please press o to start conversion: "<<endl;
    selectChoice:
    cin>>startValue;
    if(startValue=='o' || startValue=='O') {
        float finalValue=converter();
        cout<<"The converted value is: "<<finalValue<<endl;
        cout<<"Do you want to use the application again? Yes or No"<<endl;
        cin>>selectAgain;
        if(selectAgain=='y' || selectAgain=='Y'){
        goto start;
    }
    else if (selectAgain=='n' || selectAgain=='N'){
        cout<<"Thank you for using our application!"<<endl;
    }
    else {
        cout<<"You have entered wrong input. Please type o"<<endl;
        goto selectChoice;
    }
    }
    return 0;
}
float converter(){
    char currName1;
    char currName2;
    float currency1;
    float currency2;
    currLevel:
    cout<<"Enter currency1 Name: "<<endl;
    cin>>currName1;
    cout<<"Enter currency1 Value: "<<endl;
    cin>>currency1;
    switch(currName1){
        case 'a':
        currLevel1:
        cout<<"Enter currency2 Name: "<<endl;
        cin>>currName2;
        if(currName2=='a' || currName2=='A'){
            currency2=currency1*1;
        }
        else if(currName2=='b' || currName2=='B'){
            currency2=currency1*82.74;
        }
        else if(currName2=='c' || currName2=='C'){
            currency2=currency1*0.91;
        }
        else if(currName2=='d' || currName2=='D'){
            currency2=currency1*0.78;
        }
        else{
            cout<<"You have entered wrong value, please type again"<<endl;
            goto currLevel1;
        }
        break;
           
        case 'b':
        currLevel2:
        cout<<"Enter currency2 Name: "<<endl;
        cin>>currName2;
        if(currName2=='a' || currName2=='A'){
            currency2=currency1*0.012;
        }
        else if(currName2=='b' || currName2=='B'){
            currency2=currency1*1;
        }
        else if(currName2=='c' || currName2=='C'){
            currency2=currency1*0.011;
        }
        else if(currName2=='d' || currName2=='D'){
            currency2=currency1*0.0094;
        }
        else{
            cout<<"You have entered wrong value, please type again"<<endl;
            goto currLevel1;
        }
        break;

        case 'c':
        currLevel3:
        cout<<"Enter currency2 Name: "<<endl;
        cin>>currName2;
        if(currName2=='a' || currName2=='A'){
            currency2=currency1*1.10;
        }
        else if(currName2=='b' || currName2=='B'){
            currency2=currency1*90.92;
        }
        else if(currName2=='c' || currName2=='C'){
            currency2=currency1*1;
        }
        else if(currName2=='d' || currName2=='D'){
            currency2=currency1*0.86;
        }
        else{
            cout<<"You have entered wrong value, please type again"<<endl;
            goto currLevel3;
        }

        break;

        case 'd':
        currLevel4:
        cout<<"Enter currency2 Name: "<<endl;
        cin>>currName2;
        if(currName2=='a' || currName2=='A'){
            currency2=currency1*1.28;
        }
        else if(currName2=='b' || currName2=='B'){
            currency2=currency1*118.34;
        }
        else if(currName2=='c' || currName2=='C'){
            currency2=currency1*1.16;
        }
        else if(currName2=='d' || currName2=='D'){
            currency2=currency1*1;
        }
        else{
            cout<<"You have entered wrong value, please type again"<<endl;
            goto currLevel4;
        }
        break;

        default: {
            cout<<"You have entered wrong value, please type again"<<endl;
            goto currLevel;
            break;
        }
    }
    return currency2;
}

