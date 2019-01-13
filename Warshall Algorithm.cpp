# include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"-----------------------WELCOME TO THE COMPUTER NETWORKS--------------------"<<endl;
	cout<<"Enter how many COMPUTERS (vertices) in NETWORK ? "<<endl;
	cin>>n;
	int graph[n][n];
	int new_graph[n][n];
	char vertices[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter COMPUTER (vertex) Name :"<<i+1<<endl;
		cin>>vertices[i];
	}	
	

	int ch;
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			cout<<"Is there connection between COMPUTER "<<vertices[i];
			cout<<" and COMPUTER "<<vertices[j]<<"?"<<endl<<"If yes enter 1: "<<endl;
			cin>>ch;
			if(ch==1)
			{
				graph[i][j]=1;
			}
			else
			{
				graph[i][j]=0;
			}
			
			
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0 ;i<n;i++)
    {
    	for( int j=0 ;j<n;j++)
    	{
    		new_graph[i][j]=graph[i][j];
		}
	}
    
    for(int k=0;k<n;k++)
    {
    	cout<<" Transative closure  of w"<<k<<"is"<<endl;
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0 ;j<n;j++)
    		{
    			 new_graph[i][j]=new_graph[i][j] || (new_graph[i][k] && new_graph[k][j]);
    			 cout<<new_graph[i][j]<<" ";
			}
			
			cout<<endl;
		}
		
		
	}
	cout<<"Final transative matrix  of COMPUTERS is "<<endl;
    for(int i=0 ;i<n;i++)
    {
    	for( int j=0 ;j<n;j++)
    	{
    		cout<<new_graph[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

