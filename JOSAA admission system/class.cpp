#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Anouncement{
    public:
    void ScheduledEvents();
    void BusinessRules();
};
class College_list{
       public:
           void print_IIT_list();
           void print_NIT_list();
           void print_IIIT_list(); 
};
class Admission_process{
      private:
       int choice[3];
       public:
           Anouncement a;
           int* ChoiceFilling();
           void Float();
};
class Student
{ 
       public:
           vector<string> StudentName,FathersName,MothersName,DOB,Nationality,Application_No,Email,Password;
           vector<long long int> Mobile_no;
           vector<string> Category,HomeState;
           vector<bool> pwd;
           void signup(string application_no);
           int login(string application_no,int *check);

};
class MainsQualified:public Student
{
    public:
    vector<int> Mains_CRL,MainsCategoryRank;
};
class AdvancedQualified: public MainsQualified
{     
    public:
    vector<int> Adv_CRL,AdvCategoryRank;
    AdvancedQualified();
    void get(int a,int *check);
};
class EligibilityList {
       private:    
           int round;
           string type;
           bool allot=0;
       public:
           int CheckEligibility_round1(int a,int *inst,int choice[]);
           void CheckEligibility_round2(int a,int *inst,int choice[]);
           void print_ClosingRankList();
};
