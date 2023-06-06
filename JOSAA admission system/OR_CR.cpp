#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include "functions.cpp"

using namespace std;
    void EligibilityList :: print_ClosingRankList(){
     cout<<"enter the round number to check for opening and closing ranks(1/2)"<<endl;
     cin>>round;
     switch(round){
            case 1:
            cout<<"enter the type of institue IIT/NIT/IIIT"<<endl;
            cout<<"Type of institue is case sensitive please enter all letters in caps only"<<endl;
            cin>>type;
            if(type=="IIT"){
                cout<<"Opening and closing ranks of round 1 for IIT's are"<<endl;
                cout<<"Opening and closing ranks of IIT Bombay round 1 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|IIT Bombay\t|CSE\t\t|AI\t|Open\t\t|1\t\t|60\t\t|"<<endl;
                cout<<"|IIT Bombay\t|CSE\t\t|AI\t|Open(PwD)\t|2\t\t|5\t\t|"<<endl;
                cout<<"|IIT Bombay\t|CSE\t\t|AI\t|OBC-NCL\t|9\t\t|51\t\t|"<<endl;
                cout<<"|IIT Bombay\t|CSE\t\t|AI\t|OBC-NCL(PwD)\t|1\t\t|2\t\t|"<<endl;
                cout<<"|IIT Bombay\t|ASE\t\t|AI\t|Open\t\t|577\t\t|2119\t\t|"<<endl;
                cout<<"|IIT Bombay\t|ASE\t\t|AI\t|Open(PwD)\t|164\t\t|164\t\t|"<<endl;
                cout<<"|IIT Bombay\t|ASE\t\t|AI\t|OBC-NCL\t|698\t\t|1159\t\t|"<<endl;
                cout<<"|IIT Bombay\t|ASE\t\t|AI\t|OBC-NCL(PwD)\t|14\t\t|14\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"Opening and closing ranks of IIT Madras round 1 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|IIT Madras\t|CSE\t\t|AI\t|Open\t\t|6\t\t|167\t\t|"<<endl;
                cout<<"|IIT Madras\t|CSE\t\t|AI\t|Open(PwD)\t|4\t\t|6\t\t|"<<endl;
                cout<<"|IIT Madras\t|CSE\t\t|AI\t|OBC-NCL\t|37\t\t|88\t\t|"<<endl;
                cout<<"|IIT Madras\t|CSE\t\t|AI\t|OBC-NCL(PwD)\t|7\t\t|7\t\t|"<<endl;
                cout<<"|IIT Madras\t|ME\t\t|AI\t|Open\t\t|827\t\t|2677\t\t|"<<endl;
                cout<<"|IIT Madras\t|ME\t\t|AI\t|Open(PwD)\t|104\t\t|124\t\t|"<<endl;
                cout<<"|IIT Madras\t|ME\t\t|AI\t|OBC-NCL\t|573\t\t|1226\t\t|"<<endl;
                cout<<"|IIT Madras\t|ME\t\t|AI\t|OBC-NCL(PwD)\t|49\t\t|49\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
             }
            else if(type=="NIT"){
                cout<<"Opening and closing ranks of round 1 for NIT's are"<<endl;
                cout<<"Opening and closing ranks of NIT Tirchy round 1 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|HS\t|Open\t\t|1528\t\t|3730\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|HS\t|Open(PwD)\t|216\t\t|216\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|HS\t|OBC-NCL\t|735\t\t|1427\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|OS\t|Open\t\t|96\t\t|759\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|OS\t|Open(PwD)\t|7\t\t|7\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|OS\t|OBC-NCL\t|155\t\t|353\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|OS\t|OBC-NCL(PwD)\t|6\t\t|6\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|HS\t|Open\t\t|3831\t\t|7437\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|HS\t|Open(PwD)\t|405\t\t|405\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|HS\t|OBC-NCL\t|1564\t\t|2127\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|OS\t|Open\t\t|1447\t\t|3288\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|OS\t|Open(PwD)\t|75\t\t|75\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|OS\t|OBC-NCL\t|643\t\t|1262\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|OS\t|OBC-NCL(PwD)\t|35\t\t|35\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"Opening and closing ranks of NIT Surathkal round 1 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|HS\t|Open\t\t|676\t\t|2546\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|HS\t|Open(PwD)\t|606\t\t|606\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|HS\t|OBC-NCL\t|715\t\t|1642\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|HS\t|OBC-NCL(PwD)\t|26\t\t|26\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|OS\t|Open\t\t|456\t\t|1083\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|OS\t|Open(PwD)\t|4\t\t|4\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|OS\t|OBC-NCL\t|249\t\t|418\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|HS\t|Open\t\t|1923\t\t|3266\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|HS\t|Open(PwD)\t|63\t\t|63\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|HS\t|OBC-NCL\t|1385\t\t|3011\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|OS\t|Open\t\t|1733\t\t|2152\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|OS\t|OBC-NCL\t|662\t\t|846\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;

            }
            else if(type=="IIIT"){
                cout<<"Opening and closing ranks of round 1 for IIIT's are"<<endl;
                cout<<"Opening and closing ranks of IIIT Allahabad round 1 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|IIIT Allahabad\t|IT\t\t|AI\t|Open\t\t|1315\t\t|4573\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT\t\t|AI\t|Open(PwD)\t|65\t\t|153\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT\t\t|AI\t|OBC-NCL\t|1099\t\t|1961\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT\t\t|AI\t|OBC-NCL(PwD)\t|63\t\t|89\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT-BI\t\t|AI\t|Open\t\t|3458\t\t|4823\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT-BI\t\t|AI\t|Open(PwD)\t|217\t\t|217\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT-BI\t\t|AI\t|OBC-NCL\t|1996\t\t|2092\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT-BI\t\t|AI\t|OBC-NCL(PwD)\t|133\t\t|133\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"Opening and closing ranks of IIIT Gwalior round 1 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|IIIT Gwalior\t|CSE\t\t|AI\t|Open\t\t|4806\t\t|5932\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|CSE\t\t|AI\t|Open(PwD)\t|185\t\t|185\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|CSE\t\t|AI\t|OBC-NCL\t|1593\t\t|2352\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|CSE\t\t|AI\t|OBC-NCL(PwD)\t|124\t\t|124\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMT\t\t|AI\t|Open\t\t|6207\t\t|9783\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMT\t\t|AI\t|Open(PwD)\t|399\t\t|399\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMT\t\t|AI\t|OBC-NCL\t|2676\t\t|4201\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMT\t\t|AI\t|OBC-NCL(PwD)\t|219\t\t|219\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMG\t\t|AI\t|Open\t\t|9130\t\t|12409\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMG\t\t|AI\t|Open(PwD)\t|708\t\t|708\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMG\t\t|AI\t|OBC-NCL\t|4260\t\t|5033\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMG\t\t|AI\t|OBC-NCL(PwD)\t|350\t\t|350\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
            }
            else{
                cout<<"this type of institue doesn't exist";
            }
                break;
            case 2:
            cout<<"enter the type of institue (IIT/NIT/IIIT)"<<endl;
            cout<<"Type of institue is case sensitive please enter all letters in caps only"<<endl;
            cin>>type;
            if(type=="IIT"){
                cout<<"Opening and closing ranks of round 2 for IIT's are"<<endl;
                cout<<"Opening and closing ranks of IIT Bombay round 2 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|IIT Bombay\t|CSE\t\t|AI\t|Open\t\t|2\t\t|61\t\t|"<<endl;
                cout<<"|IIT Bombay\t|CSE\t\t|AI\t|Open(PwD)\t|2\t\t|5\t\t|"<<endl;
                cout<<"|IIT Bombay\t|CSE\t\t|AI\t|OBC-NCL\t|9\t\t|51\t\t|"<<endl;
                cout<<"|IIT Bombay\t|CSE\t\t|AI\t|OBC-NCL(PwD)\t|1\t\t|2\t\t|"<<endl;
                cout<<"|IIT Bombay\t|ASE\t\t|AI\t|Open\t\t|577\t\t|2119\t\t|"<<endl;
                cout<<"|IIT Bombay\t|ASE\t\t|AI\t|Open(PwD)\t|164\t\t|164\t\t|"<<endl;
                cout<<"|IIT Bombay\t|ASE\t\t|AI\t|OBC-NCL\t|698\t\t|1211\t\t|"<<endl;
                cout<<"|IIT Bombay\t|ASE\t\t|AI\t|OBC-NCL(PwD)\t|14\t\t|14\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"Opening and closing ranks of IIT Madras round 2 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|IIT Madras\t|CSE\t\t|AI\t|Open\t\t|6\t\t|175\t\t|"<<endl;
                cout<<"|IIT Madras\t|CSE\t\t|AI\t|Open(PwD)\t|4\t\t|6\t\t|"<<endl;
                cout<<"|IIT Madras\t|CSE\t\t|AI\t|OBC-NCL\t|37\t\t|88\t\t|"<<endl;
                cout<<"|IIT Madras\t|CSE\t\t|AI\t|OBC-NCL(PwD)\t|7\t\t|7\t\t|"<<endl;
                cout<<"|IIT Madras\t|ME\t\t|AI\t|Open\t\t|827\t\t|2786\t\t|"<<endl;
                cout<<"|IIT Madras\t|ME\t\t|AI\t|Open(PwD)\t|104\t\t|124\t\t|"<<endl;
                cout<<"|IIT Madras\t|ME\t\t|AI\t|OBC-NCL\t|573\t\t|1258\t\t|"<<endl;
                cout<<"|IIT Madras\t|ME\t\t|AI\t|OBC-NCL(PwD)\t|49\t\t|49\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
             }
            else if(type=="NIT"){
              cout<<"Opening and closing ranks of round 2 for NIT's are"<<endl;
                cout<<"Opening and closing ranks of NIT Tirchy round 2 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|HS\t|Open\t\t|1528\t\t|4080\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|HS\t|Open(PwD)\t|216\t\t|216\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|HS\t|OBC-NCL\t|935\t\t|1546\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|OS\t|Open\t\t|241\t\t|996\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|OS\t|Open(PwD)\t|7\t\t|7\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|OS\t|OBC-NCL\t|155\t\t|367\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|CSE\t\t|OS\t|OBC-NCL(PwD)\t|6\t\t|6\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|HS\t|Open\t\t|4132\t\t|8392\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|HS\t|Open(PwD)\t|674\t\t|674\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|HS\t|OBC-NCL\t|1846\t\t|2413\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|OS\t|Open\t\t|1581\t\t|3691\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|OS\t|Open(PwD)\t|75\t\t|75\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|OS\t|OBC-NCL\t|707\t\t|1409\t\t|"<<endl;
                cout<<"|NIT Tirchy\t|ECE\t\t|OS\t|OBC-NCL(PwD)\t|35\t\t|35\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"Opening and closing ranks of NIT Surathkal round 2 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|HS\t|Open\t\t|1599\t\t|2957\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|HS\t|Open(PwD)\t|606\t\t|606\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|HS\t|OBC-NCL\t|715\t\t|1992\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|HS\t|OBC-NCL(PwD)\t|26\t\t|26\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|OS\t|Open\t\t|456\t\t|1689\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|OS\t|Open(PwD)\t|14\t\t|14\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|CSE\t\t|OS\t|OBC-NCL\t|282\t\t|444\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|HS\t|Open\t\t|1923\t\t|4377\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|HS\t|Open(PwD)\t|63\t\t|63\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|HS\t|OBC-NCL\t|3011\t\t|3784\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|OS\t|Open\t\t|2142\t\t|2677\t\t|"<<endl;
                cout<<"|NIT Surathkal\t|AI\t\t|OS\t|OBC-NCL\t|781\t\t|963\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
            }
            else if(type=="IIIT"){
                cout<<"Opening and closing ranks of round 2 for IIIT's are"<<endl;
                cout<<"Opening and closing ranks of IIIT Allahabad round 2 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|IIIT Allahabad\t|IT\t\t|AI\t|Open\t\t|1711\t\t|5282\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT\t\t|AI\t|Open(PwD)\t|65\t\t|153\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT\t\t|AI\t|OBC-NCL\t|1099\t\t|2024\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT\t\t|AI\t|OBC-NCL(PwD)\t|89\t\t|133\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT-BI\t\t|AI\t|Open\t\t|3458\t\t|5598\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT-BI\t\t|AI\t|Open(PwD)\t|236\t\t|236\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT-BI\t\t|AI\t|OBC-NCL\t|2065\t\t|2283\t\t|"<<endl;
                cout<<"|IIIT Allahabad\t|IT-BI\t\t|AI\t|OBC-NCL(PwD)\t|165\t\t|165\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"Opening and closing ranks of IIIT Gwalior round 2 are"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
                cout<<"|Institue\t|Program Name\t|Quota\t|Seat Type\t|Opening Rank\t|Closing Rank   |"<<endl;
                cout<<"|IIIT Gwalior\t|CSE\t\t|AI\t|Open\t\t|5198\t\t|6763\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|CSE\t\t|AI\t|Open(PwD)\t|347\t\t|347\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|CSE\t\t|AI\t|OBC-NCL\t|2045\t\t|2719\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|CSE\t\t|AI\t|OBC-NCL(PwD)\t|194\t\t|194\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMT\t\t|AI\t|Open\t\t|6932\t\t|11191\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMT\t\t|AI\t|Open(PwD)\t|399\t\t|399\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMT\t\t|AI\t|OBC-NCL\t|2806\t\t|4363\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMT\t\t|AI\t|OBC-NCL(PwD)\t|248\t\t|248\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMG\t\t|AI\t|Open\t\t|11206\t\t|13731\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMG\t\t|AI\t|Open(PwD)\t|708\t\t|708\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMG\t\t|AI\t|OBC-NCL\t|4396\t\t|5280\t\t|"<<endl;
                cout<<"|IIIT Gwalior\t|IMG\t\t|AI\t|OBC-NCL(PwD)\t|350\t\t|350\t\t|"<<endl;
                cout<<" ---------------------------------------------------------------------------------------"<<endl;
            }
            else{
                cout<<"this type of institue doesn't exist";
            }
                break;
            default:  
                cout<<"Input not valid"<<endl;
				break;   
        }
        

    }
    int EligibilityList :: CheckEligibility_round1(int a,int *inst,int choice[]){
        AdvancedQualified a3;
        for(int i=0;i<3;i++){
         switch(choice[i])
         {
             case 1:
             if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {  
                   if(*(a3.AdvCategoryRank.begin() + a)>=2 && *(a3.AdvCategoryRank.begin() + a)<=5){
                    cout<<"Congratulations! IIT Bombay CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=1;
                   }
                }
                else{
                       if(*(a3.Adv_CRL.begin() + a)>=1 && *(a3.Adv_CRL.begin() + a)<=60){
                    cout<<"Congratulations! IIT Bombay CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=1;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.AdvCategoryRank.begin() + a)>=1 && *(a3.AdvCategoryRank.begin() + a)<=2){
                    cout<<"Congratulations! IIT Bombay CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=1;
                   }
                }
                else{
                     if(*(a3.AdvCategoryRank.begin() + a)>=9 && *(a3.AdvCategoryRank.begin() + a)<=51){
                    cout<<"Congratulations! IIT Bombay CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=1;
                   }
                }
            }
            break;
            case 2:
                if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.AdvCategoryRank.begin() + a)>=164 && *(a3.AdvCategoryRank.begin() + a)<=164){
                    cout<<"Congratulations! IIT Bombay ASE Branch seat has been alloted to you";
                    allot=1;
                    *inst=2;
                   }
                }
                else{
                       if(*(a3.Adv_CRL.begin() + a)>=577 && *(a3.Adv_CRL.begin() + a)<=2119){
                    cout<<"Congratulations! IIT Bombay ASE Branch seat has been alloted to you";
                    allot=1;
                    *inst=2;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.AdvCategoryRank.begin() + a)>=14 && *(a3.AdvCategoryRank.begin() + a)<=14){
                    cout<<"Congratulations! IIT Bombay ASE Branch seat has been alloted to you";
                    allot=1;
                    *inst=2;
                   }
                }
                else{
                     if(*(a3.AdvCategoryRank.begin() + a)>=698 && *(a3.AdvCategoryRank.begin() + a)<=1159){
                    cout<<"Congratulations! IIT Bombay ASE Branch seat has been alloted to you";
                    allot=1;
                    *inst=2;
                   }
                }
                
            }
            break;
            case 3:
                 if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.AdvCategoryRank.begin() + a)>=4 && *(a3.AdvCategoryRank.begin() + a)<=6){
                    cout<<"Congratulations! IIT Madras CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=3;
                   }
                }
                else{
                       if(*(a3.Adv_CRL.begin() + a)>=6 && *(a3.Adv_CRL.begin() + a)<=167){
                    cout<<"Congratulations! IIT Madras CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=3;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.AdvCategoryRank.begin() + a)>=7 && *(a3.AdvCategoryRank.begin() + a)<=7){
                    cout<<"Congratulations! IIT Madras CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=3;
                   }
                }
                else{
                     if(*(a3.AdvCategoryRank.begin() + a)>=37 && *(a3.AdvCategoryRank.begin() + a)<=88){
                    cout<<"Congratulations! IIT Madras CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=3;
                   }
                }
                
            }
            break;
            case 4:
                 if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.AdvCategoryRank.begin() + a)>=104 && *(a3.AdvCategoryRank.begin() + a)<=124){
                    cout<<"Congratulations! IIT Madras ME Branch seat has been alloted to you";
                    allot=1;
                    *inst=4;
                   }
                }
                else{
                       if(*(a3.Adv_CRL.begin() + a)>=827 && *(a3.Adv_CRL.begin() + a)<=2677){
                    cout<<"Congratulations! IIT Madras ME Branch seat has been alloted to you";
                    allot=1;
                    *inst=4;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.AdvCategoryRank.begin() + a)==49){
                    cout<<"Congratulations! IIT Madras ME Branch seat has been alloted to you";
                    allot=1;
                    *inst=4;
                   }
                }
                else{
                     if(*(a3.AdvCategoryRank.begin() + a)>=573 && *(a3.AdvCategoryRank.begin() + a)<=1226){
                    cout<<"Congratulations! IIT Madras ME Branch seat has been alloted to you";
                    allot=1;
                    *inst=4;
                   }
                }
                
            }
            break;
            case 5:
                if(!((*(a3.HomeState.begin() + a)).compare("tirchy"))){
                 if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==216 ){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=1528 && *(a3.Mains_CRL.begin() + a)<=3730){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
            }
            else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=735 && *(a3.MainsCategoryRank.begin() + a)<=1427){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
            }
            else{
                 if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==7 ){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=96 && *(a3.Mains_CRL.begin() + a)<=759){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.MainsCategoryRank.begin() + a)==6 ){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
                else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=155 && *(a3.MainsCategoryRank.begin() + a)<=353){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
            }
            }
            break;
            case 6:
                if(!((*(a3.HomeState.begin() + a)).compare("tirchy"))){
                if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==405 ){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=3831 && *(a3.Mains_CRL.begin() + a)<=7437){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
            }
            else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=1564 && *(a3.MainsCategoryRank.begin() + a)<=2127){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
            }
            else{
                if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==75 ){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=1447 && *(a3.Mains_CRL.begin() + a)<=3288){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.MainsCategoryRank.begin() + a)==35 ){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
                else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=643 && *(a3.MainsCategoryRank.begin() + a)<=1262){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
            }
            }
            break;
            case 7:
                  if(!((*(a3.HomeState.begin() + a)).compare("surathkal"))){
                 if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==606 ){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=676 && *(a3.Mains_CRL.begin() + a)<=2546){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                     if(*(a3.MainsCategoryRank.begin() + a)==26){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
                else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=715 && *(a3.MainsCategoryRank.begin() + a)<=1642){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                     }
                     }
                }
            }
            else{
                 if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==4 ){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=456 && *(a3.Mains_CRL.begin() + a)<=1083){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
            }
            else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=249 && *(a3.MainsCategoryRank.begin() + a)<=418){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
            }
            break;
            case 8:
                  if(!((*(a3.HomeState.begin() + a)).compare("surathkal"))){
                if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==63 ){
                    cout<<"Congratulations! NIT Surathkal AI Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=1923 && *(a3.Mains_CRL.begin() + a)<=3266){
                    cout<<"Congratulations! NIT Surathkal AI Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                   }
                }
            }
            else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=1385 && *(a3.MainsCategoryRank.begin() + a)<=3011){
                    cout<<"Congratulations! NIT Surathkal AI Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                     }
                     
                }
            }
            else{
                if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                       if(*(a3.Mains_CRL.begin() + a)>=1733 && *(a3.Mains_CRL.begin() + a)<=2152){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                   }
            }
            else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=662 && *(a3.MainsCategoryRank.begin() + a)<=846){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                   }
                }
            }
            break;
            case 9:
                if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)>=65 && *(a3.MainsCategoryRank.begin() + a)<=154){
                    cout<<"Congratulations! IIIT Allahabad IT Branch seat has been alloted to you";
                    allot=1;
                    *inst=9;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=1315 && *(a3.Mains_CRL.begin() + a)<=4573){
                    cout<<"Congratulations! IIIT Allahabad IT Branch seat has been alloted to you";
                    allot=1;
                    *inst=9;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.MainsCategoryRank.begin() + a)>=63 && *(a3.MainsCategoryRank.begin() + a)<=89){
                    cout<<"Congratulations! IIIT Allahabad IT Branch seat has been alloted to you";
                    allot=1;
                    *inst=9;
                   }
                }
                else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=1099 && *(a3.MainsCategoryRank.begin() + a)<=1961){
                    cout<<"Congratulations! IIIT Allahabad IT Branch seat has been alloted to you";
                    allot=1;
                    *inst=9;
                   }
                }
                
            }
            break;
            case 10:
                 if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==217){
                    cout<<"Congratulations! IIIT Allahabad IT-BI Branch seat has been alloted to you";
                    allot=1;
                    *inst=10;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=3458 && *(a3.Mains_CRL.begin() + a)<=4823){
                    cout<<"Congratulations! IIIT Allahabad IT-BI Branch seat has been alloted to you";
                    allot=1;
                    *inst=10;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.MainsCategoryRank.begin() + a)==133 ){
                    cout<<"Congratulations! IIIT Allahabad IT-BI Branch seat has been alloted to you";
                    allot=1;
                    *inst=10;
                   }
                }
                else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=1996 && *(a3.MainsCategoryRank.begin() + a)<=2092){
                    cout<<"Congratulations! IIIT Allahabad IT-BI Branch seat has been alloted to you";
                    allot=1;
                    *inst=10;
                   }
                }
                
            }
            break;
            case 11:
                 if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==185 ){
                    cout<<"Congratulations! IIIT Gwalior CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=11;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=4806 && *(a3.Mains_CRL.begin() + a)<=5932){
                    cout<<"Congratulations! IIIT Gwalior CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=11;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.MainsCategoryRank.begin() + a)==124){
                    cout<<"Congratulations! IIIT Gwalior CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=11;
                   }
                }
                else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=1593 && *(a3.MainsCategoryRank.begin() + a)<=2352){
                    cout<<"Congratulations! IIIT Gwalior CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=11;
                   }
                }
                
            }
            break;
            case 12:
                  if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==399 ){
                    cout<<"Congratulations! IIIT Gwalior IMT Branch seat has been alloted to you";
                    allot=1;
                    *inst=12;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=6207 && *(a3.Mains_CRL.begin() + a)<=9783){
                    cout<<"Congratulations! IIIT Gwalior IMT Branch seat has been alloted to you";
                    allot=1;
                    *inst=12;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.MainsCategoryRank.begin() + a)==219){
                    cout<<"Congratulations! IIIT Gwalior IMT Branch seat has been alloted to you";
                    allot=1;
                    *inst=12;
                   }
                }
                else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=2676 && *(a3.MainsCategoryRank.begin() + a)<=4201){
                    cout<<"Congratulations! IIIT Gwalior IMT Branch seat has been alloted to you";
                    allot=1;
                    *inst=12;
                   }
                }
                
            }
            break;
            case 13:
                 if(!((*(a3.Category.begin() + a)).compare("open")))
            {
                if(*(a3.pwd.begin() + a))
                {
                    if(*(a3.MainsCategoryRank.begin() + a)==708 ){
                    cout<<"Congratulations! IIIT Gwalior IMG Branch seat has been alloted to you";
                    allot=1;
                    *inst=13;
                   }
                }
                else{
                       if(*(a3.Mains_CRL.begin() + a)>=9130 && *(a3.Mains_CRL.begin() + a)<=12409){
                    cout<<"Congratulations! IIIT Gwalior IMG Branch seat has been alloted to you";
                    allot=1;
                    *inst=13;
                   }
                }
            }
            else{
                if(*(a3.pwd.begin() + a))
                {
                   if(*(a3.MainsCategoryRank.begin() + a)==350){
                    cout<<"Congratulations! IIIT Gwalior IMG Branch seat has been alloted to you";
                    allot=1;
                    *inst=13;
                   }
                }
                else{
                     if(*(a3.MainsCategoryRank.begin() + a)>=4260 && *(a3.MainsCategoryRank.begin() + a)<=5033){
                    cout<<"Congratulations! IIIT Gwalior IMG Branch seat has been alloted to you";
                    allot=1;
                    *inst=13;
                   }
                }  
            }
            break;
        }
        if(allot==1){
            cout<<endl<<endl;
            break;
        }
    }
    return 1;
}
    void EligibilityList :: CheckEligibility_round2(int a,int *inst,int choice[]){
        AdvancedQualified a4;
        for(int i=0;i<3;i++){
            allot=0;
         switch(choice[i])
         {
            case 1:
            if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.AdvCategoryRank.begin() + a)>=2 && *(a4.AdvCategoryRank.begin() + a)<=5){
                    cout<<"Congratulations! IIT Bombay CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=1;
                   }
                }
                else{
                       if(*(a4.Adv_CRL.begin() + a)>=2 && *(a4.Adv_CRL.begin() + a)<=61){
                    cout<<"Congratulations! IIT Bombay CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=1;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.AdvCategoryRank.begin() + a)>=1 && *(a4.AdvCategoryRank.begin() + a)<=2){
                    cout<<"Congratulations! IIT Bombay CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=1;
                   }
                }
                else{
                     if(*(a4.AdvCategoryRank.begin() + a)>=9 && *(a4.AdvCategoryRank.begin() + a)<=51){
                    cout<<"Congratulations! IIT Bombay CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=1;
                   }
                }
            }
            break;
            case 2:
                 if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.AdvCategoryRank.begin() + a)==164 ){
                    cout<<"Congratulations! IIT Bombay ASE Branch seat has been alloted to you";
                    allot=1;
                    *inst=2;
                   }
                }
                else{
                       if(*(a4.Adv_CRL.begin() + a)>=577 && *(a4.Adv_CRL.begin() + a)<=2119){
                    cout<<"Congratulations! IIT Bombay ASE Branch seat has been alloted to you";
                    allot=1;
                    *inst=2;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.AdvCategoryRank.begin() + a)==14 ){
                    cout<<"Congratulations! IIT Bombay ASE Branch seat has been alloted to you";
                    allot=1;
                    *inst=2;
                   }
                }
                else{
                     if(*(a4.AdvCategoryRank.begin() + a)>=698 && *(a4.AdvCategoryRank.begin() + a)<=1211){
                    cout<<"Congratulations! IIT Bombay ASE Branch seat has been alloted to you";
                    allot=1;
                    *inst=2;
                   }
                }
                
            }
            break;
            case 3:
                 if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.AdvCategoryRank.begin() + a)>=4 && *(a4.AdvCategoryRank.begin() + a)<=6){
                    cout<<"Congratulations! IIT Madras CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=3;
                   }
                }
                else{
                       if(*(a4.Adv_CRL.begin() + a)>=6 && *(a4.Adv_CRL.begin() + a)<=175){
                    cout<<"Congratulations! IIT Madras CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=3;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.AdvCategoryRank.begin() + a)==7 ){
                    cout<<"Congratulations! IIT Madras CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=3;
                   }
                }
                else{
                     if(*(a4.AdvCategoryRank.begin() + a)>=37 && *(a4.AdvCategoryRank.begin() + a)<=88){
                    cout<<"Congratulations! IIT Madras CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=3;
                   }
                }
                
            }
            break;
            case 4:
                 if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.AdvCategoryRank.begin() + a)>=104 && *(a4.AdvCategoryRank.begin() + a)<=124){
                    cout<<"Congratulations! IIT Madras ME Branch seat has been alloted to you";
                    allot=1;
                    *inst=4;
                   }
                }
                else{
                       if(*(a4.Adv_CRL.begin() + a)>=827 && *(a4.Adv_CRL.begin() + a)<=2786){
                    cout<<"Congratulations! IIT Madras ME Branch seat has been alloted to you";
                    allot=1;
                    *inst=4;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.AdvCategoryRank.begin() + a)==49){
                    cout<<"Congratulations! IIT Madras ME Branch seat has been alloted to you";
                    allot=1;
                    *inst=4;
                   }
                }
                else{
                     if(*(a4.AdvCategoryRank.begin() + a)>=573 && *(a4.AdvCategoryRank.begin() + a)<=1258){
                    cout<<"Congratulations! IIT Madras ME Branch seat has been alloted to you";
                    allot=1;
                    *inst=4;
                   }
                }
                
            }
            break;
            case 5:
                if(*(a4.HomeState.begin() + a)=="tirchy"){
                if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==216 ){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=1528 && *(a4.Mains_CRL.begin() + a)<=4080){
                    cout<<"Congratulations! NIT Tirchy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
            }
            else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=935 && *(a4.MainsCategoryRank.begin() + a)<=1546){
                    cout<<"Congratulations! NIT Tirchy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
            }
            else{
                if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==7 ){
                    cout<<"Congratulations! NIT Tirchy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=241 && *(a4.Mains_CRL.begin() + a)<=996){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.MainsCategoryRank.begin() + a)==6 ){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
                else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=155 && *(a4.MainsCategoryRank.begin() + a)<=367){
                    cout<<"Congratulations! NIT Trichy CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=5;
                   }
                }
            }
            }
            break;
            case 6:
                 if(!((*(a4.HomeState.begin() + a)).compare("tirchy"))){
                if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==674 ){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=4132 && *(a4.Mains_CRL.begin() + a)<=8392){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
            }
            else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=1846 && *(a4.MainsCategoryRank.begin() + a)<=2413){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
            }
            else{
                if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==75 ){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=1581 && *(a4.Mains_CRL.begin() + a)<=3691){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.MainsCategoryRank.begin() + a)==35 ){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
                else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=707 && *(a4.MainsCategoryRank.begin() + a)<=1409){
                    cout<<"Congratulations! NIT Trichy ECE Branch seat has been alloted to you";
                    allot=1;
                    *inst=6;
                   }
                }
            }
            }
            break;
            case 7:
                  if(!((*(a4.HomeState.begin() + a)).compare("surathkal"))){
                if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==606 ){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=1599 && *(a4.Mains_CRL.begin() + a)<=2957){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                     if(*(a4.MainsCategoryRank.begin() + a)==26 ){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
                else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=715 && *(a4.MainsCategoryRank.begin() + a)<=1992){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                     }
                     }
                }
            }
            else{
                 if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==14 ){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=456&& *(a4.Mains_CRL.begin() + a)<=1689){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
            }
            else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=282 && *(a4.MainsCategoryRank.begin() + a)<=444){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=7;
                   }
                }
            }
            break;
            case 8:
                if(!((*(a4.HomeState.begin() + a)).compare("surathkal"))){
              if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==63 ){
                    cout<<"Congratulations! NIT Surathkal AI Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=1923 && *(a4.Mains_CRL.begin() + a)<=4377){
                    cout<<"Congratulations! NIT Surathkal AI Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                   }
                }
            }
            else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=3011 && *(a4.MainsCategoryRank.begin() + a)<=3784){
                    cout<<"Congratulations! NIT Surathkal AI Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                     }
                     
                }
            }
            else{
                 if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                       if(*(a4.Mains_CRL.begin() + a)>=2142&& *(a4.Mains_CRL.begin() + a)<=2677){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                   }
            }
            else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=781 && *(a4.MainsCategoryRank.begin() + a)<=963){
                    cout<<"Congratulations! NIT Surathkal CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=8;
                   }
                }
            }
            break;
            case 9:
                 if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)>=65 && *(a4.MainsCategoryRank.begin() + a)<=153){
                    cout<<"Congratulations! IIIT Allahabad IT Branch seat has been alloted to you";
                    allot=1;
                    *inst=9;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=1711 && *(a4.Mains_CRL.begin() + a)<=5282){
                    cout<<"Congratulations! IIIT Allahabad IT Branch seat has been alloted to you";
                    allot=1;
                    *inst=9;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.MainsCategoryRank.begin() + a)>=89 && *(a4.MainsCategoryRank.begin() + a)<=133){
                    cout<<"Congratulations! IIIT Allahabad IT Branch seat has been alloted to you";
                    allot=1;
                    *inst=9;
                   }
                }
                else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=1099 && *(a4.MainsCategoryRank.begin() + a)<=2024){
                    cout<<"Congratulations! IIIT Allahabad IT Branch seat has been alloted to you";
                    allot=1;
                    *inst=9;
                   }
                }
                
            }
            break;
            case 10:
                 if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==236){
                    cout<<"Congratulations! IIIT Allahabad IT-BI Branch seat has been alloted to you";
                    allot=1;
                    *inst=10;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=3458 && *(a4.Mains_CRL.begin() + a)<=5598){
                    cout<<"Congratulations! IIIT Allahabad IT-BI Branch seat has been alloted to you";
                    allot=1;
                    *inst=10;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.MainsCategoryRank.begin() + a)==165 ){
                    cout<<"Congratulations! IIIT Allahabad IT-BI Branch seat has been alloted to you";
                    allot=1;
                    *inst=10;
                   }
                }
                else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=2065 && *(a4.MainsCategoryRank.begin() + a)<=2283){
                    cout<<"Congratulations! IIIT Allahabad IT-BI Branch seat has been alloted to you";
                    allot=1;
                    *inst=10;
                   }
                }
                
            }
            break;
            case 11:
                if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==347 ){
                    cout<<"Congratulations! IIIT Gwalior CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=11;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=5198 && *(a4.Mains_CRL.begin() + a)<=6763){
                    cout<<"Congratulations! IIIT Gwalior CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=11;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.MainsCategoryRank.begin() + a)==194){
                    cout<<"Congratulations! IIIT Gwalior CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=11;
                   }
                }
                else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=1593 && *(a4.MainsCategoryRank.begin() + a)<=2719){
                    cout<<"Congratulations! IIIT Gwalior CSE Branch seat has been alloted to you";
                    allot=1;
                    *inst=11;
                   }
                }
                
            }
            break;
            case 12:
                  if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==399 ){
                    cout<<"Congratulations! IIIT Gwalior IMT Branch seat has been alloted to you";
                    allot=1;
                    *inst=12;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=6932 && *(a4.Mains_CRL.begin() + a)<=11191){
                    cout<<"Congratulations! IIIT Gwalior IMT Branch seat has been alloted to you";
                    allot=1;
                    *inst=12;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.MainsCategoryRank.begin() + a)==248){
                    cout<<"Congratulations! IIIT Gwalior IMT Branch seat has been alloted to you";
                    allot=1;
                    *inst=12;
                   }
                }
                else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=2806 && *(a4.MainsCategoryRank.begin() + a)<=4363){
                    cout<<"Congratulations! IIIT Gwalior IMT Branch seat has been alloted to you";
                    allot=1;
                    *inst=12;
                   }
                }
                
            }
            break;
            case 13:
                if(!((*(a4.Category.begin() + a)).compare("open")))
            {
                if(*(a4.pwd.begin() + a))
                {
                    if(*(a4.MainsCategoryRank.begin() + a)==708 ){
                    cout<<"Congratulations! IIIT Gwalior IMG Branch seat has been alloted to you";
                    allot=1;
                    *inst=13;
                   }
                }
                else{
                       if(*(a4.Mains_CRL.begin() + a)>=11206 && *(a4.Mains_CRL.begin() + a)<=13731){
                    cout<<"Congratulations! IIIT Gwalior IMG Branch seat has been alloted to you";
                    allot=1;
                    *inst=13;
                   }
                }
            }
            else{
                if(*(a4.pwd.begin() + a))
                {
                   if(*(a4.MainsCategoryRank.begin() + a)==350){
                    cout<<"Congratulations! IIIT Gwalior IMG Branch seat has been alloted to you";
                    allot=1;
                    *inst=13;
                   }
                }
                else{
                     if(*(a4.MainsCategoryRank.begin() + a)>=4396 && *(a4.MainsCategoryRank.begin() + a)<=5280){
                    cout<<"Congratulations! IIIT Gwalior IMG Branch seat has been alloted to you";
                    allot=1;
                    *inst=13;
                   }
                }
         }
         break;
        }  
         if(allot==1){
            cout<<endl<<endl;
            break;
        }  
    }
    }