#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include "class.cpp"

using namespace std;



    void Anouncement::ScheduledEvents(){
    cout<<"Date\t\t\tTime\t\tEvent"<<endl;
    cout<<endl;
    cout<<"August 05,2022\t\t\t\tJoint Apex Board declares JEE(Mains) 2022 Ranks"<<endl;
    cout<<endl;
    cout<<"September 11,2022\t10:00\t\tAnnouncement of JEE(Advanced) 2022 Ranks"<<endl;
    cout<<endl;
    cout<<"September 12,2022\t10:00\t\tCandidate Registration/Choice filling for academic program under Josaa starts"<<endl;
    cout<<endl;
    cout<<"September 23,2022\t10:00\t\tSeat Allocation(Round 1)"<<endl;
    cout<<endl;
    cout<<"September 23,2022\t20:00\t\tOnline reporting: fee payment/document upload/\n-September 26,2022\t\t\tresponse by candidate to query(if required)(Round 1)"<<endl;
    cout<<endl;
    cout<<"September 27,2022\t17:00\t\tLast day to respond to query (Round 1)"<<endl;
    cout<<endl;
    cout<<"September 28,2022\t17:00\t\tSeat Allocation(Round 2)"<<endl;
    cout<<endl;
    cout<<"September 28,2022\t17:00\t\tOnline reporting:fee payment/document upload/\n-October 01,2022\t\t\tresponse by candidate to query(if required)(Round 2)"<<endl;
    cout<<endl;
    cout<<"October 02,2022\t\t17:00\t\tLast day to respond to query (Round 2)\n\t\t\t\t\tFinal round for allocation of IITs"<<endl;
    cout<<endl;
    cout<<"October 19,2022\t\t17:00\t\tOnline payment of Partial Admission Fee. Visit CSAB-2022\n-October 21,2022\t\t\tfor further details on Institute reporting,admission process and special rounds"<<endl;     
}
    void Anouncement::BusinessRules(){
    cout<<"1.Seat Allotment process :\n"<<endl;
    cout<<"\tCandidate will be shown the list of available colleges."<<endl;
    cout<<"\tCandidates are asked to enter their top 3 choices of colleges and branch."<<endl;
    cout<<"\tBased on the candidates rank and the opening and closing rank seats are alloted.\n"<<endl;
    cout<<"2.Freeze,Float and Slide Option : \n"<<endl;
    cout<<"\tFreeze: \n"<<endl;
    cout<<"\t\tChoosing the option Freeze means that the candidate accepts the offered seat and "; 
    cout<<"indicates that the candidate does \t\tnot want to participate in further rounds of seat ";
    cout<<"allocation while retaining the same seat.\n"<<endl;
    cout<<"\tFloat: \n"<<endl;
    cout<<"\t\tChoosing the option Float means that the candidate accepts the offered seat and ";
    cout<<"indicates that, if admission to an \t\tacademic program of higher preference in any Institute ";
    cout<<" is offered in subsequent rounds of seat allocation,\n\t\tcandidate will accept it.";
    cout<<" Else, the candidate will continue with the currently accepted academic program.\n"<<endl;
    } 
    AdvancedQualified::AdvancedQualified(){
        StudentName.push_back("Mekala Bhavana");
        StudentName.push_back("Narra Abhigna");
        StudentName.push_back("Harsha Vardhan Lakavath");
        FathersName.push_back("Mekala Narender");
        FathersName.push_back("Narra Siva Rao");
        FathersName.push_back("L V Naik");
        MothersName.push_back("Mekala Lavanya");
        MothersName.push_back("Narra Lakshmi");
        MothersName.push_back("B Tara");
        DOB.push_back("29/10/2003");
        DOB.push_back("07/06/2003");
        DOB.push_back("01/01/2003");
        Nationality.push_back("Indian");
        Nationality.push_back("Indian");
        Nationality.push_back("Indian");
        Application_No.push_back("2022fialivy41");
        Application_No.push_back("2022fialivy48");
        Application_No.push_back("2022fialivy31");
        Email.push_back("bhavana@gmail.com");
        Email.push_back("abhigna@gmail.com");
        Email.push_back("harshavardhan@gmail.com");
        Mobile_no.push_back(9876543210);
        Mobile_no.push_back(8976543210);
        Mobile_no.push_back(7896543210);
        Mains_CRL.push_back(1529);
        Mains_CRL.push_back(1090800);
        Mains_CRL.push_back(109875);
        MainsCategoryRank.push_back(0);
        MainsCategoryRank.push_back(26);
        MainsCategoryRank.push_back(1594);
        Adv_CRL.push_back(2785);
        Adv_CRL.push_back(0);
        Adv_CRL.push_back(10895);
        AdvCategoryRank.push_back(0);
        AdvCategoryRank.push_back(0);
        AdvCategoryRank.push_back(1085);
        Category.push_back("open");
        Category.push_back("obc");
        Category.push_back("obc");
        HomeState.push_back("tirchy");
        HomeState.push_back("surathkal");
        HomeState.push_back("tirchy");
        pwd.push_back(0);
        pwd.push_back(1);
        pwd.push_back(0);
        Password.push_back("1");
        Password.push_back("1");
        Password.push_back("1");
      }
    void Student::signup(string application_no){
        int a=0;
        for(auto i=Application_No.begin();i!=Application_No.end();i++){
           if(application_no==*i){
                if(*(Password.begin() + a) == "1") {
                string p;
             loop:   
             cout<<"Create a password"<<endl;
             cin>>p;
             if(p == "1"){
                cout<<endl<<endl<<"Please enter a strong password"<<endl<<endl<<endl;
                goto loop;
             }
             else
             Password.insert(Password.begin() + a,p);   
            }
            else{
                cout<<"You have already signed in so please login"<<endl;
          }
          }
          a++;
    }
    }
    int Student::login(string application_no,int *check){
        AdvancedQualified a5;
         int a=0;  
        for(auto i=Application_No.begin();i!=Application_No.end();i++){
           if(application_no==*i){
            string pd;
          cout<<"Enter password"<<endl;
          pill:
          cin>>pd;
          if(*(Password.begin() + a) == pd){
            a5.get(a,check);
          }
          else{
          	cout<<"wrong password"<<endl;
          	cout<<"Please re-enter your password"<<endl;
          	goto pill;
		  }
     }
     a++;
    }
    return a;
    }
    void AdvancedQualified::get(int a,int *check){
        EligibilityList e2;
        College_list c1; 
        Admission_process a1;
        int inst=0;
        if(*check==0){
        cout<<"Details of the student are: "<<endl<<endl;	
        cout<<"Student Name: "<<*(StudentName.begin() + a)<<endl;
        cout<<"Category: "<<*(Category.begin() + a)<<endl;
        cout<<"Home State: "<<*(HomeState.begin() + a)<<endl;
        cout<<"Mains CRL: "<<*(Mains_CRL.begin() + a)<<endl;
        cout<<"Mains Category Rank: "<<*(MainsCategoryRank.begin() + a)<<endl;
        cout<<"Advanced CRL: "<<*(Adv_CRL.begin() + a)<<endl;
        cout<<"Advanced Category Rank: "<<*(AdvCategoryRank.begin() + a)<<endl;
        cout<<"Fathers Name: "<<*(FathersName.begin() + a)<<endl;
        cout<<"Mothers Name: "<<*(MothersName.begin() + a)<<endl;
        cout<<"DOB: "<<*(DOB.begin() + a)<<endl;
        cout<<"pwd: "<<*(pwd.begin() + a)<<endl;
        cout<<"Nationality: "<<*(Nationality.begin() + a)<<endl;
        cout<<"Application Number: "<<*(Application_No.begin() + a)<<endl;
        cout<<"Email ID: "<<*(Email.begin() + a)<<endl;
        cout<<"Mobile number: "<<*(Mobile_no.begin() + a)<<endl;   
        cout<<"Available choices are"<<endl<<endl;
        if(*(Adv_CRL.begin() + a)){
                c1.print_IIT_list();
        }
                c1.print_NIT_list();
                c1.print_IIIT_list();
         cout<<"Enter your top 3 choices: "<<endl;
                cout<<"Enter serial number of the respective Institute name and branch: "<<endl;
                int *choice=a1.ChoiceFilling();
                *check=e2.CheckEligibility_round1(a,&inst,choice);
                label:
                cout<<"Enter 1 to freeze your choice\nEnter 2 to float your choice"<<endl;
                int c;
                cin>>c;
                switch(c){
                    case 1:
                    break;
                    case 2:
                    a1.Float();
                    e2.CheckEligibility_round2(a,&inst,choice);
                    break;
                    default:
                    goto label;
                    break;
                }
                cout<<"You have successfully completed the Josaa Councelling"<<endl<<endl;
                cout<<"If you are still not satisfied with your seat you can apply for CSAB"<<endl;
                cout<<"All the best for your future!!"<<endl<<endl;
        }
        else{
            cout<<"JOSAA counselling is completed and seats have been alloted already"<<endl<<endl;
        }
    }
    void College_list :: print_IIT_list()
{
 cout<<"Institution Name\t\t\t\t\t\t\tProgram Name"<<endl;
 cout<<"1.Indian Institute of Technology Bombay\t\t\t\t\tComputer Science and Engineering"<<endl;
 cout<<"2.Indian Institute of Technology Bombay\t\t\t\t\tAerospace Engineering"<<endl;
 cout<<"3.Indian Institute of Technology Madras\t\t\t\t\tComputer Science and Engineering"<<endl;
 cout<<"4.Indian Institute of Technology Madras\t\t\t\t\tMechanical Engineering"<<endl;
 }
    void College_list :: print_NIT_list()
{
 cout<<"5.National Institute of Technology Tirchy\t\t\t\tComputer Science and Engineering"<<endl;
 cout<<"6.National Institute of Technology Tirchy\t\t\t\tElectronics Communication and Engineering"<<endl;
 cout<<"7.National Institute of Technology Surathkal\t\t\t\tComputer Science and Engineering"<<endl;
 cout<<"8.National Institute of Technology Surathkal\t\t\t\tArtifical Intelligence"<<endl;
}
    void College_list :: print_IIIT_list()
{
 cout<<"9.Indian Institute of Information and Technology Allahabad\t\tInformation Technology"<<endl;
 cout<<"10.Indian Institute of Information and Technology Allahabad\t\tInformation Technology-Business Informatics"<<endl;
 cout<<"11.Indian Institute of Information and Technology Gwalior\t\tComputer Science and Engineering"<<endl;
 cout<<"12.Indian Institute of Information and Technology Gwalior\t\tIntegrated Btech(IT) and Mtech(IT)"<<endl;
 cout<<"13.Indian Institute of Information and Technology Gwalior\t\tIntegrated Btech(IT) and MBA"<<endl<<endl;
}
    int* Admission_process :: ChoiceFilling(){
                for(int i=0;i<3;i++)  cin>>choice[i]; 
                return choice;             
    }
    void Admission_process :: Float(){
       cout<<"Hoping for the best, please wait for your round 2 result\n"<<endl;  
    }
