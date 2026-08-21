#include <iostream>
using namespace std;
 
int main() {
    int quant;
    int choice;
    //quanitity
    int Qrooms = 0 , Qpasta = 0 , Qnoodles = 0 , Qburger = 0 , Qroti = 0 , Qsabji = 0;
    //food items sold
    int Srooms = 0 , Spasta = 0 , Snoodles = 0 , Sburger = 0 , Sroti = 0 , Ssabji = 0;
    //Total proce of items 
    int Total_rooms = 0 , Total_pasta = 0 , Total_noodles = 0 , Total_burger = 0 , Total_roti = 0 , Total_sabji = 0;

    cout<<"\n\t Quantity of items we have ";
    cout<<"\n Rooms Availaible : ";
    cin>>Qrooms;
    cout<<"\n Quantity of Pasta we have ";
    cin>>Qpasta;
    cout<<"\n Quantity of Noodles we have ";
    cin>>Qnoodles;
    cout<<"\n Quantity of Burger we have ";
    cin>>Qburger;
    cout<<"\n Quantity of Roti we have ";
    cin>>Qroti;
    cout<<"\n Quantity of Sabji we have ";
    cin>>Qsabji;

    m:
    cout<<"\n\t\t\t Please select from the menu options : ";
    cout<<"\n\n1)  Rooms  ";
    cout<<"\n2)  Pasta  ";
    cout<<"\n3)  Noodles  ";
    cout<<"\n4)  Burger  ";
    cout<<"\n5)  Roti  ";
    cout<<"\n6)  Sabji  ";
    cout<<"\n7)  Informaton regarding Sales and Collection  ";
    cout<<"\n8)  Exit  ";

    cout<<"\n\n Please enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1 : 
            cout<<"Enter the number of rooms you want :";
            cin>>quant;
            if((Qrooms-Srooms) >= quant){
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*1200;
                cout<<"\n\n\t\t"<<quant<<" room/rooms have alloted to you";

            }
            else{
                cout<<"\n\tonly "<<Qrooms-Srooms<<" Rooms remaing in hotel\n";
                break;
            }

        case 2 :
            cout<<"\n Enter the quantity of pasta you want :\n";
            cin>>quant;
            if((Qpasta-Spasta) >= quant){
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+quant*250;
                cout<<"\n\n\t\t"<<quant<<" pasta is the order\n";

            }
            else{
                cout<<"\n\tonly "<<Qpasta-Spasta<<" Pasta remaing in hotel\n";
                break;
            }

        case 3 :
            
            cout<<"\n Enter the quantity of Burger you want :";
            cin>>quant;
            if((Qburger-Sburger) >= quant){
                Sburger=Sburger+quant;
                Total_burger=Total_burger+quant*120;
                cout<<"\n\n\t\t"<<quant<<" burger is the order";

            }
            else{
                cout<<"\n\tonly "<<Qburger-Sburger<<" Burger remaing in hotel!";
                break;
            }

        case 4 : 
         
            cout<<"\n Enter the quantity of noodle you want :";
            cin>>quant;
            if((Qnoodles-Snoodles) >= quant){
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*250;
                cout<<"\n\n\t\t"<<quant<<" noodles is the order";

            }
            else{
                cout<<"\n\tonly "<<Qnoodles-Snoodles<<" Noodles remaing in hotel";
                break;
            }

            case 5 :
            cout<<"\n Enter the quantity of roti you want :";
            cin>>quant;
            if((Qroti-Sroti) >= quant){
                Sroti=Sroti+quant;
                Total_roti=Total_roti+quant*100;
                cout<<"\n\n\t\t"<<quant<<" roti is the order";

            }
            else{
                cout<<"\n\tonly "<<Qroti-Sroti<<" roti remaing in hotel";
                break;
            }

            case 6 :
            cout<<"\n Enter the quantity of sabji you want :";
            cin>>quant;
            if((Qsabji-Ssabji) >= quant){
                Ssabji=Ssabji+quant;
                Total_sabji=Total_sabji+quant*250;
                cout<<"\n\n\t\t"<<quant<<" sabji is the order";

            }
            else{
                cout<<"\n\tonly "<<Qsabji-Ssabji<<" Sabji remaing in hotel";
                break;
            }

            case 7 :
                cout<<"\n\tDetails of sails and collection ";
                cout<<"\n\n Number of rooms we had : "<<Qrooms;
                cout<<"Number of rooms we gave for rent : "<<Srooms;
                cout<<"Remaining Rooms : "<<Qrooms-Srooms;
                cout<<"\n Total Rooms collection for the day : "<<Total_rooms;

        
                cout<<"\n\n Number of Pasta we had : "<<Qpasta;
                cout<<"Number of pasta we sold : "<<Spasta;
                cout<<"Remaining pasta : "<<Qpasta-Spasta;
                cout<<"\n Total Pasta collection for the day : "<<Total_pasta;

                
                cout<<"\n\n Number of Burger we had : "<<Qburger;
                cout<<"Number of Burger we sold : "<<Sburger;
                cout<<"Remaining Burger : "<<Qburger-Sburger;
                cout<<"\n Total Burger collection for the day : "<<Total_burger;

                
                cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
                cout<<"Number of Noodles we sold : "<<Snoodles;
                cout<<"Remaining Noodles : "<<Qnoodles-Snoodles;
                cout<<"\n Total Noodles collection for the day : "<<Total_noodles;

                cout<<"\n\n Number of Roti we had : "<<Qroti;
                cout<<"Number of Roti we sold : "<<Sroti;
                cout<<"Remaining Roti : "<<Qroti-Sroti;
                cout<<"\n Total Roti collection for the day : "<<Total_roti;

                cout<<"\n\n Number of Sabji we had : "<<Qsabji;
                cout<<"Number of Sabji we sold : "<<Ssabji;
                cout<<"Remaining Sabji : "<<Qsabji-Ssabji;
                cout<<"\n Total Sabji collection for the day : "<<Total_sabji;

                case 8 :
                    exit(0);

                    default:
                    cout<<"\n Please select the number mentioned above !";

                
                

    }
    goto m;




    return 0;
}
