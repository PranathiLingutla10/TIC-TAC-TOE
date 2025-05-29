#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char name[30],dosa1[]="Masala Dosa",dosa2[]="Egg Dosa",dosa3[]="Paneer Dosa",dosa4[]="Gobi Dosa",roll1[]="Egg roll",roll2[]="Veg roll",roll3[]="veg cheese roll",naan1[]="Butter Naan",naan2[]="Garlic Naan",naan3[]="Butter Kulcha";
	char curr1[]="Panner Butter masala",curr2[]="Egg kheema masala",curr3[]="Kaju paneer masala";
	char bir1[]="Egg Biryani",bir2[]="Veg Biryani",bir3[]="Brinjal Biryani",gotostart;
	int choice=0,pchoice,pchoice1,quantity;
	beginning:
	system("CLS");
	cout<<"---- Pranathi's Food restaurant -----\n";
	cout<<"please enter your name";
	cin.getline(name,20);
	cout<<"Hello"<<name<<"What would you like to order?\n";
	cout<<"----Menu----\n";
	cout<<"1) Dosas\n";
    cout<<"2) Naans\n";
    cout<<"3) Curries\n";
    cout<<"4) Rolls\n";
    cout<<"5) Biryani\n\n";
    cout<<"\nPlease Enter your Choice: ";
    cin>>choice;
    if(choice==1){
    	cout<<"\n1 "<<dosa1<<" Rs.50"<<"\n";
        cout<<"2 "<<dosa2<<" Rs.60"<<"\n";
        cout<<"3 "<<dosa3<<" Rs.50"<<"\n";
        cout<<"4 "<<dosa4<<" Rs.50"<<"\n";
        cout<<"\nPlease Enter what type of dosa you like to have?: ";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=4)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice1)
            {
            case 1: choice = 50*quantity;
            break;
            case 2: choice = 60*quantity;
            break;
            case 3: choice = 50*quantity;
            break;
            case 4: choice = 50*quantity;
            }
            system("CLS");
            switch (pchoice1)
            {
             case 1:
             cout<<"\n--------Your Order---------\n";
             cout<<""<<quantity<<" "<<dosa1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
             case 2:
             cout<<"\n--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<dosa2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<dosa3;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
             case 4:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<dosa4;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
            }
            cout<<"\nWould you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
              //return 0;
            }
	}
}
 else if(choice==2)
     {
        cout<<"\n1 "<<naan1<<" Rs.120"<<"\n";
        cout<<"2 "<<naan2<<" Rs.150"<<"\n";
        cout<<"3 "<<naan3<<" Rs.100"<<"\n";
        
        cout<<"\nPlease Enter which type of Naan you like to have?: ";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice1)
            {
            case 1: choice = 120*quantity;
            break;
            case 2: choice = 150*quantity;
            break;
            case 3: choice = 100*quantity;
            break;
            }
            system("CLS");
            switch (pchoice1)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<naan1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant \n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<naan2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's restaurant\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<naan3;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
            }
            cout<<"\nWould you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
              //return 0;
            }
        }
    }
    else if(choice==3)
     {
        cout<<"\n1  "<<curr1<<" Rs.220"<<"\n";
        cout<<"2  "<<curr2<<" Rs.240"<<"\n";
        cout<<"3  "<<curr3<<" Rs.260"<<"\n";
     
        cout<<"\nPlease Enter which curry you would like to have?:";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice1)
            {
            case 1: choice = 220*quantity;
            break;
            case 2: choice = 240*quantity;
            break;
            case 3: choice = 260*quantity;
            break;
            }
            system("CLS");
            switch (pchoice1)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<curr1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<curr2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<curr3;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
            }
            cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
              //return 0;
            }
            }
            }
            else if(choice==4)
     {
        cout<<"\n1 "<<roll1<<" Rs.90"<<"\n";
        cout<<"2 "<<roll2<<" Rs.70"<<"\n";
        cout<<"3 "<<roll3<<" Rs.80"<<"\n";
        
        cout<<"\nPlease Enter which you would like to have?: ";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=3)
        {
            cout<<"\nHow Many Rolls Do you want: ";
            cin>>quantity;
            switch(pchoice1)
            {
            case 1: choice = 90*quantity;
            break;
            case 2: choice = 70*quantity;
            break;
            case 3: choice = 80*quantity;
            break;
            }
            system("CLS");
            switch (pchoice1)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<roll1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<roll2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<roll3;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
            }
 }
}
else if(choice==5)
     {
        cout<<"\n1 "<<bir1<<" Rs.200"<<"\n";
        cout<<"2 "<<bir2<<" Rs.140"<<"\n";
        cout<<"3 "<<bir3<<" Rs.160"<<"\n";
        cout<<"\nPlease Enter which Biryani you would like to have?:";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice1)
            {
            case 1: choice = 200*quantity;
            break;
            case 2: choice = 140*quantity;
            break;
            case 3: choice = 160*quantity;
            break;
            }
            system("CLS");
            switch (pchoice1)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bir1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<bir2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bir3;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Pranathi's Restaurant\n";
             break;
            }
            cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
              //return 0;
            }
            }
            }
            else
            {
                system("CLS");
                cout<<"Please Select Right Option: \n";
                cout<<"Would You like to Start the program again? Y / N: " ;
                cin>>gotostart;
                if(gotostart=='Y' || gotostart=='y')
                {
                  goto beginning;
              //return 0;
            }
            }
     getch();
}
