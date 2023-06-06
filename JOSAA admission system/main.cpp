#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include "OR_CR.cpp"

using namespace std;
int main(){
   int n,x,a,check=0;
   string application_no;
   EligibilityList e1;
   Admission_process p1;
   College_list c1;
   AdvancedQualified a1;
   cout<<endl<<endl;
    cout<<"Welcome to JOSAA Admission system"<<endl<<endl;
    while(1){
   	cout<<"Enter 1 to apply for JOSAA Counselling"<<endl<<"Enter 2 to check opening and closing ranks of Institutes"<<endl
    <<"Enter 3 to check list of Institutes"<<endl<<"Enter 4 to check the Scheduled Events"<<endl
    <<"Enter 5 to read the rules of the Admission process"<<endl<<"Enter 6 to exit"<<endl;
    cin>>n;
        switch(n){
            case 1:
            logo:
            cout<<"Enter 1 to signup"<<endl<<"Enter 2 to login"<<endl;
            cin>>x;
            switch(x){
                case 1:
                cout<<"Enter your application number to sign in"<<endl;
                cin>>application_no;
                a1.signup(application_no);
                goto logo;
                break;
                case 2:
                cout<<"Enter your application number to login"<<endl;
                cin>>application_no;
                a=a1.login(application_no,&check);
                break;
                default:
                cout<<"choice not valid"<<endl;
            }
                break;
            case 2:
              e1.print_ClosingRankList();
                break;
            case 3:
               c1.print_IIT_list();
               c1.print_NIT_list();
               c1.print_IIIT_list();  
               break;  
            case 4:
                p1.a.ScheduledEvents();
                break;
            case 5:
                p1.a.BusinessRules();
                break;
            case 6:
                cout<<"Exiting from the JOSAA System"<<endl;
                exit(0);
            default:
                cout<<"Please enter a valid input from 1 to 5"<<endl; 
                cin>>n;       
    }
   }  
}