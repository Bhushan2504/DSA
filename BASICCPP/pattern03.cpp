/* ----PATTERN 01----

# # #
# # #
# # #

1 1 1
2 2 2
3 3 3 

*/

// #include<iostream>
// using namespace std;
// int main()
// { 
//     int i = 1;
//     cout<<"Lets!,Print the Pattern"<<endl<<endl;
//     int n =3;
//     while(i<=n)
//     {
//         int j = 1;
//         while (j<=n)
//         {
//             cout<<i<<" ";
//             j = j+1;
//         }
//         cout<<endl;
//         i = i+1;
        
//     }
//     cout<<"\n\n";
// } 

//------------------------------------------------------------------------------------------------------------

/*
1 2 3 4
1 2 3 4 
1 2 3 4 
1 2 3 4 
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     int n;
//     cout<<"The number of row "<<endl;
//     cin>>n;
//     while(i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             cout<<j<<" ";
//             j= j+1;
//         }
//         cout<<endl;
//         i = i + 1;
        
//     }
// }

//--------------------------------------------------------------------------------------------------

/*
3 2 1
3 2 1 
3 2 1
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,n;
//     i=1;
//     cout<<"Printing above pattern!"<<endl;
//     cin>>n;
//     while(i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             cout<<n-j+1<<" ";
//             j = j + 1;

//         }
//         cout<<endl;
//         i = i + 1;
        
//     }
// }

//------------------------------------------------------------------------------------------------
/*
1 2 3
4 5 6
7 8 9
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     int n;
//     cout<<"Lets printing the pattern!"<<endl;
//     cin>>n;
//     int count = 1;
//     while (i<=n)
//     {
//         int j = 1;
//         while(j<=n)
//         {
//             cout<<count<<" ";
//             j=j+1;
//             count = count+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
// } // 

//--------------------------------------------------------------------------------------------------
/*

1
2 3
3 4 5 
4 5 6 7

*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Lets the print the pattern "<<endl;
//     // cin>>n;
//     int i = 1 ;
//     while(i<=3)
//     {
//         int j = 1;
//         int count = i;
//         while(j<=i)
//         {
//             cout<<count<<" ";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i= i+1;
        
//     }
    
// }

//---or
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     int n;
//     cout<<"let's print the pattern "<<endl;
//     cin>>n;
//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=i)
//         {
//             cout<<i + j -1<<" ";
//             j = j+1;
            
//         }
//         cout<<endl;
//         i =i+1;
//     }
// }

//-------------------------------------------------------------------------------------------------
/*
1
2 1
3 2 1
4 3 2 1
*/


// #include<iostream>
// using namespace std;
// int main()
// {
//     int i =1;
//     cout<<"Let's print the pattern "<<endl;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<i-j+1<<" ";
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;   
//     }   
// }

