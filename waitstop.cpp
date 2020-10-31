#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

class F
{
	int *ar;
	int size;
	public:
    void input();
    void sender();
    void receiver(int r);
};

void F::input()
{
	cout<<"<><><><><><><>STOP AND WAIT PROTOCOL<><><><><><><>"<<endl;
	cout<<endl;
	cout<<"Enter the total no. of frames:"<<endl;
	cin>>size;
	ar = new int[size];
	for(int i=0;i<size;i++)
{
    ar[i]=i+1;
}

	cout<<"Frames:"<<endl;
	for(int i=1;i<=size;i++)
{

    cout<<"Frame-"<<i<<" ";

}

	cout<<endl;
	cout<<endl;
}

void F::sender()
{
	for(int i=1;i<=size;i++)
{

    here:

	cout<<"__Sender Side__"<<endl;
	cout<<"Sending frame"<<i<<endl;
	cout<<"Timer starts!"<<endl;
	cout<<endl;
	srand(time(NULL));
	int y;
	y=(rand()%3)+1;

	getch();
	if(y==1)
{
    cout<<"--------"<<endl;
    receiver(i);
    getch();
    cout<<"Frame"<<i<<" received at receiver side"<<endl;
    cout<<"Acknowledgement:Success in sending frame"<<i<<endl;
    cout<<"--------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
	else if(y==2)
{
    cout<<"--------"<<endl;
    cout<<"Frame"<<i<<" "<<"not found"<<endl;
    cout<<"Sending frame again!"<<endl;
    cout<<"--------"<<endl;
    goto here;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
	else
{
    cout<<"--------"<<endl;
    receiver(i);
    getch();
    cout<<"Frame"<<i<<" received at receiver side"<<endl;
    cout<<"Acknowledgement not received!"<<endl;
    cout<<"Sending frame aagin!"<<endl;
    cout<<"--------"<<endl;
    goto here;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
}
cout<<"Successful!"<<endl;
}

void F::receiver(int r)
{
	cout<<"--Receiver side--"<<endl;
	cout<<"Sending acknowledgement:"<<(r+1)%2;
	cout<<endl;
	cout<<endl;

}

int main()
{
	F obj;
	obj.input();
	obj.sender();
	return 0;
}
