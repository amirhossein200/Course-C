#include <iostream>
#include<string>
#include<string.h>

using namespace std;

/*
firstName
middleName
lastName
Sex
yearofBirth
registrationNumber
email
*/
class student{
public:
    // property
    string firstName;

    string middleName;
    string lastName;
    bool sex;
    int yearOfBirth;
    string registrationNumber;
    string email;

    // methode
    student(){
        this->firstName = " ";
        this->middleName = " ";
        this->lastName = " ";
        this->sex = true;// man = true , womman= false
        this->yearOfBirth = 0;
        this->registrationNumber = "981551";
        this->email = "mail@mail.com";
    }

    void getStudent(){
        cout<< "first name:";
        cin >> this->firstName;
        cout<< "middle name: ";
        cin>>this->middleName;
        cout<< "last name: ";
        cin>>this->lastName;
        cout<< "sex: ";
        cin>>this->sex;
        cout<< "year of birth: ";
        cin>>this->yearOfBirth;
        cout<< "registration number :";
        cin>>this->registrationNumber;
        cout<< "email: ";
        cin>> this->email;

    }

    void showStudent(){
        cout<<this->firstName;
        cout<<this->middleName;
        cout<<this->lastName<<this->sex<<this->yearOfBirth<<this->registrationNumber<< this->email;
    }

}st[7];



int main()
{

    for(int i= 0; i<2; i++)
    {
        cout<< "student number " << i+1<< ": \n";
        st[i].getStudent();
    }
    for(int j = 0; j<2; j++)
    {
        cout<< "student number " << j+1<< ": \n";
        st[j].showStudent();
    }
    return 0;
}
