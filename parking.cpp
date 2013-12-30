#include<iostream>
using namespace std;
int main()
{
	int A[10],B[10];
	for(int i=0;i<7;i++)
		cin>>A[i];
	for(int i=0;i<5;i++)
	{
		int f=0,fb=0;
		for(int j=0;j<6;j++)
			cin>>B[j];
		for(int k=0;k<7;k++)
		{
			for(int j=0;j<6;j++)
			{
				if(A[k]==B[j]&&k!=6)
				{
					f++;break;
				}
				else if(A[k]==B[j]&&k==6)
				{
					fb++;break;
				}
			}
		}
		if(f==6)
			cout<<"First Parking slot"<<endl;
		else if(f==5&&fb==1)
			cout<<"Second Parking slot"<<endl;
		else if(f==5)
			cout<<"Third Parking slot"<<endl;
		else if(f==4)
			cout<<"Fourth Parking slot"<<endl;
		else if(f==3)
			cout<<"Fifth Parking slot"<<endl;
		else cout<<"No Parking slot"<<endl;
	}
}
