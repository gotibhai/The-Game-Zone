#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>
#include <math.h>
using namespace std;
char tictactoe[3][3]={'1','2','3','4','5','6','7','8','9'};
//FUNCTION TO CHECK THE WHO'S WINNING HORIZONTALLY 
int winning(int l)
 {
       int m=0;  
        int counting=0,counting2=0;            
          while(m<3)
            	    {
                                    
                                    if (tictactoe[l][m] == 'X')
                                    {
                                    	counting = counting + 1;
                                    }
                                    else if (tictactoe[l][m] == 'O' )
                                    {
                                    	counting2 = counting2 + 1;
                                    }
                                    m=m+1;
					}
                                    if(counting == 3)
                                    {
                                                return 1;
                                                }
                                    else if (counting2 == 3)
                                    {
                                                     return 2;
                                                     }
                                    else 
                                    {
                                         return 0;
                                         }    	
}  
//FUNCTION TO CHECK THE WHO'S WINNING VERTICALLY
int winning2(int m)
 {
       int l=0;
	    int counting=0,counting2=0;            
          while(l<3)
            	    {
                                    
                                    if (tictactoe[l][m] == 'X')
                                    {
                                    	counting = counting + 1;
                                    }
                                    else if (tictactoe[l][m] == 'O' )
                                    {
                                    	counting2 = counting2 + 1;
                                    }
                                    l=l+1;
						}
                                    if(counting == 3)
                                    {
                                                return 1;
                                                }
                                    else if (counting2 == 3)
                                    {
                                                     return 2;
                                                     }
                                    else 
                                    {
                                         return 0;
                                         }    	
}
void table()
{
	int i,x;
	cout<<"\n\n\n\n\n\n\n\n\n\n";
    cout<<"                                     ";
	for (i=0;i<3;i++)
              {
				  for(x=0;x<3;x++)
                  {
                                  
								  cout<<tictactoe[i][x]<<"|";
                                  }
                                  cout<<endl;
                                  cout<<"                                     ";
                                  
              } 
              
}
void wait()
{
	 int i=0;
								 while (i<1000000000)
		             {
						 i++;
		             }  
}
char grid[20][8];
void toprintarray (int row,int coloumn);
int main()
{
SHURUVAT:
system("CLS");
int i,z,x,l,check,check2,check3,check4,userinput1R;
int userinput1C,fuserinput1R,fuserinput1C,userinput2R,userinput2C,one,var;
int fuserinput2R,fuserinput2C,no,row,coloumn,j,count,checking=0,k,q,f,inputt,bollbhai;
char a,b,playa1sign,m,choice,playa2sign,sbc,tryagain;
string name1,name2,cdbreaker,cdmaker;
system("color 1F");
cout<<"NAME: PUSHKIN ABBOTT\n\nCLASS : Xl- A\n\nPROJECT : \"ThE gAmE zOnE\" ";
one:
cout<<"\n\n\nPress 1 to continue ...";
cin>>one;
if (one == 1)
{
}
else 
{
	system("CLS");
	cout<<"Cant ya' Understand English ... ?\n\nPress 1.. ";
	goto one;
}
system("CLS");
system("color 4F");
cout<<"                           ThE gAmE zOnE                           "<<endl;
cout<<"\n\n\"Life is like a game, once your piece is on the board there is no leaving until you have finished. It does not matter how you finished just that you pass the   line...\"\n\n";
while (i<1000000000)
		             {
		  	           i++;
		             }	
cout<<"Welcome Sir/Madaam !\n\n";
//	char tictactoe[3][3]={'1','2','3','4','5','6','7','8','9'};
cout<<"\n1.TIC-TAC-TOE\n2.MASTER-MIND\n\n";
cout<<"Note:Please enter the number corresponding to your choice\n";
enter:
cin>>bollbhai;
switch(bollbhai)
{
	case 1 : {
		goto TICTACTOE;
		break;
	}
	
	case 2 : {
	      	goto gametwo;
			break;
	}

	default :  {cout<<"\nPlease enter the correct number...";
	           goto enter;
			   }
}
TICTACTOE:
{
	system("CLS");
	system("color 03");
    table();
	cout<<"\n\nPlayer 1 Name : ";
    cin>>name1;
    cout<<"\n";
    cout<<"PLayer 2 Name : ";
    cin>>name2;
    cout<<"\n\n";
    point:
      back:
                   system("color fc");
              cout<<"\nChoose Your Sign "<<name2<<" ?(X/O)\n";
              cin>>playa2sign; 
              if (playa2sign=='x'||playa2sign=='X')
              {
              	 system("color 0b");
                  cout<<"YOUR SYMBOL IS X . LETS START\n";
              	playa2sign ='X';
              	 playa1sign ='O';
              }
              else if (playa2sign=='o'||playa2sign=='O')
              {
               system("color A0");
              	cout<<"YOUR SYMBOL IS O . LETS START\n";
              	playa2sign = 'O';
				  playa1sign = 'X';
              }
              else
              {
              	cout<<"Please Choose from the options given ?";
              	goto back;
              }
             
			  playa1st:
			  system("CLS");
              	table();
              	cout<<"\n"<<name1<<" -\nRow :";
            		cin>>userinput1R;
            		if (userinput1R>3||userinput1R<1)
            		{
                                  cout<<"PLease Enter The Correct Row Number ,"<<name1<<"\n"; 
                                 wait();
								   goto playa1st;
                                   }             
            		coloumn :
                    cout<<"Coloumn :";
                    cin>>userinput1C;
            		if (userinput1C>3||userinput1C<1)
            		{
                                   cout<<"PLease Enter The Correct Coloumn Number ,"<<name1<<"\n"; 
								wait();
                                   goto coloumn;
                                    } 
                    fuserinput1R = userinput1R-1;
            		fuserinput1C = userinput1C-1;
            		if (tictactoe[fuserinput1R][fuserinput1C]== 'X'||tictactoe[fuserinput1R][fuserinput1C]=='O')
            		{
            			cout<<"This location is already taken .. \nPlease re-enter the co-ordinates.";
            		wait();
						goto playa1st;
						 
            		}
            		tictactoe[fuserinput1R][fuserinput1C] = playa1sign ;	
				       table();
                       check = winning(fuserinput1R);
					   check2 =winning2(fuserinput1C);   
					    if ((tictactoe[0][0]==tictactoe[1][1]&&tictactoe[2][2]==tictactoe[1][1])|| (tictactoe[0][2]==tictactoe[1][1]&&tictactoe[2][0]==tictactoe[1][1]))
					   {
					   	   if ( tictactoe[1][1]=playa1sign)
                             {
                                  var = 1;
							
                                  goto khatam;
                                  }
                             else
                             {
                             	var = 2;
							
                                  goto khatam;
                             }
					   }
					 if(check == 1|| check2 == 1)
                    {
                             if ( playa1sign == 'X')
                             {
                                  var = 1;
								
                                  goto khatam;
                                  }
                             else 
                             {
                                  var = 2 ;
							
                                  goto khatam;
                             }
                    }
                    else if (check == 2 || check2 == 2)
                    {
                           if ( playa1sign == 'O')
                             {
                                  var = 1;
								 
                                  goto khatam;
                                  }
                            else 
                            {
                            	var = 2;
								
                                  goto khatam;
                            }
                      }  
                    else if (check==0 || check2==0) 
                    {
                         goto playa2st;	
                    }
                    
                    playa2st:
                    	system("CLS");
                    	table();
                    cout<<"\n"<<name2<<" -\nRow :";
                    cin>>userinput2R;
                    if (userinput2R>3||userinput2R<1)
            		{
                                   cout<<"PLease Enter The Correct Row Number ,"<<name2<<"\n";
                                  wait();
								   goto playa2st;
                                   }  
            		coloumn2:
                    cout<<"Coloumn :";
            		cin>>userinput2C;
            		if (userinput2C>3||userinput2C<1)
            		{
                                   cout<<"PLease Enter The Correct Coloumn Number, "<<name2<<"\n";
                                  wait();
								   goto coloumn2;
                                   }      
            		fuserinput2R = userinput2R-1;
            		fuserinput2C = userinput2C-1;
            		if (tictactoe[fuserinput2R][fuserinput2C]== 'X'||tictactoe[fuserinput2R][fuserinput2C]=='O')
            		{
            			cout<<"This location is already taken .. \nPlease re-enter the co-ordinates.\n";
					    wait();
						goto playa2st; 
            		}
            		tictactoe[fuserinput2R][fuserinput2C] = playa2sign ;
				    table();
					   check3 = winning(fuserinput2R);
					   check4 = winning2(fuserinput2C);   
					   if (grid[0][0]=='X'&&grid[1][1]=='X'&&grid[2][2]=='X')
					   {
					   	   if ( playa1sign == 'X')
                             {
                                  var = 1;
							
                                  goto khatam;
                                  }
                             else
                             {
                             	var = 2 ; 
							
                                  goto khatam;
                             }
					   }
					   if (grid[0][2]=='X'&&grid[1][1]=='X'&&grid[2][0]=='X')
					   {
					   	   if ( playa1sign == 'X')
                             {
                                  var = 1;
							
                                  goto khatam;
                                  }
                             else
                             {
                             	var = 2 ; 
								 
                                  goto khatam;
                             }
					   }
					 if(check3 == 1||check4 ==1)
                    {
                             if ( playa1sign == 'X')
                             {
                                  var = 1;
								  
                                  goto khatam;
                                  }
                             else
                             {
                             	var = 2 ; 
								 
                                  goto khatam;
                             }
                    }
                    else if (check3 == 2||check4 ==2)
                    {
                           if ( playa1sign == 'O')
                             {
                                 var = 1;
                                  goto khatam;
                                  }
                            else 
                            {
                            	  var = 2 ; 
                                  goto khatam;
                            }
                      }  
                    else if (check3==0||check4==0) 
                    {
                         goto playa1st;	
                    }
khatam:
			{
				system("CLS");
				if (var == 1)
				{
					cout<<"\n\n\n\n\n\n\n\n\n\n";
					cout<<"                                     ";
					cout<<name1<<" WINS !";
				}
				else if (var = 2)
				{
					cout<<name2<<" WINS !";
				}
				i = 0;
				for (i;i<400;i++)
				{
					system("color 02");
					while (i<100)
		             {
		  	           i++;
		              }	
					system("color A4");
					while (i<100)
		             {
		  	           i++;
		             }	
					system("color B6");
					while (i<100)
		             {
		  	           i++;
		             }	
				    system("color C7");
				    while (i<100)
		             {
		  	           i++;
		             }	
					system("color D1");
					while (i<100)
		             {
		  	              i++;
		             }	
					system("color E9");
					while (i<100)
		             {
		  	              i++;
		             }	
					system("color F2");
					while (i<100)
		             {
		               	i++;
		              }				
		 		}
		 	}
    dubara:
    system("color B6");
	system("CLS");
	cout<<"\nWanna try again?(Y=1/N=2)\n";
	cin>>tryagain;
    if (tryagain=='1' || tryagain=='Y' || tryagain=='y')
	{
            goto SHURUVAT;
                     		 		
			}
   else 
	{
             cout<<"Thanks for visiting ThE gAmE zOnE .\n"; 
             return 0;
             system ("pause");
            } 
}
gametwo:
{ 
	system("CLS");
	system("color E0");
	cout<<"                                  MASTER-MIND\n\n";
	cout<<"Player 1 name:";
	cin>>name1;
	cout<<"\nPlayer 2 name:";
	cin>>name2;
	     startingagain:
	cout<<"\nHello "<<name1<<" and "<<name2<<",\n\n";
	cout<<"Codemaker:     \n";
	cout<<"1. "<<name1<<"\n2. "<<name2<<"\n";
	for (i=0;i<20;i++)
    {
        for(j=0;j<8;j++)
        {
                        grid[i][j]='*';
                        }
    }
    enter1:
	cin>>no;
	switch (no)
	{
	case 1 : { cout<<"\n"<<name1<<" :Codemaker\n";
	           cdmaker= name1;
			   cdbreaker=name2;
			   goto codemaker; }
	break;
			   
	case 2 : {cout<<"\n"<<name2<<" :Codemaker\n";
	         cdbreaker=name1;
	         cdmaker=name2;
			 goto codemaker; }
	break;
			 
	default : {cout<<"\nPlease enter the correct number";
	           goto enter1;
			   }
	break;
			
    }
	//displaying the grid
	codemaker:
			cout<<"\nLength of code(Integer) : \n";
			cin>>coloumn;
		    
			 cout<<"\nNumber of chances(Integer) : \n";
			cin>>row;
		    backagain:
			system("CLS");

			for (i=0;i<row;i++)
			{
				for(j=0;j<coloumn;j++)
				{
					cout<<grid[i][j]<<"|";
				}
				cout<<"\n";
			}
		codemaker111:
		char code[coloumn];
		cout<<"Please Enter your code ?";
		for (i=0;i<coloumn;i++)
		{
		  a = getch();
		  if (a=='\r')
		  {
		      system("CLS");
		      cout<<" \nError-xD86   Please enter a character and start again!\n ";
		     f=0;
			  while (f<1000000699)
		      {
		  	      f++;
	          }	
		  	  goto codemaker111;
		  }
		  cout<<"*";
          code[i]=a;    
        }
        cout<<"\nYour code has been set\n\n";
        cout<<"It's "<<cdbreaker<<"'s turn now.\n";
        count=1;
		for (i=0;i<row;i++)
        {
        	checking =0;
            cout<<count<<" CHANCE :\n"; 
			for(j=0;j<coloumn;j++)
        	{
        		cin>>grid[i][j];
        	}
        	count++;
                   toprintarray(row,coloumn);
                for(l=0;l<coloumn;l++)
				{
					//cout<<grid[i][l]<<"|";
					if (code[l]==grid[i][l])
					{
                        checking++;
                        if(checking==coloumn)
                        {goto WINWINWIN;}
					}
				}
				 	cout<<endl;
			cout<<"\nCorrect Guesses = "<<checking<<"\n";
		}
		WINWINWIN:
        	if(checking==coloumn)
			{
				cout<<"YOU BLOODY CRACKED THE CODE !";
				goto khatam;
		 	}
		 	else 
		 	{
		 		cout<<"Sorry,Budd. You lost this one.\n";
		 		 i=0;
								 while (i<1000000000)
		             {
						 i++;
		             }  
		 		goto dubara;
		 	}
	         system("pause");
	return 0;
} 
}
void toprintarray (int row,int coloumn)
{
    
     int a,b;
     for(a=0;a<row;a++)
     {
                       for(b=0;b<coloumn;b++)
                       {
                                            cout<<grid[a][b]<<"|";
                                            /*cout<<a;
                                            cout<<b;*/
                                             }
                                             cout<<endl;
     }
}



