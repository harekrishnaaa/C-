#include <bits/stdc++.h>
using namespace std;
class Animal {
private:
string id;
int no;
public:
string name;
string action;
string voice;
void setData(string id1, int no1);
void getData()
{
        cout<<"The name of the animal is "<<name<<endl;
        cout<<"The ID of the animal is "<<id<<endl;
        cout<<"The Number of the animal is "<<no<<endl;
        cout<<"The action of the animal is "<<action<<endl;
        cout<<"The voice of the animal is "<<voice<<endl;
}
};
void Animal::setData(string id1,int no1){
        id=id1;
        no=no1;
}

int main()
{
        Animal dog;
        dog.name="Tommy";
        dog.action="Jump";
        dog.voice="bark";
        dog.setData("2A3654",4321);
        dog.getData();
        cout<<""<<endl;
        Animal cat;
        cat.name="MEOW";
        cat.action="Scratch";
        cat.voice="MEWWWWWW";
        cat.setData("2B4558",36568);
        cat.getData();
        cout<<""<<endl;
        Animal human;
        human.name="Shubham";
        human.action="Nothing";
        human.voice="Talk";
        human.setData("21BCS4993",0000000000);
        human.getData();
        cout<<""<<endl;
        Animal snake;
        snake.name="Rakshak";
        snake.action="Crawl";
        snake.voice="Hiss";
        snake.setData("12A4521",0120100);
        snake.getData();
        cout<<""<<endl;
        return 0;
}
