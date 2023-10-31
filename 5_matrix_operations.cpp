#include <iostream>
using namespace std;
int main()
{
	
	int row,col;
	cout<<"Enter size of row: ";
	cin>>row;
	cout<<"Enter size of column: ";
	cin>>col;
	
	int a[row][col],b[row][col],i,j,k,choice,sum[row][col],diff[row][col],prod[row][col],trans[col][row];
	cout<<"Enter elements of the first matrix:\n";
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>a[i][j];

	cout<<"Enter elements of the second matrix:\n";\
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>b[i][j];

	cout<<"The first matrix:\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}

    cout<<"The second matrix:\n";
    for(i=0;i<row;i++)
	{	
		for(j=0;j<col;j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}

    do
	{
	
		cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n0. Exit\nEnter your choice:";
		cin>>choice;
		if(choice==0)
		{
			cout<<"Exiting application..."	; 
			break;
		}

		else
		{
			switch(choice)
			{
				case 1:
					for(i=0;i<row;i++)
					{
						for(j=0;j<col;j++)
							sum[i][j]=a[i][j]+b[i][j];
					}

					for(i=0;i<row;i++)
					{
						for(j=0;j<col;j++)
							cout<<sum[i][j]<<" ";
						cout<<endl;
					}

					break;

				case 2:
					for(i=0;i<row;i++)
					{
						for(j=0;j<col;j++)
							diff[i][j]=a[i][j]-b[i][j];
					}

					for(i=0;i<row;i++)
					{
						for(j=0;j<col;j++)
							cout<<diff[i][j]<<" ";
						cout<<endl;
					}

					break;

				case 3:
					if(col==row)
					{
						for(i=0;i<row;i++)
						{
							for(j=0;j<col;j++)
							{
								prod[i][j]=0;
								for(k=0;k<row;k++)
									prod[i][j]=prod[i][j]+a[i][k]*b[k][j];
							}
						}

						for(i=0;i<row;i++)
						{
							for(j=0;j<col;j++)
								cout<<prod[i][j]<<" ";
							cout<<endl;
						}
					}
					else
						cout<<"No.of columns of 1st matrix is not equal to no.of rows of 2nd matrix so matrix multiplication cannot be performed.\n";
						break;

				case 4:
					int x;
					cout<<"Which matrix to be transposed? 1 or 2? :- ";
					cin>>x;
					if(x==1)
					{
						for(i=0;i<row;i++)
						{
							for(j=0;j<col;j++)
								trans[j][i]=a[i][j];
						}

						for(i=0;i<row;i++)
						{
							for(j=0;j<col;j++)
								cout<<trans[i][j]<<" ";
							cout<<endl;
						}
					}

					else if(x==2)
					{
						for(i=0;i<row;i++)
						{
							for(j=0;j<col;j++)
								trans[j][i]=b[i][j];
						}

						for(i=0;i<row;i++)
						{
							for(j=0;j<col;j++)
								cout<<trans[i][j]<<" ";
							cout<<endl;
						}
					}
					
					else
						cout<<"Wrong input\n";
						break;
				default:
					cout<<"No matching case found\n";
					
			}
		}
	}
	
	while(1);
	return 0;
}