#include <bits/stdc++.h>
#include <windef.h> //for sleep function
using namespace std;

//Function for running bar

//This function will show the loading bar on the screen
void start()
{
    system("Color 0B");
    //this is used to give or change the color of the console 
    //the ranges are 
    //[0 to 9]=To change the color for background or console and
    // [A - F]= to change the test color

    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t---------------------------\n";
    cout<<"\t\t\t\t\t\t\t---------------------------\n";
    cout<<"\t\t\t\t\t\t\t   PHONE BOOK APPLICATION\n";
    cout<<"\t\t\t\t\t\t\t---------------------------\n";
    cout<<"\t\t\t\t\t\t\tLOADING ";
    char x = 219;
    for(int i=0; i<35; i++)
    {
        cout<<x;
        if(i<10);
        _sleep(300);
        if(i>=10 && i<20)
        _sleep(150);
        if(i>=10)
        _sleep(25);
    }
    system("cls");
}

//This function will show the menu what the user wants to do

int menu()
{
    cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t--------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t--------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t||       PHONE BOOK APPLICATION     ||\n";
    cout<<"\t\t\t\t\t\t\t--------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t||                                  ||\n";
    cout<<"\t\t\t\t\t\t\t||       [1] ADD CONTACTS           ||\n";
    cout<<"\t\t\t\t\t\t\t||       [2] DISPLAY ALL CONTACTS   ||\n";
    cout<<"\t\t\t\t\t\t\t||       [3] SEARCH BY NUMBER       ||\n";
    cout<<"\t\t\t\t\t\t\t||       [4] SEARCH BY NAME         ||\n";
    cout<<"\t\t\t\t\t\t\t||       [5] UPDATE                 ||\n";
    cout<<"\t\t\t\t\t\t\t||       [6] DELETE                 ||\n";
    cout<<"\t\t\t\t\t\t\t||       [7] DELETE ALL             ||\n";
    cout<<"\t\t\t\t\t\t\t||       [8] NUMBER OF CONTATCTS    ||\n";
    cout<<"\t\t\t\t\t\t\t||                                  ||\n";
    cout<<"\t\t\t\t\t\t\t--------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t||       [9] EXIT                   ||\n";
    cout<<"\t\t\t\t\t\t\t--------------------------------------\n";

    int a;
    cout<<"\t\t\t\t\t\t\t||                                  ||\n";
    cout<<"\t\t\t\t\t\t\t|| ENTER A NUMBER FROM MENU: ";cin>>a;cout<<"||";
    //cin>>a;

    system("cls");
    return a;
}
//Global variable is the index number
int k= 0;

int main(){

    start();
    string Name[100];
    string No[100];
    int check=0;
    int Total_Contacts=0;
    check = menu();
    do{
        // TO add contacts

        if(check==1)
        {
            cout<<"\t\t\t\t\t Name : ";
            cin>>Name[k]; 
            cout<<"\t\t\t\t\t No : ";
            cin>>No[k];
            k++;
            Total_Contacts++;
        }

        //Display all the contacts

        else if(check==2)
        {
            int check2 = 0;
            for(int i=0; i<100; i++)
            {
                if(Name[i]!= "\0")
                cout<<"\t\t\t\t\t Name :"<<Name[i]<< "        Phone :"<<No[i]<<endl;
                check2++;
            }
            
        }

        //Search by number

        else if(check==3)
        {
            string temp;
            cout<<"\t\t\t\t\tNumber: ";
            cin>>temp;
            int check2=0;
            for(int i=0; i<100; i++)
            {
                if(temp==No[i])
                {
                    cout<<"\t\t\t\t\t\t\tNumber is Found\n";
                    cout<<"\t\t\t\t\t\t\tName : "<<Name[i]<<"       Phone: "<<No[i]<<endl;
                    check2++;
                }
            }
            if(check2==0)
                cout<<"\t\t\t\t\t\t\tThis Number is not found in your Contact List\n";
        }

        //Seacrh by Name

        else if(check==4)
        {
            string temp;
            cout<<"\t\t\t\t\tName: ";
            cin>>temp;
            int check2=0;
            for(int i=0; i<100; i++)
            {
                if(temp==Name[i])
                {
                    cout<<"\t\t\t\t\tName is Found\n";
                    cout<<"\t\t\t\t\tName : "<<Name[i]<<"       Phone: "<<No[i]<<endl;
                    check2++;
                }
            } 
            if(check2==0)
                cout<<"\t\t\t\t\tThis Name is not found in your Contact List\n";
        }

        //Update the contact in the list

        else if(check==5)
        {
            string temp,temp2,temp3;
            cout<<"\t\t\t\t\tName: ";
            cin>>temp;
            int check2=0;
            for(int i=0; i<100; i++)
            {
                if(temp==Name[i])
                {
                    cout<<"\t\t\t\t\tEnter New Name: ";
                    cin>>temp2;
                    cout<<"\t\t\t\t\tEnter New Number: ";
                    cin>>temp3;
                    Name[i] = temp2;
                    No[i] = temp3;
                    check2++;
                    cout<<"\t\t\t\t\tUpdated Successfully ";
                }
            }
            if(check2==0)
            {
                cout<<"\t\t\t\t\t This Name is not found in your Contact List\n";
            }
        }

        //TO Delete a contact from the list

        else if(check==6)
        {
            string temp;
            cout<<"\t\t\t\t\tFor Delete Enter Name: ";
            cin>>temp;
            int check2 = 0;
            for(int i=0; i<100; i++)
            {
                if(temp==Name[i])
                {
                    cout<<"\t\t\t\t\tDeleted Successfully\n";
                    cout<<"\t\t\t\t\tName : "<<Name[i]<<"       Phone: "<<No[i]<<endl;
                    Name[i] = "\0";
                    No[i] = "\0";
                    check2++;
                    Total_Contacts--;
                }
                if(check2==0)
                    cout<<"\t\t\t\t\t This name is not found in your contact list\n";
            }
        }

        //Delete all Contacts in the list

        else if(check==7)
        {
                    cout<<"\t\t\t\t\tAll Deleted Successfully\n";
                    for(int i=0; i<k; i++)
                    {
                        Name[i] = "\0";
                        No[i] = "\0";
                    }
                    k=0;
                    Total_Contacts = 0;
        }

        //display total numbers of contacts in the list

        else if(check==8)
            cout<<"\t\t\t\t\tTotal Number of contact's in list are : " <<Total_Contacts<<endl;

        check = menu();
    }while(check!=9);
return 0;
}





/*

1--BLUE             
2--GREEN
3--AQUA
4--RED
5--PURPLE
6--YELLOW
7--WHITE
8--GRAY
9--LIGHT BLUE
0--BLACK

A--LIGHT GREEN
B--LIGHT AQUA
C--LIGHT RED
D--LIGHT PURPLE
E--LIGHT YELLOW
F--BRIGHT WHITE


*/