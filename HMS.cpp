#include<iostream>

using namespace std;

class User
{ 
    public:
  int id; 
   string name;
  int age; 
  string gender;
   User() {} 
   virtual void printDetails()=0; 
};

class Patient:public User{ };

class Prescription
{
     public: 
     int presId;
    Patient* p;
     bool medication; 
     string drug; 
     string dosage; 
     Prescription(){} 
     Prescription(int presId,bool medication,string drug,string dosage) 
     { 
        this->presId=presId; 
        this->medication=medication; 
        this->drug=drug; 
        this->dosage=dosage; 
    } 
        void printDetails() 
        { 
            cout<<presId<<medication<<drug<<dosage<<endl;
        } 
};

class Doctor:public User
{ 
    public: 
    string specialization; 
    string qualification;
     Prescription *pres; 
     Doctor() {} 
     Doctor(int id,string name,int age,string specialization,string qualification):User(id,name,age) 
     { 
        this->specialization=specialization;
        this->qualification=qualification; 
     } 
     void PrescribeMedication() 
     { 
        if(pres->medication==yes) 
        { //test } 
    } 
};