#include <QCoreApplication>
#include <iostream>
using namespace std;

class women{
public:
    enum color{BLACK,WHITE,RED};
    int Age;
    color HairColor;
    int Growth;
    women(){}

    women(int _age,int _growth):
    Age(_age)
    {
        //Age=_age;
        Growth=_growth;
    }
    int getAge() const;
    void setGrowth(int value);
    int getGrowth() const;
    void setAge(int value);
};
void sortAge(women *wome, int b);

women *searchAge(women wome[], int sAge);



int main()
{

    women womens[10];
    for(int i=0;i<9;i++){
        int j=20+i;
        womens[i].setGrowth(i+160);
        womens[i].setAge(j);
    }


   sortAge(womens, 10);

   if(searchAge(womens,22)==nullptr){
   cout<<"no object";
   }
   else {
      cout<<searchAge(womens,22)->Age;
   }


  // sortAge(womens);


}

void women::setGrowth(int value)
{
Growth = value;
}

int women::getGrowth() const
{
return Growth;
}

void women::setAge(int value)
{
Age = value;
}

int women::getAge() const
{
return Age;
}



void sortAge(women *wome, int b){
    women a;
    for (int i =0; i<=b-1; i++){
        for (int j =0;j<=b-1;j++){
            if ((wome[j].Age)<wome[j+1].Age){
                a=wome[j];

                wome[j+1]=a;
            }
        }
}
}


women *searchAge(women wome[],int sAge){
    women a;
    women *b=nullptr;
    for (int i =0;  i<=9; i++){
        if (wome[i].Age==sAge){

            return &wome[i];

        }
    }

   // a.Age=*b;
    return b;
}
