#include<iostream>
using namespace std;

struct inventory{
    string name;
    int id;
    double purchasecost;
    double sellingprice;
    int units;
};

int main(){
    const int MAX=50;
    inventory system[MAX];
    int count=0;
    int choice;
    char again='y';

    while(again=='y'||again=='Y'){

        cout<<"\n===============================================\n";
        cout<<"   CRUD BASED INVENTORY STOCK RECORD SYSTEM\n";
        cout<<"===============================================\n";

        cout<<"\n--------------- MAIN MENU ----------------\n";
        cout<<" 1. Add New Product to Inventory\n";
        cout<<" 2. View Inventory Data\n";
        cout<<" 3. Update Existing Product\n";
        cout<<" 4. Delete a Product\n";
        cout<<" 5. Exit\n";
        cout<<"------------------------------------------\n";
        cout<<" Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                if(count>=MAX){
                    cout<<"\n----- No more data can be included! -----\n";
                }
                else{
                    cout<<"\nEnter the name of the stock: ";
                    cin.ignore();
                    getline(cin, system[count].name);

                    cout<<"Enter the ID of the stock(it should be numbers): ";
                    cin>>system[count].id;

                    cout<<"Enter the purchase cost: ";
                    cin>>system[count].purchasecost;

                    cout<<"Enter the selling price: ";
                    cin>>system[count].sellingprice;

                    cout<<"Enter total units: ";
                    cin>>system[count].units;

                    cout<<"\n? Product added successfully!\n";
                    count++;
                }
                break;

            case 2:
                if(count == 0){
                    cout<<"\nInventory is empty.\n";
                    break;
                }

                cout<<"\n----------- READ INVENTORY -----------\n";
                cout<<" 1. View All Products\n";
                cout<<" 2. View Specific Product\n";
                cout<<"-------------------------------------\n";
                cout<<" Enter your choice: ";
                cin>>choice;

                switch(choice){
                    case 1:
                        for(int i=0;i<count;i++){
                            cout<<"\n---------------------------------------\n";
                            cout<<" Product No      : "<<i+1<<endl;
                            cout<<" Name            : "<<system[i].name<<endl;
                            cout<<" ID              : "<<system[i].id<<endl;
                            cout<<" Purchase Cost   : "<<system[i].purchasecost<<endl;
                            cout<<" Selling Price   : "<<system[i].sellingprice<<endl;
                            cout<<" Units Available : "<<system[i].units<<endl;
                        }
                        break;

                    case 2:
                        int num;
                        cout<<"\nEnter product number to view: ";
                        cin>>num;

                        if(num>=1 && num<=count){
                            cout<<"\n---------------------------------------\n";
                            cout<<" Product No      : "<<num<<endl;
                            cout<<" Name            : "<<system[num-1].name<<endl;
                            cout<<" ID              : "<<system[num-1].id<<endl;
                            cout<<" Purchase Cost   : "<<system[num-1].purchasecost<<endl;
                            cout<<" Selling Price   : "<<system[num-1].sellingprice<<endl;
                            cout<<" Units Available : "<<system[num-1].units<<endl;
                        }
                        else{
                            cout<<"\n? Invalid product number.\n";
                        }
                        break;

                    default:
                        cout<<"\n? Invalid choice. Please try again.\n";
                }
                break;

            case 3:
                int index;
                cout<<"\nEnter the stock number to update (1 to "<<count<<"): ";
                cin>>index;

                if(index<1 || index>count){
                    cout<<"\n? Invalid entry.\n";
                }
                else{
                    cout<<"Enter updated stock name: ";
                    cin.ignore();
                    getline(cin, system[index-1].name);

                    cout<<"Enter updated ID: ";
                    cin>>system[index-1].id;

                    cout<<"Enter updated purchase cost: ";
                    cin>>system[index-1].purchasecost;

                    cout<<"Enter updated selling price: ";
                    cin>>system[index-1].sellingprice;

                    cout<<"Enter updated total units: ";
                    cin>>system[index-1].units;

                    cout<<"\n? Product updated successfully!\n";
                }
                break;

            case 4:
                int n;
                cout<<"\nEnter the stock number to delete: ";
                cin>>n;

                if(n<1 || n>count){
                    cout<<"\n? Invalid entry.\n";
                }
                else{
                    for(int i=n-1;i<count-1;i++){
                        system[i].name = system[i+1].name;
                        system[i].id = system[i+1].id;
                        system[i].purchasecost = system[i+1].purchasecost;
                        system[i].sellingprice = system[i+1].sellingprice;
                        system[i].units = system[i+1].units;
                    }
                    count--;
                    cout<<"\n? Product deleted successfully!\n";
                }
                break;
            case 5:
            	cout<<"----Program exited safely----\n";
            	break;

            default:
                cout<<"\n? Unrecognized choice.\n";
        }

        cout<<"\nDo you want to perform another operation? (y/n): ";
        cin>>again;
    }

    cout<<"\n===============================================\n";
    cout<<" Thank you for using the Inventory System\n";
    cout<<"===============================================\n";

    return 0;
}
 