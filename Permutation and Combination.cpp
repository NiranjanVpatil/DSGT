//Name:Niranjan VInod Patil
//Roll No;SCSB307
//Write a program for finding permutation and combination for a person who 
//wants to join the gym and want to find the best diet plan according to calories and unit prize.
//----------------------------------------------------------------------------------------------------------------------


#include<iostream>
#include<string>
using namespace std;
class diet_plan
{
	public:
	string starter[4] = {"Sandwich", "Poha    ", "Upma   "};
	int calorie_starter[4] = {2000,1500,1000};
	int prize_starter[4] = {50,70,90};  
	string main_course[4] = {"Polibhaji", "Misal", "Riceplate"};
	int calorie_main_course[4] = {2000,1000,3000};
	int prize_main_course[4] = {150,120,200}; 
	string juice[4] = {"Apple", "Chickoo", "Milk      "};
	int calorie_juice[4] = {170,190,160};
	int prize_juice[4] = {40,60,80};   
	int f1=0;
	int f2=0; 
	char name[30];
	int age;
	int w;
	int wloss;
	int cal;
	int display_diet_plan()
	{
			  
    cout<<"Starter is : "<<endl<<endl; 
    for (int i = 0; i < 3; i++) 
    {
        cout <<(i+1)<<". " <<starter[i] << "\t\t";
        cout <<"Calories : " <<calorie_starter[i] << "\t\t";
        cout <<"Prize : "<<prize_starter[i] << "\n";
			
	}
	
	   
	cout<<endl;

    cout<<"Main course is : "<<endl<<endl; 
    for (int i = 0; i < 3; i++) 
    {
        cout <<(i+1)<<". " << main_course[i] << "\t";
        cout << "Calories : " << calorie_main_course[i] << "\t";
        cout << "Prize : "<<prize_main_course[i] << "\n";
			
	}
		cout<<endl;
		
	cout<<endl;

    cout<<"juice is : "<<endl<<endl; 
    for (int i = 0; i < 3; i++) 
    {
        cout << (i+1)<<". " <<juice[i] << "\t";
        cout <<"Calories : " <<  calorie_juice[i] << "\t";
        cout <<"Prize : " <<prize_juice[i] << "\n";
			
	}
	
	cout<<endl<<endl;
	
	
    
	}
	 int personal_details()
	 {
	 	cout<<"Enter Name : "<<endl;
	 	cin>>name;
	 	cout<<"Enter age : "<<endl;
	 	cin>>age;
	 	cout<<"Enter Your weight : "<<endl;
	 	cin>>w;
	 	cout<<"Enter how many weight you want too loss : "<<endl;
	 	cin>>wloss;
	 }
	 
	 int cal_requirement()
	 {
	 	cal=5000-(wloss*500);
	 	return cal;
	 }
	
	
	int find_dietplan_cal(int calories)
	{
	int sum_cal=0;
	int n=1;
	for(int x=0;x<3;x++)
	{
		for(int y=0;y<3;y++)
		{
			for(int z=0;z<3;z++)
			{
				
				sum_cal=calorie_starter[x]+calorie_main_course[y]+calorie_juice[z];
				if(sum_cal<=calories)
				{
					cout<<"Diet Plan No : "<<n<<endl;
					n=n+1;
					cout <<"Starter : " <<starter[x] << "\t";
                    cout <<"Calories : " << calorie_starter[x] << "\t";
                    cout << "Prize : " <<prize_starter[x] << "\n";
                    cout <<"Main course : "<< main_course[y] << "\t";
                    cout << "Calories : " <<calorie_main_course[y] << "\t";
                    cout << "Prize : " <<prize_main_course[y] << "\n";
                    cout <<"Juice : "<< juice[z] << "\t";
                    cout << "Calories : " << calorie_juice[z] << "\t";
                    cout << "Prize : " <<prize_juice[z] << "\n\n\n";
                    sum_cal=0;
                    f1=1;
                    
				}
				else
				{
					sum_cal=0;
					
				}

			}
			
		}
	}	

	return f1;
	   	
	}
	int find_dietplan_prize(int u_prize,int calories)
	{
	int sum_p=0;
	int sum_cal=0;
	int n=1;
	for(int x=0;x<3;x++)
	{
		for(int y=0;y<3;y++)
		{
			for(int z=0;z<3;z++)
			{
				
				sum_p=prize_starter[x]+prize_main_course[y]+prize_juice[z];
				sum_cal=calorie_starter[x]+calorie_main_course[y]+calorie_juice[z];
				if(sum_p<=u_prize && sum_cal<=calories)
				{
					cout<<"Diet Plan No : "<<n<<endl;
					n=n+1;
					cout <<"Starter : " <<starter[x] << "\t";
                    cout << "Calories : " << calorie_starter[x] << "\t";
                    cout <<"Prize : " << prize_starter[x] << "\n";
                    cout <<"Main course : "<< main_course[y] << "\t";
                    cout << "Calories : " << calorie_main_course[y] << "\t";
                    cout << "Prize : " <<prize_main_course[y] << "\n";
                    cout <<"Juice :" <<juice[z] << "\t";
                    cout <<  "Calories : " <<calorie_juice[z] << "\t";
                    cout <<"Prize : " << prize_juice[z] << "\n\n\n";
                    sum_cal=0;
                    f2=1;
				}
				else
				{
					sum_cal=0;
					sum_p=0;
					
				}

			}
			
		}
	}	

	return f2;
	   	
	}
	
};
int main()
{
	int ch;
	int calories;
	int u_prize;
	diet_plan d;
	int c1=0;
	int c2=0;
	cout<<"------------------------ WELCOME TO GYM ----------------------------"<<endl<<endl;
	cout<<"------------------------ THE DIET PLAN ------------------------------"<<endl<<endl;
	
	d.display_diet_plan();
	cout<<"Following steps are required for finding best diet plan :"<<endl;
	cout<<"1. Enter your Personal Details."<<endl;
	cout<<"2. Finding best diet plan according to your weight loss requirement."<<endl;
	cout<<"3. Finding best diet plan according to Unit Prize and weight loss requirement."<<endl<<endl;
	cout<<"Enter your choice : "<<endl;
	cin>>ch;
	do
	{
	
	switch(ch)
	{
		case 1:
			d.personal_details();
			break;
		case 2:
			calories=d.cal_requirement();
			cout<<"According to your requirement "<<endl;
			c1=d.find_dietplan_cal(calories);
			if(d.f1==0)
			{
				cout<<"No diet plan is availabel.So choose another requirement."<<endl<<endl;
			}
			break;
		case 3:
			calories=d.cal_requirement();
			cout<<"Enter Your unit prize requirment : "<<endl;
			cin>>u_prize;
			cout<<"According to your prize requirement "<<endl;
			c2=d.find_dietplan_prize(u_prize,calories);
			if(d.f2==0)
			{
				cout<<"No diet plan is availabel. So choose another requirement."<<endl<<endl;
			}
			break;
			
			

			
			
	}   
	cout<<"Following steps are required for finding best diet plan :"<<endl;
	cout<<"1. Enter your Personal Details."<<endl;
	cout<<"2. Finding best diet plan according to your weight loss requirement."<<endl;
	cout<<"3. Finding best diet plan according to Unit Prize and weight loss requirement."<<endl<<endl;
	cout<<"Enter your choice : "<<endl;
	cin>>ch;
	
	}while(ch<4);
	

	
	return 0;
	
}


