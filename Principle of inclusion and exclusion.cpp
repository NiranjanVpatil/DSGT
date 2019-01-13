//Title : Write a program to implement the principle of inclusion and exclusion for deciding the eligibility of students for placement.
//Rol No :SCSB307.
//Name : Niranjan vinod Patil.
//-----------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int ch;
	int core[100],IT[100],manag[100];       //Ths array is used for store elements of Sets.    
	int r1[100],r2[100],r3[100],r4[100];    //This array is used for finding union and intersetion of sets. 
	int u1[100];
	int k1=0;
	int n,n1,n2,n3;
    int a1=0;
	int a2=0;
	int a3=0;
	int m=0;
	int m1=0;
	int m2=0;
	int m3=0;
	int flag=0;
	int flag1=0;
	int flag2=0;
	int flag3=0;
	cout<<"-----------------PRINCIPAL OF INCLUSION AND EXCLUSION EXAMPLE-----------------"<<endl;
	cout<<"In the student placement process, we have decide that three sets like "<<endl<<"A1 = Students placed in Core company."<<endl<<"A2 = Students placed in IT company."<<endl;
	cout<<"A3 = Students placed in Management company."<<endl<<"for student placement criteria. "<<endl;
	
	do
	{
	
	cout<<endl<<endl;	
	cout<<"The Procedures are :"<<endl<<endl;
	cout<<"1. Input sets : "<<endl<<endl<<"A1 = Students placed in Core company."<<endl<<"A2 = Students placed in IT company."<<endl;
	cout<<"A3 = Students placed in Management company."<<endl<<endl;
	cout<<"2. Find Cardinality of sets |A1|, |A2| and |A3|."<<endl<<endl;
	cout<<"3. Find Students placed in both core and IT company."<<endl<<endl;
	cout<<"4. Find Students placed in both Core and Management company."<<endl<<endl;
	cout<<"5. Find Students placed in both IT and management company."<<endl<<endl;
	cout<<"6. Find Students placed in all company."<<endl<<endl;
	cout<<"7. Find Total number of students placed in college."<<endl<<endl;
	cout<<"8. Find Students placed in college."<<endl<<endl;
	cout<<"Enter Your procedure you want to be executed :"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			
	        cout<<"Enter total number of students in college"<<endl;
	        cin>>n;
	        cout<<"Enter how many students placed in core company : "<<endl;
	        cin>>n1;
	        cout<<"Enter roll no of students : "<<endl;
	        for(int i=0;i<n1;i++)
            {
     	
	         cin>>core[i];
	         r1[i]=core[i];
	         u1[i]=core[i];
	         a1++;
	         k1++;
	        }
         	cout<<"Enter how many students placed in IT company :"<<endl;
	        cin>>n2;
	        cout<<"Enter roll no of sudents : "<<endl;
	        for(int j=0;j<n2;j++)
              {
     	
	              cin>>IT[j];
	              a2++;
              }
	        cout<<"Enter how many students placed in Management company : "<<endl;
        	cin>>n3;
	        cout<<"Enter roll no of sudents : "<<endl;
	        for(int k=0;k<n3;k++)
            {
     	
	             cin>>manag[k];
	             a3++;
	        }
	        break;
	    case 2:
	    	cout<<"Cardinality of Set A1 is : ";                //Cardinality of set means Total number of elements in sets.
	    	cout<<a1<<endl;
	    	cout<<"Cardinality of Set A2 is : ";
	    	cout<<a2<<endl;
	    	cout<<"Cardinality of Set A3 is : ";
	    	cout<<a3<<endl;
	    	break;
	    case 3:
	         	
	            for(int j=0;j<n2;j++)
	
	               {
	 	                 for(int i=0;i<n1;i++)
	                  	{
	 	                  	if(core[i]==IT[j])
	 		               {
	
	 		                 	r1[m]=IT[j];
	 		                   	m++;
	 		                   	flag=1;      //This flag is used for when element is in set A1 is also in Set A2
	 		
			               }
		                }
	                }
	            if(flag==1)
	            {
	              cout<<"Students Placed in both core and IT company : "<<endl;
	        
	              for(int p=0;p<m;p++)
	             {
	             	cout<<r1[p]<<endl;
	             }	
				}
				else
				{
					cout<<"No student is to be placed in both core and IT company."<<endl;
				}
				cout<<"Cardinality of (A1 ^ A2)"<<endl;
				cout<<m<<endl;
				break;
				
		case 4:	
	            
	            for(int k=0;k<n3;k++)
	
	               {
	 	                 for(int i=0;i<n1;i++)
	                  	{
	 	                  	if(core[i]==manag[k])
	 		               {
	
	 		                 	r2[m1]=manag[k];
	 		                   	m1++;
	 		                   	flag1=1;
	 		
			               }
		                }
	                }
	            if(flag1==1)
	            {
	              cout<<"Students Placed in both core and management company : "<<endl;
	              for(int p=0;p<m1;p++)
	             {
	             	cout<<r2[p]<<endl;
	             }	
				}
				else
				{
					cout<<"No student is to be placed in both core and management company."<<endl;
				}
				cout<<"Cardinality of (A1 ^ A3) : ";
				cout<<m1<<endl;
				break;
		case 5:		
	            
	            for(int k=0;k<n3;k++)
	
	               {
	 	                 for(int j=0;j<n2;j++)
	                  	{
	 	                  	if(IT[j]==manag[k])
	 		               {
	
	 		                 	r3[m2]=manag[k];
	 		                   	m2++;
	 		                   	flag2=1;
	 		
			               }
		                }
	                }
	            if(flag2==1)
	            {
	              cout<<"Students Placed in both IT and in management company : "<<endl;
	              for(int p=0;p<m2;p++)
	             {
	             	cout<<r3[p]<<endl;
	             }	
				}
				else
				{
					cout<<"No student is to be placed in both IT and in management company."<<endl;
				}
				cout<<"Cardnality of (A2 ^ A3) : ";
				cout<<m2<<endl;
				break;
				
				
		case 6:		
	            
	            for(int k=0;k<n3;k++)
	
	               {
	 	                 for(int j=0;j<m;j++)
	                  	{
	 	                  	if(r1[j]==manag[k])
	 		               {
	
	 		                 	r4[m3]=manag[k];
	 		                   	m3++;
	 		                   	flag3=1;
	 		
			               }
		                }
	                }
	            if(flag3==1)
	            {
	              cout<<"Students Placed in all company : "<<endl;
	              for(int p=0;p<m3;p++)
	             {
	             	cout<<r4[p]<<endl;
	             }	
				}
				else
				{
					cout<<"No student is to be placed in all IT , core and management company."<<endl;
				}
				cout<<"Cardinality of (A1 ^ A2 ^ A3) : ";
				cout<<m3<<endl;
              	break;
        case 7:
        	int t;
			cout<<"Total number of students placed in college : ";
        	t=a1+a2+a3-m-m1-m2+m3;           //principal of inclusion and exclusion.
        	cout<<t<<endl;
        	break;	
        case 8:
	          
			
             for(int j=0;j<n2;j++)
	
         	   {
                 int flag=0;
	 	         for(int i=0;i<n1;i++)
	 	         {
	 		       if(core[i]==IT[j])
	 		       {
	 			       flag=1;
	 			       break;
			       }
		         }
		         if(flag==0)
		         {
		 	       u1[k1]=IT[j];
		 	       k1++;
		         }
	           }       
	         /*cout<<"Students placed in core company and in IT company and in both core and IT company (A1 U A2) : "<<endl;
	         for(int l=0;l<k1;l++)
	          {
	 	            cout<<u1[l]<<endl;
	          }*/
	          
	          
	          for(int k=0;k<n3;k++)
	
         	   {
                 int flag1=0;
	 	         for(int i=0;i<k1;i++)
	 	         {
	 		       if(u1[i]==manag[k])
	 		       {
	 			       flag1=1;
	 			       break;
			       }
		         }
		         if(flag1==0)
		         {
		 	       u1[k1]=manag[k];
		 	       k1++;
		         }
	           }       
	         cout<<"Students placed in core company and in IT company and in management company and in all company (A1 U A2 U A3) : "<<endl;
	         for(int l=0;l<k1;l++)
	          {
	 	            cout<<u1[l]<<endl;
	          }
	         break;
	    default:
	           cout<<"OOOOPS.......WRONG choice."<<endl;
	           break;
	}
	
    }while(ch<9);        
	return 0; 
}



/* OUTPUT :



*/
