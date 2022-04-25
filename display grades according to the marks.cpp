//Write a program that will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks
#include<iostream>
using namespace std;
int n,sum=0;
float Avrage()
{
float avg= (float) sum/n;
cout<<" Avrage of total number :"<<avg <<endl;
return avg;
}
void Grade()
{
    float avg;
if(avg>90)
{ system("CLS");
    cout<<"your grade is A+";

}
else if(avg<91&&avg>=81)
{ system("CLS");
    cout<<"your grade is A";
}

else if(avg<81&&avg>=71)
{ system("CLS");
    cout<<"your grade is A-";
}
else if(avg<71&&avg>=61)
{ system("CLS");
    cout<<"your grade is B";
}
else if(avg<61&&avg>=51)
{ system("CLS");
    cout<<"your grade is C";
}
else if(avg<51&&avg>=41)
{ system("CLS");
    cout<<"your grade is D";
}
else if(avg<41)
{ 
    system("CLS");
    cout<<"You are feltus boy like me.........";
}
}
int main()
{
    cout <<"Enter the number of subject:";
    cin>>n;
    int Marks[n];
    for(int i=1;i<=n;i++)
    {
        cout<<"Subject no "<<i<<" marks is :";
        cin>>Marks[i];
    }
    cout<<" All Marks are:";
    for (int i=1;i<=n;++i)
    {
       cout<<Marks[i]<<"   ";
    }

    cout<<endl;
 for(int i=1;i<=n;i++)
{
      sum=sum + Marks[i];

}
cout<<"Total number :"<<sum<<endl;

Avrage();
Grade();
    return 0;
}