//--------------------------------------------------------------------------------------------------------
/*
A A A A A
B B B B B
C C C C C
D D D D D 
E E E E E
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i =1;
//     int n;
//     cout<<"Let's print the pattern "<<endl;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1 ;
//         while (j<=n)
//         {
//            char ch = 65 +i-1;
//            cout<<ch<<" ";
//            j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;   
//     }    
// } // namespace std;

//--------------------------------------------------------------------------------------------
/*
A B C D
E F G H
I J K L
M N O P
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     int count=65;
//     int n;
//     cout<<"Lets us print this "<<endl;
//     cin>>n;
//     while (i<=n)
//     {
//         int j = 1;
//         int k =count;
//         while (j<=n)
//         {
//             int E = k+j-1;
//             char ch = E;
//             cout<<ch<<" ";
//             j = j +1 ;
//             count = count+1;
//         }
//         cout<<endl;       
//         i = i + 1;      
//     } 
// }

//--------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cout<<"Printing the pattern .. "<<endl;
//     cin>>n;
//     int i = 1;
//     while (i<=n)
//     {
//         int j =1;
//         while (j<=i)
//         {
//             char ch = 'A'+i+j-2;
//             cout<<ch<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
// }

//----------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cout<<"Printing the pattern .. "<<endl;
//     cin>>n;
//     int i = 1;
//     while (i<=n)
//     {
//         int j =1;
//         while (j<=i)
//         {
//             char ch = 'A'+i-1;
//             cout<<ch<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
// }

//----------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cout<<"Printing the pattern .. "<<endl;
//     cin>>n;
//     int i = 1;
//     char ch = 'A';
//     while (i<=n)
//     {
//         int j =1;
//         while (j<=i)
//         {
//             // char ch = 'A'+i-1;
//             cout<<ch<<" ";
//             ch = ch +1;
//             j = j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//}

//-------------------------------------------------------------------------------------------
/*
C
B C
A B C
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     int n ; 
//     cout<<"Printing the pattern "<<endl;
//     cin>>n;

//     while (i<=n)
//     {
//         int j =1;
//         while (j<=i)
//         {
//          char ch='D'+n-i+j-4;
//          cout<<ch<<" ";
//          j = j+1;

//         }
//         cout<<endl;
//         i = i+1;
//     }
    
// }

//-----------------------------------------------------pyramid Pattern----------------------------------------
/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i= 1;
//     int n;
//     cout<<"Printing the pyramid.."<<endl;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n-i) // for printing space
//         {
//             cout<<" "<<" ";
//             j= j+1 ;
//         }
//         while (j<=n) //for printing star
//         {
//             cout<<"*"<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;      
//     }   
// }

//---Mysirg
/*
# # # # #
  # # # #
    # # #
      # #
        #
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"lets print the pattern again.."<<endl;
//   cin>>n;
//   int i =1;
//   while (i<=n)
//   {
//     int j=1;
//     while(j<=n)
//     {
//         if(j<=n && j>i-1)
//         {
//             cout<<"#"<<" ";
//             j= j+1;
//         }
//         else
//         {
//             cout<<" "<<" ";
//             j = j+1;
//         }       
//     }
//     cout<<endl;
//     i = i+1;
//   }

// }--love babbar;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int i =1;
//     cout<<"Lets print the pattern .."<<endl;
//     cin>>n;

//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i-1)//for space I am Triangle
//         {
//             cout<<" "<<" ";
//             j = j +1;
//         }
//         while (j<=n) /for star Triangle
//         {
//             cout<<"*"<<" ";
//             j = j + 1;
//         }
        
//         cout<<endl;
//         i=i+1;        
//     }   
// }

//-------------------------------------------------------------------------------------------------------
/*
1 1 1 1
  2 2 2
    3 3
      4
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     int n;
//     cout<<"Lets print babbar bhaiyya pattern "<<endl;
//     cin>>n;

//     while (i<=n)
//     {
//         int j = 1;
//         while (j<=n)
//         {
//           if(j<=n && j>=i)
//           {
//             cout<<i<<" ";
//             j = j+1;
//           }
//           else
//           {
//             cout<<" "<<" ";
//             j = j+1;
//           }
          
//         }
//       cout<<endl;
//       i= i+1;
//     }
    
// } // namespace name

//-------------------------------
/*
      1
    2 2
  3 3 3
4 4 4 4
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   int i =1;
//   cout<<"Printinf the given pattern "<<endl;
//   cin>>n;
//   while (i<=n)
//   {
//     int j =1;
//     while (j<=n)
//     {
//       if(j<=n && j>=(n-i+1))
//       {
//         cout<<i<<" ";
//         j = j+1;
//       }
//       else
//       {
//         cout<<" "<<" ";
//         j = j+1;
//       }     
//     }
//     cout<<endl;
//       i = i+1; 
//   }
// } // namespace name

//----------------------------------------------------------------------------------------
/*
      0
    1 2
  3 4 5
6 7 8 9
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//   int i =1;
//   int n;
//   cout<<"Lets print the pattern "<<endl;
//   cin>>n;
//   int count=1;
//   while(i<=n)
//   {
//     int j =1;
//     while (j<=n)
//     {
//       if (j>=n-i+1)
//       {
//         cout<<count<<" ";
//         count= count+1;
//         j = j+1;
//       }
//       else
//       {
//         cout<<" "<<" ";
//         j = j+1;
//       }
      
//     }
//     cout<<endl;
//     i = i +1;
    
//   }
// }

//-------------------------------------------------------------------
/*
1 1 1 1
  2 2 2
    3 3
      4
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//   int i= 1;
//   int n ;
//   cout<<"Print the pattern "<<endl;
//   cin>>n;
//   while (i<=n)
//   {
//     int j =1;
//     while (j<=i-1)
//     {
//       cout<<" "<<" ";
//       j = j+1;
//     }
//     while (j<=n)
//     {
//       cout<<i<<" ";
//       j = j+1;

//     }
//     cout<<endl;
//     i = i +1;
//   }
// } // namespace name


//---------------------------------------------------------------------------------------
/*
      1
    2 2
  3 3 3
4 4 4 4
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//   int i=1;
//   int n;
//   cout<<"Print the pattern"<<endl;
//   cin>>n;
//   while (i<=n)
//   {
//     int j=1;
//     while (j<=n-i)
//     {
//       cout<<" "<<" ";
//       j = j + 1;

//     }
//     while (j<=n)
//     {
//       cout<<i<<" ";
//       j = j + 1;
//     } 
//     cout<<endl;
//     i = i+1;
//   }
// }


//---------------------------------------------------------------------------

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i =1;
//   int n;
//   cout<<"Let's print the pattern "<<endl;
//   cin>>n;
//   while (i<=n)
//   {
//     int j = 1;
//     int count = i;
//     while (j<=4-i)
//     {
//       cout<<" "<<" ";
//       j = j + 1;
//     }
    
//     while (j<=4)
//     {
//       cout<<"*"<<" ";
//       j = j + 1;
//     }
//     while (j>4 && j < 5+i-1 )
//     {
//       cout<<"*"<<" ";
//       j = j + 1;
//     }
//     while (j >=5 && j<=7)
//     {
//       cout<<" "<<" ";
//       j = j+1;
//     }
//     cout<<endl;
//     i = i +1; 
//   }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//   int i;
//   int n;
//   i =1;
//   cout<<"Printing the pattern.."<<endl;
//   cin>>n;
//   while (i<=4)
//   {
//     int j=1;
//     int count = i;
//     while (j<=7)
//     {
//       if(j>=n-i+1 && j<n+i)
//       {
//         cout<<"*"<<" ";
//         count = count+1;
//         j = j + 1;
//       }
//       else
//       {
//         cout<<" "<<" ";
//         j = j + 1;
//       }
      
//     }
//     cout<<endl;
//     i = i + 1;
//   }
  
// }

//-----------------------------------------------------------------


// #include <iostream>
// using namespace std;
// int main()
// {
//   int i=1;
//   int n;
//   cout<<"Printing Derived pattern..."<<endl;
//   cin>>n;
//   while (i<=n)
//   {
//     int j = 1;
//     while (j<=n-i+1)
//     {
//       cout<<n-j+1<<" ";
//       j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1; 
//   }
// }


//--------------------------------------------------------------------------------------
/*
      1
    2 1
  3 2 1
4 3 2 1
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i =1;
//   int n;
//   cout<<"Printing the pattern..."<<endl;
//   cin>>n;
//   while (i<=n)
//   {
//     int j =1;
//     int count = i;
//     while (j<=n-i)
//     {
//       cout<<" "<<" ";
//       j = j+1;
//     }
//     while (j<=n)
//     {
//       cout<<n-j+1<<" ";
//       j = j + 1;
//     }
//     cout<<endl;
//     i = i +1;
//   } 
// }

//--------------------------------------------------------------------------------


// #include<iostream>
// using namespace std;
// int main()
// {
//   int i = 1;
//   int n ; 
//   cout<<"Printing the Pattern.."<<endl;
//   cin>>n;
//   while (i<=n)
//   {
//     int j = 1;
//     int k = 1 ;
//     while (j<=n-i)
//     {
//       cout<<" "<<" ";
//       j = j + 1;
      
//     }
//     while (j<=n)
//     {
//       cout<<k<<" ";
//       j = j + 1;
//       k = k + 1;
//     }
//     cout<<endl;
//     i = i + 1;
//   }
  
// }

//--------------------------------------------------------------------------------------------
/*

        *
      *   *
    *   *   *
  *   *   *   *
*   *   *   *   *


*/
// #include<iostream>
// using namespace std;
// int main()
// {
//   int i ;
//   cout<<"Let's printing the pattern.."<<endl;
//   while (i<=5)
//   {
//     int j =1;
//     int k=1;
//     while (j<=9)
//     {
//       if(j>=5-i+1 && j<=4+i && k )
//       {
//         cout<<"*"<<" ";
//         j = j + 1;
//         k = 0 ;
//       }
//       else
//       {
//         cout<<" "<<" ";
//         j = j+1;
//         k = 1;
//       }
//     }
//     cout<<endl;
//     i = i + 1;
//   } 
// }

//--------------------------------------------------------------------------------------
/*


* * * * * * * * * 
* * * *   * * * *
* * *       * * *
* *           * * 
*               *


*/

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i =1;
//   // int n = 5;
//   while (i<=5)
//   {
//     int j = 1;
//     while (j<=9)
//     {
//       if(j<=6-i || j >= 4 + i)
//       {
//         cout<<"*"<<" ";
//         j = j + 1;

//       }
//       else
//       {
//         cout<<" "<<" ";
//         j = j + 1;
//       }
//     }
//     cout<<endl;
//     i = i + 1;
//   } 
// }