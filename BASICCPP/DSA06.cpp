//Reverse integers 1009

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Printing reverse number "<<endl;
//     cin>>n;
//     int ans=0;
//     int rem;
//     while (n!=0)
//     {
//         rem = n%10;
//         if (ans>INT_MAX/10 || ans<INT_MIN/10)
//         {
//             ans=0;
//             break;
//         }
//         else
//         {
//             ans = ans*10 + rem;
//         }
//         n = n/10;
//     }
//     cout<<ans;
// }



//1009 Complement of base 10 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Let's do the complement of base 10"<<endl;
//     cin>>n;
//     int mask=0;
//     int m =n;
//     if(n==0)
//         {
//             cout<< 1<<endl;
//         }
//     else
//     {
//         while (m!=0)
//             {
//                 mask = mask<<1 | 1;
//                 m= m>>1;
//             }
//     }
    
//     int ans = (~n) & mask;
//     cout<<ans;
// }