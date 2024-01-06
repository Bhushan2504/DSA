// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b = 1;
//     a=10;
//     if(++a)
//         cout<<b;
//     else
//     {
//         cout<< ++b;
//     }   
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;    
//     if (a-- >0 || ++b >2 )
//     {
//         cout<<"Stage1 - Inside If "<<endl;
//     }
//     else
//     {
//         cout<<"Stage2 - Inside Else "<<endl;
//     }
//     cout<< a <<" "<< b <<endl;
// } // namespace  


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;    
//     if (a-- >0 && ++b >2 )
//     {
//         cout<<"Stage1 - Inside If "<<endl;
//     }
//     else
//     {
//         cout<<"Stage2 - Inside Else "<<endl;
//     }
//     cout<< a <<" "<< b <<endl;
// } // namespace  

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number  = 3;
//     cout<< (25*(++number));
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a =1;
//     int b = a++;
//     int c = ++a;
//     cout<< b 0<<endl;
//     cout<< c <<endl;
// }c

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i =0;i<=5;i--)
//     {
//         cout<< i << " ";
//         i++;
//     }
// }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i =0;i<=5;i++)
//     {
//         cout<< i << " ";
//         i++;
//     }
// }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     for ( int i=0;i<=15;i+=2)
//     {
//         cout<<i<<" "<<endl;
//         if(i&1)
//         {
//             continue;
//             // break;
//         }
//         cout<<"HEllo";
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0 ; i<=5;i++)
//     {
//         for (int j = 0; j <= 5; j++)
//         {
//             if (i+j == 10)
//             {
//                 break;
//             }
//             cout<<i<<" "<<j<<endl;
//         }     
//     }
//}





/*1281*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum =0;
//     int prod = 1;
//     while(n!=0)
//     {
//         int Rem = n%10;
//         sum += Rem;
//         prod*=Rem;
//         n=n/10;
//     }
//     int Answer=prod-sum;
//     cout<<Answer;
// }



/*191*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Let's print the number of one sets bit ";
//     cin>>n;
//     int count=0;
//     while (n>0)
//     {
//         if (n&1)
//         {
//             count+=1;          
//         }
//         n = n>>1;      
//     }
//     cout<<"The numbers of set bits are --> "<<count;   
// }

// 1334 ---> 4331

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Printing the reverse number.."<<endl;
//     cin>>n;
//     int number =0 ;
//     while (n>0)
//     {
//         int rem = n%10;
//         number = number*10 + rem;
//         n = n/10; 
//     }
//     cout<<"Reverse of number is "<<number;
// } 


// Decimal TO Binary
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Converting Decimal to Binary...!";
//     cin>>n;
//     int bin= 0;
//     while (n>0)
//     {  
        
//         bin=n%2;
//         cout<<bin;
//         n=n/2;
//     }   
// }

