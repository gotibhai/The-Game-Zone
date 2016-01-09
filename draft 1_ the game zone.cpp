#include <iostream>
#include <string>
#include <math.h>
#include <cctype>
#include <stdlib.h>
using namespace std;
int l;
char tictactoe[3][3]={'1','2','3','4','5','6','7','8','9'};
int winning(int l)
 {
       int m=0;  
        int counting=0,counting2=0;            
          
          while(m<3)
            	    {
                                  //cout<<tictactoe[l][m]<<"\n";  
                                    if ( tictactoe[l][m] == 'X')
                                    {
                                                     // cout<<"counting = "<<counting;
                                                        counting++;
                                                        }
                                    else if (tictactoe[l][m] == 'O')
                                    {
                                      //  cout<<"counting2 = "<<counting2;
                                         counting2++; 
                                         }
                                     m=m+1;
                     }    
                    /*cout<<"counting = "<<counting;
                    cout<<"counting2 = "<<counting2;*/
                                     if(counting == 3)
                                    {
                                                
                                                return 1;
                                                }
                                    else if(counting2 == 3)
                                    {
                                                     
                                                     return 2;
                                                     }
                                    else 
                                    {
                                         return 0;
                                         }  	
}  
int winning2(int m)
 {
       int l=0;  
        int counting=0,counting2=0;            
          
          while(l<3)
            	    {
                                  //cout<<tictactoe[l][m]<<"\n";  
                                    if ( tictactoe[l][m] == 'X')
                                    {
                                                        
                                                        counting++;
                                                        }
                                    else if (tictactoe[l][m] == 'O')
                                    {
                                        
                                         counting2++; 
                                         }
                                         l=l+1;
                  }    
                                     if(counting == 3)
                                    {
                                                
                                                return 1;
                                                }
                                    else if(counting2 == 3)
                                    {
                                                     
                                                     return 2;
                                                     }
                                    else 
                                    {
                                         return 0;
                                         }  	
}  
int main()
{
    int x,i,s,check,check2,check3,check4,userinput1R,userinput1C,fuserinput1R,fuserinput1C,userinput2R,userinput2C,fuserinput2R,fuserinput2C;
    char playa1sign,choice,playa2sign;
    string name,name2;
    cout<<"Hii , Player 1 Name : ";
    cin>>name;
    cout<<"Hii , PLayer 2 Name : ";
    cin>>name2;
     point:
			  for (i=0;i<3;i++)
              {
                  for(x=0;x<3;x++)
                  {
                                  cout<<tictactoe[i][x]<<"|";
                                  }
                                  cout<<endl;
                                  
              } 
              back:
                   system("color fc");
              cout<<"Choose Your Sign "<<name2<<" ?(X/O)\n";
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
               system("color 9d");
              	cout<<"YOUR SYMBOL IS O . LETS START\n";
              	playa2sign = 'O';
				  playa1sign = 'X';
              }
              else
              {
              	cout<<"Please Choose from the options given below?";
              	goto back;
              }
              //INSERT TOSS HERE
              playa1st:
              	cout<<name<<" -\nRow :";
            		cin>>userinput1R;
            		if (userinput1R>3||userinput1R<1)
            		{
                                   cout<<"PLease Enter The Correct Row Number ,"<<name<<"\n";
                                   goto playa1st;
                                   }             
            		coloumn :
                    cout<<"Coloumn :";
                    cin>>userinput1C;
            		if (userinput1C>3||userinput1C<1)
            		{
                                   cout<<"PLease Enter The Correct Row Number, "<<name<<"\n";
                                   goto coloumn;
                                    } 
                    fuserinput1R = userinput1R-1;
            		fuserinput1C = userinput1C-1;
            		if (tictactoe[fuserinput1R][fuserinput1C]== 'X'||tictactoe[fuserinput1R][fuserinput1C]=='O')
            		{
            			cout<<"This location is already taken .. \nPlease re-enter the co-ordinates.";
            			goto playa1st;
						 
            		}
            		tictactoe[fuserinput1R][fuserinput1C] = playa1sign ;	
            		check = winning(fuserinput1R);
            		//cout<<"check = "<<check<<"\n\n";
            		check2 = winning2(fuserinput1C);
            		//cout<<"check = "<<check<<"\n\n";
            		if(tictactoe[0][0]=='X'&&tictactoe[1][1]=='X'&&tictactoe[2][2]=='X'||tictactoe[2][0]=='X'&&tictactoe[1][1]=='X'&&tictactoe[0][2]=='X')
            		{
                             if ( playa1sign == 'X')
                             {
                                  cout<<name<<" WINS !";
                                  goto end;
                                  }
                            else 
                            {
                                 cout<<name2<<" WINS !";
                                 goto end;
                             }
                    }    
                     	if(tictactoe[0][0]=='O'&&tictactoe[1][1]=='O'&&tictactoe[2][2]=='O'||tictactoe[2][0]=='O'&&tictactoe[1][1]=='O'&&tictactoe[0][2]=='O')
            		{
                             if ( playa1sign == 'O')
                             {
                                  cout<<name<<" WINS !";
                                  goto end;
                                  }
                            else 
                            {
                                 cout<<name2<<" WINS !";
                                 goto end;
                             }
                    }                       
                    if(check == 1||check2== 1)
                    {
                             if ( playa1sign == 'X')
                             {
                                  cout<<name<<" WINS !";
                                  goto end;
                                  }
                            else 
                            {
                                 cout<<name2<<" WINS !";
                                 goto end;
                             }
                    }
                    else if (check == 2||check2== 2)
                    {
                             if ( playa1sign == '0')
                             {
                                  cout<<name<<" WINS !";
                                  goto end;
                                  }
                            else 
                            {
                                 cout<<name2<<" WINS !";
                                 goto end;
                             }
                    }
                    else 
                    {
                          }
				    for (i=0;i<3;i++)
                    {
                              for(x=0;x<3;x++)
                                {
                                        cout<<tictactoe[i][x]<<"|";
                                }
                                  cout<<endl;                  
                    }                 
                    playa2st:
                    cout<<name2<<" -\nRow :";
                    cin>>userinput2R;
                    if (userinput2R>3||userinput2R<1)
            		{
                                   cout<<"PLease Enter The Correct Row Number ,"<<name2<<"\n";
                                   goto playa2st;
                                   }  
            		coloumn2:
                    cout<<"Coloumn :";
            		cin>>userinput2C;
            		if (userinput2C>3||userinput2C<1)
            		{
                                   cout<<"PLease Enter The Correct Coloumn Number, "<<name2<<"\n";
                                   goto coloumn2;
                                   }      
            		fuserinput2R = userinput2R-1;
            		fuserinput2C = userinput2C-1;
            		cout<<"check = "<<check<<"\n\n";
            		if (tictactoe[fuserinput2R][fuserinput2C]== 'X'||tictactoe[fuserinput2R][fuserinput2C]=='O')
            		{
            			cout<<"This location is already taken .. \nPlease re-enter the co-ordinates.\n";
						goto playa2st; 
            		}
            		tictactoe[fuserinput2R][fuserinput2C] = playa2sign ;
            		 for (i=0;i<3;i++)
                    {
                              for(x=0;x<3;x++)
                                {
                                        cout<<tictactoe[i][x]<<"|";
                                }
                                  cout<<endl;      
                     }
            			check3= winning(fuserinput2R);
            			check4= winning2(fuserinput2C);
            				if(tictactoe[0][0]=='X'&&tictactoe[1][1]=='X'&&tictactoe[2][2]=='X'||tictactoe[2][0]=='X'&&tictactoe[1][1]=='X'&&tictactoe[0][2]=='X')
            		{
                             if ( playa1sign == 'X')
                             {
                                  cout<<name<<" WINS !";
                                  goto end;
                                  }
                            else 
                            {
                                 cout<<name2<<" WINS !";
                                 goto end;
                             }
                    } 
                    if(tictactoe[0][0]=='O'&&tictactoe[1][1]=='O'&&tictactoe[2][2]=='O'||tictactoe[2][0]=='O'&&tictactoe[1][1]=='O'&&tictactoe[0][2]=='O')
            		{
                             if ( playa1sign == 'O')
                             {
                                  cout<<name<<" WINS !";
                                  goto end;
                                  }
                            else 
                            {
                                 cout<<name2<<" WINS !";
                                 goto end;
                             }
                    }                                  
                    if(check3== 1||check4 == 1)
                    {
                             if ( playa2sign == 'X')
                             {
                                  cout<<name2<<" WINS !";
                                  goto end;
                                  }
                            else 
                            {
                                 cout<<name<<"WINS !";
                                 goto end;
                             }
                    }
                    else if(check3 == 2||check4 == 2)
                    {
                             if ( playa2sign == 'X')
                             {
                                  cout<<name2<<" WINS !";
                                  goto end;
                                  }
                            else 
                            {
                                 cout<<name<<" WINS !";
                                 goto end;
                             }
                    }
                    else 
                    {
                          goto playa1st ;
                          }
                    end:
                    {
				cout<<"YOU WON !";
				for (i=0;;i++)
				{
					system("color 02");
					while (i<10000)
		             {
		  	           i++;
		              }	
					system("color A4");
					while (i<10000)
		             {
		  	           i++;
		             }	
					system("color B6");
					while (i<10000)
		             {
		  	           i++;
		             }	
				    system("color C7");
				    while (i<1000000999)
		             {
		  	           i++;
		             }	
					system("color D1");
					while (i<10000)
		             {
		  	              i++;
		             }	
					system("color E9");
					while (i<10000)
		             {
		  	              i++;
		             }	
					system("color F2");
					while (i<10000)
		             {
		               	i++;
		              }	
					system("color 72");
					while (i<10000)
		             {
		            	i++;
		             }	
				    system("color 93");	
					while (i<10000)
		             {
		               	i++;
		              }							
                }
                }
                    system("pause");
                    return 0;
                    
}
 
