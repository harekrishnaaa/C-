#include <iostream>
using namespace std;
class shop {
int itemid[100];
int itemprice[100];
int counter;
public:
void reset(void) {
        counter=0;

}
void getItem(void);
void setPrice(void);
};
void shop::setPrice(){
        cout<<"Enter the id fo your item"<<endl;
        cin>>itemid[counter];
        cout<<"Enter the price of your item "<<endl;
        cin>>itemprice[counter];
        counter++;
}
void shop::getItem(void){
        for(int i=0; i<counter; i++)
        {
                cout<<"The price of the item with id "<<itemid[i]<< " is "<<itemprice[i]<<endl;

        }
}


int main(){
        shop d;
        d.reset();
        d.setPrice();
        d.setPrice();
        d.setPrice();
        d.getItem();
}
