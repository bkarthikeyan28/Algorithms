#include<iostream>
using namespace std;
int main()
{
	int n;
	int A[305][305],B[305][305],C[305][305],D[305][305],E[305][305],F[305][305],G[305][305],H[305][305],K[305][305],L[305][305],M[305][305];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>A[i][j];
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==1)
		{
			if(j==1)
				B[1][j]=1;
			else
				B[1][j]=B[1][j-1]+1;
		}
		else
		{
			if(j==1)
				B[1][j]=0;
			else
				B[1][j]=B[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==1)
			B[i][1]=B[i-1][1]+1;
		else
			B[i][1]=B[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{

                if(A[i][j]==1)
                    B[i][j]=B[i-1][j]+B[i][j-1]-B[i-1][j-1]+1;
                else B[i][j]=B[i-1][j]+B[i][j-1]-B[i-1][j-1];

		}
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==2)
		{
			if(j==1)
				C[1][j]=1;
			else
				C[1][j]=C[1][j-1]+1;
		}
		else
		{
			if(j==1)
				C[1][j]=0;
			else
				C[1][j]=C[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==2)
			C[i][1]=C[i-1][1]+1;
		else
			C[i][1]=C[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{
			if(A[i][j]==2)
                    C[i][j]=C[i-1][j]+C[i][j-1]-C[i-1][j-1]+1;
                else C[i][j]=C[i-1][j]+C[i][j-1]-C[i-1][j-1];
		}
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==3)
		{
			if(j==1)
				D[1][j]=1;
			else
				D[1][j]=D[1][j-1]+1;
		}
		else
		{
			if(j==1)
				D[1][j]=0;
			else
				D[1][j]=D[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==3)
			D[i][1]=D[i-1][1]+1;
		else
			D[i][1]=D[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{

                if(A[i][j]==3)
                    D[i][j]=D[i-1][j]+D[i][j-1]-D[i-1][j-1]+1;
                else D[i][j]=D[i-1][j]+D[i][j-1]-D[i-1][j-1];


		}
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==4)
		{
			if(j==1)
				E[1][j]=1;
			else
				E[1][j]=E[1][j-1]+1;
		}
		else
		{
			if(j==1)
				E[1][j]=0;
			else
				E[1][j]=E[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==4)
			E[i][1]=E[i-1][1]+1;
		else
			E[i][1]=E[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{

                if(A[i][j]==4)
                    E[i][j]=E[i-1][j]+E[i][j-1]-E[i-1][j-1]+1;
                else E[i][j]=E[i-1][j]+E[i][j-1]-E[i-1][j-1];


		}
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==5)
		{
			if(j==1)
				F[1][j]=1;
			else
				F[1][j]=F[1][j-1]+1;
		}
		else
		{
			if(j==1)
				F[1][j]=0;
			else
				F[1][j]=F[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==5)
			F[i][1]=F[i-1][1]+1;
		else
			F[i][1]=F[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{

                if(A[i][j]==5)
                    F[i][j]=F[i-1][j]+F[i][j-1]-F[i-1][j-1]+1;
                else F[i][j]=F[i-1][j]+F[i][j-1]-F[i-1][j-1];


		}
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==6)
		{
			if(j==1)
				G[1][j]=1;
			else
				G[1][j]=G[1][j-1]+1;
		}
		else
		{
			if(j==1)
				G[1][j]=0;
			else
				G[1][j]=G[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==6)
			G[i][1]=G[i-1][1]+1;
		else
			G[i][1]=G[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{

                if(A[i][j]==6)
                    G[i][j]=G[i-1][j]+G[i][j-1]-G[i-1][j-1]+1;
                else G[i][j]=G[i-1][j]+G[i][j-1]-G[i-1][j-1];


		}
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==7)
		{
			if(j==1)
				H[1][j]=1;
			else
				H[1][j]=H[1][j-1]+1;
		}
		else
		{
			if(j==1)
				H[1][j]=0;
			else
				H[1][j]=H[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==7)
			H[i][1]=H[i-1][1]+1;
		else
			H[i][1]=H[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{

                if(A[i][j]==7)
                    H[i][j]=H[i-1][j]+H[i][j-1]-H[i-1][j-1]+1;
                else H[i][j]=H[i-1][j]+H[i][j-1]-H[i-1][j-1];


		}
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==8)
		{
			if(j==1)
				K[1][j]=1;
			else
				K[1][j]=K[1][j-1]+1;
		}
		else
		{
			if(j==1)
				K[1][j]=0;
			else
				K[1][j]=K[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==8)
			K[i][1]=K[i-1][1]+1;
		else
			K[i][1]=K[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{

                if(A[i][j]==8)
                    K[i][j]=K[i-1][j]+K[i][j-1]-K[i-1][j-1]+1;
                else K[i][j]=K[i-1][j]+K[i][j-1]-K[i-1][j-1];


		}
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==9)
		{
			if(j==1)
				L[1][j]=1;
			else
				L[1][j]=L[1][j-1]+1;
		}
		else
		{
			if(j==1)
				L[1][j]=0;
			else
				L[1][j]=L[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==9)
			L[i][1]=L[i-1][1]+1;
		else
			L[i][1]=L[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{

                if(A[i][j]==9)
                    L[i][j]=L[i-1][j]+L[i][j-1]-L[i-1][j-1]+1;
                else L[i][j]=L[i-1][j]+L[i][j-1]-L[i-1][j-1];


		}
	}
	for(int j=1;j<=n;j++)
	{
		if(A[1][j]==10)
		{
			if(j==1)
				M[1][j]=1;
			else
				M[1][j]=M[1][j-1]+1;
		}
		else
		{
			if(j==1)
				M[1][j]=0;
			else
				M[1][j]=M[1][j-1];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i][1]==10)
			M[i][1]=M[i-1][1]+1;
		else
			M[i][1]=M[i-1][1];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{

                if(A[i][j]==10)
                    M[i][j]=M[i-1][j]+M[i][j-1]-M[i-1][j-1]+1;
                else M[i][j]=M[i-1][j]+M[i][j-1]-M[i-1][j-1];


		}
	}
	/*cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<E[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<F[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<H[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<K[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<L[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
	}
	cout<<endl;*/
	int q;
	cin>>q;
	while(q--)
	{
        int ans=0,a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==1&&b==1)
		{
			if(B[c][d])
				ans++;
			if(C[c][d])
				ans++;
			if(D[c][d])
				ans++;
			if(E[c][d])
				ans++;
			if(F[c][d])
				ans++;
			if(G[c][d])
				ans++;
			if(H[c][d])
				ans++;
			if(K[c][d])
				ans++;
			if(L[c][d])
				ans++;
			if(M[c][d])
				ans++;
		}
		else if(a==1)
		{
			if(B[c][d]-B[c][b-1])
				ans++;
			if(C[c][d]-C[c][b-1])
				ans++;
			if(D[c][d]-D[c][b-1])
				ans++;
			if(E[c][d]-E[c][b-1])
				ans++;
			if(F[c][d]-F[c][b-1])
				ans++;
			if(G[c][d]-G[c][b-1])
				ans++;
			if(H[c][d]-H[c][b-1])
				ans++;
			if(K[c][d]-K[c][b-1])
				ans++;
			if(L[c][d]-L[c][b-1])
				ans++;
			if(M[c][d]-M[c][b-1])
				ans++;
		}
		else if(b==1)
		{
			if(B[c][d]-B[a-1][d])
				ans++;
			if(C[c][d]-C[a-1][d])
				ans++;
			if(D[c][d]-D[a-1][d])
				ans++;
			if(E[c][d]-E[a-1][d])
				ans++;
			if(F[c][d]-F[a-1][d])
				ans++;
			if(G[c][d]-G[a-1][d])
				ans++;
			if(H[c][d]-H[a-1][d])
				ans++;
			if(K[c][d]-K[a-1][d])
				ans++;
			if(L[c][d]-L[a-1][d])
				ans++;
			if(M[c][d]-M[a-1][d])
				ans++;
		}
		else
		{
			if(B[c][d]-B[c][b-1]-B[a-1][d]+B[a-1][b-1])
				ans++;
			if(C[c][d]-C[c][b-1]-C[a-1][d]+C[a-1][b-1])
				ans++;
			if(D[c][d]-D[c][b-1]-D[a-1][d]+D[a-1][b-1])
				ans++;
			if(E[c][d]-E[c][b-1]-E[a-1][d]+E[a-1][b-1])
				ans++;
			if(F[c][d]-F[c][b-1]-F[a-1][d]+F[a-1][b-1])
				ans++;
			if(G[c][d]-G[c][b-1]-G[a-1][d]+G[a-1][b-1])
				ans++;
			if(H[c][d]-H[c][b-1]-H[a-1][d]+H[a-1][b-1])
				ans++;
			if(K[c][d]-K[c][b-1]-K[a-1][d]+K[a-1][b-1])
				ans++;
			if(L[c][d]-L[c][b-1]-L[a-1][d]+L[a-1][b-1])
				ans++;
			if(M[c][d]-M[c][b-1]-M[a-1][d]+M[a-1][b-1])
				ans++;
		}
		cout<<ans<<endl;
	}


}
