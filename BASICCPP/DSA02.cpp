// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     float b= 2.0;
//     cout<<a/b <<endl;
// }


//TAKING INPUT 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cin >> n;
//     cout<<"The value of n is "<<n<<endl;
// } // namespace std;

//--------------------------------------------------------------

//WHILE LOOPS
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the A "<<endl;
//     cin>>a;
//     cout<<"Enter the B "<<endl;
//     cin>>b;
    
//     if(a>b)
//     {
//         cout<<a<<" is gretar than "<<b;
//     }
//     else
//     {
//         cout<<b<<" is greter than "<<a ;
//     }    
// }


//---------IMPORATANT PROBLEM------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<" Enter the character "<<endl;
//     cin>>ch;

//     if(ch>=65 && ch<=90)
//     {
//         cout<<ch<<" this is the capital character "<<endl;

//     }
//     else if(ch>=97 && ch<=122)
//     {
//         cout<<ch<<" is the small character"<<endl;
//     }
//     else{
//         cout<<"This is not alphabets character ";
//     }
// }

//----------------Print 1 To N-------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int i =1;
//     while (i<=n)
//     {
//         cout<<i<<" ";
//         i = i + 1;
//     }   
// }

//-------------------Sum of first n number----------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,n;
//     cout<<"Enter the upto which you want to print the number "<<endl;
//     cin>>n;

//     i = 1;
//     int sum =0;
//     while (i<=n)
//     {
//         i = i+1;
//         sum = sum+i;
//     }

//     cout<<"The sum of n first number is "<<sum<<endl;

    
// }

//-----------------Celsius to Ferhanite------------------

// #include<iostream>
// using namespace std;

// int main()
// {
//     float f;
//     int n;
//     cout<<"Enter the table upto which you want ";
//     cin>>n;
//     int i=20;
//     cout<<" Degree to Ferhanite"<<endl;

//     while (i<=n && i>=20)
//     {
//         f = (i*1.8)+32;
//         cout<<i<<" to --> "<<f<<endl;
//        i=i+1;
//     }  
// }

//----------------Check Weather Prime or Not -----------------

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number which you want to check";
//     cin>>n;
//     int i =2;
    
//     while (i<n)
//     {
//         if(n%i==0)
//         {
//             cout<<"This is not prime number";
//             i = i+n;
//         }
//         i = i+1;
//     }
// }

//---------------------------------------------------------------------------------------------------------------------------