#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
    while(1){
    cout<< "Buy this product \nProjuct List here:- " <<endl;
    cout<< "1. Buy Book Price-500 press-1" <<endl;
    cout<< "2. Buy Khata Price-30 press-2" <<endl;
    cout<< "3. Buy Chocolate Price-220 press-3" <<endl;
    cout<< "4. Buy Pen Price-75 press-4" <<endl;
    cout<< "5. Buy Headphone Price-1750 press-5" <<endl <<endl;;



    cout<< "What do you want to buy?press here: - ";
    int a;
    cin >> a;
    cout <<endl;


    if(a==1){
        cout << "Yout Product is Book. Price is - 500" << endl;
        cout<< "if your buy using promo code you get 30% off." << endl;
        cout << "To buy it press 1- \nTo buy Using promo code press 2-" <<endl <<endl;
        cout << "Press here:- ";
        int b;
        cin >> b;
        if(b == 2){
            cout << "your promo code is \"Fahim\" "<< endl;
            cout << "Enter Promo code:- ";
            string pro;
            cin>> pro;
           cout << endl;
            if(pro=="Fahim"){
                cout << "Your Price is: " << 500*.7<< endl;
            }else{
            cout << "Your Promo code is Wrong" << endl;
            }
        }else if(b == 1){
        cout << "Your Price is 500" << endl<< endl;
        }else {
        cout<< "your press Worng" << endl<< endl;
        }

    }
    /////////////////

    if(a==2){
        cout<< "Yout Product is Khata. Price is - 30" << endl;
        cout<< "if your buy using promo code you get 30% off." << endl;
        cout << "To buy it press 1- \nTo buy Using promo code press 2-" <<endl <<endl;
        cout << "Press here:- ";
        int b;
        cin >> b;
        if(b == 2){
            cout << "your promo code is \"Fahim\" "<< endl;
            cout << "Enter Promo code:- ";
            string pro;
            cin>> pro;
            cout << endl;
            if(pro=="Fahim"){
                cout << "Your Price is: " << 30*.7<< endl<< endl;
            }else{
            cout << "Your Promo code is Wrong" << endl<< endl;
            }
        }else if(b == 1){
        cout << "Your Price is 30" << endl<< endl;
        }else {
        cout<< "your press Worng" << endl<< endl;
        }

    }
    ///
    if(a==3){
        cout<< "Yout Product is Chocolate. Price is - 220" << endl;
        cout<< "if your buy using promo code you get 30% off." << endl;
        cout << "To buy it press 1- \nTo buy Using promo code press 2-" <<endl <<endl;
        cout << "Press here:- ";
        int b;
        cin >> b;
        if(b == 2){
            cout << "your promo code is \"Fahim\" "<< endl;
            cout << "Enter Promo code:- ";
            string pro;
            cin>> pro;
           cout << endl;
            if(pro=="Fahim"){
                cout << "Your Price is: " << 220*.7<< endl<< endl;
            }else{
            cout << "Your Promo code is Wrong" << endl<< endl;
            }
        }else if(b == 1){
        cout << "Your Price is 220" << endl<< endl;
        }else {
        cout<< "your press Worng" << endl<< endl;
        }

    }

    ///
    if(a==4){
        cout<< "Yout Product is Pen. Price is - 75" << endl;
        cout<< "if your buy using promo code you get 30% off." << endl;
        cout << "To buy it press 1- \nTo buy Using promo code press 2-" <<endl <<endl;
        cout << "Press here:- ";
        int b;
        cin >> b;
        if(b == 2){
            cout << "your promo code is \"Fahim\" "<< endl;
            cout << "Enter Promo code:- ";
            string pro;
            cin>> pro;
           cout << endl;
            if(pro=="Fahim"){
                cout << "Your Price is: " << 75*.7<< endl<< endl;
            }else{
            cout << "Your Promo code is Wrong" << endl<< endl;
            }
        }else if(b == 1){
        cout << "Your Price is 30" << endl<< endl;
        }else {
        cout<< "your press Worng" << endl<< endl;
        }

    }

    ////
    if(a==5){
        cout<< "Yout Product is Headphone. Price is - 1750" << endl;
        cout<< "if your buy using promo code you get 30% off." << endl;
        cout << "To buy it press 1- \nTo buy Using promo code press 2-" <<endl <<endl;
        cout << "Press here:- ";
        int b;
        cin >> b;
        if(b == 2){
            cout << "your promo code is \"Fahim\" "<< endl;
            cout << "Enter Promo code:- ";
            string pro;
            cin>> pro;
            cout << endl;
            if(pro=="Fahim"){
                cout << "Your Price is: " << 1750*.7<< endl<< endl;
            }else{
            cout << "Your Promo code is Wrong" << endl<< endl;
            }
        }else if(b == 1){
        cout << "Your Price is 1750" << endl<< endl;
        }else {
        cout<< "your press Worng" << endl<< endl;
        }

    }
     cout<<endl << "Buy Again:-----------------"<<endl<<endl;
    }





getch();
}
