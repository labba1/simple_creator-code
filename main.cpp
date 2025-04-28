#include <iostream>

using namespace std;

int main()
{
    cout <<"1. calculate and display the area of rectangle \n" << endl;
    cout <<"2. multiplication of two numbers \n ";
    cout <<"3. sum of even numbers 1 througn 10 \n ";
    cout <<"4. check if the first is the multiple of the second \n";
    cout <<"5. display the larger number \n ";
    cout <<"-1. To exit \n";

    {int c;
    cout<<"enter your choice please \n ";
    cin>>c;
    switch (c)
    {
case 1:
   { int l,w , area;
    cout<<"enter the length"<<endl;
    cin>>l;
    cout<<"enter the width"<<endl;
    cin>>w;
    area = l*w;
    cout<<"the area of the rectangle is"<<area<<endl;
    }break;
case 2:
    {int a,b ,pro;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    pro= a*b;
    cout<<"the product is "<<pro<<endl;
   } break;

case 3:
{int n;
cout<<"enter a number"<<endl;
cin>>n;
int sum=0;
int i=1;
   do{if (i%2==0)
    sum+=i;
    i++;
   }
   while(i<=10);
     cout<<"the sum of natural even numbers 1 through 10 is \n"<<sum<<endl;
}break;
case 4:{
    int a , b;

    cout<<"enter two numbers "<<endl;
    cin>>a>>b;
     if(a%b==0)
        cout<<"the first is the multiple of the second \n";
        else
            cout<<"the first is  not the multiple of the second \n";
        }
   break;
case 5:{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
   if(a>b)
    cout<<a<<"is greater than "<<b;
   else
    if(a<b)
    cout<<"the greater number is \n"<<b;
   else
    cout<<"they are equal";
} break;
cout<<"enter your choice \n";
cin>>c;
case -1:
    cout<<"good bye"<<endl;
    break;
default:
    cout<<"wrong choice";

    }

    }
    return 0;

}
    }
