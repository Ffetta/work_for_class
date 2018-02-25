#include <QCoreApplication>


class women{
public:
    enum color{BLACK,WHITE,RED};
    int Age;
    color HairColor;
    int Growth;
    women(){}

    women(int _age,int _growth){
        Age=_age;
        Growth=_growth;
    }
    int getAge() const;
    void setGrowth(int value);
    int getGrowth() const;
    void setAge(int value);
};
void sortAge(women wome[]);
int searchAge(women wome[]);



int main()
{

    women womens[10];
        for(int i=0;i++;i<=9){
        womens[i].setGrowth(i+160);
        womens[i].setAge(i+20);
    }


   sortAge(womens);
   searchAge(womens);


    //return;
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



void sortAge(women wome[]){
    women a;
    for (int i =0; i++; i<=8){
        for (int j =0;j++;j<=8){
            if ((wome[j].Age)<wome[j+1].Age){
                a=wome[j];

                wome[j+1]=a;
            }
        }
}
}


int searchAge(women wome[]){
    int maxAge;
    for (int i =0; i++; i<=9){
        if (wome[i].Age>maxAge){
            maxAge=i;


        }
    }
    return maxAge;
}
