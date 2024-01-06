// Decimal to binary -----------------------------------------------------------------

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Converting Decimal to Binary"<<endl;
//     cin>>n;
//     int bit;
//     int i =0;
//     int ans =0;
//     while (n!=0)
//     {
//         bit = n&1;
//         n = n>>1;
//         ans = bit*pow(10,i)+ans;
//         i++;
       
//     }
//     cout<<ans;  
// }

// Decimal to binary----------------------------------------------------------------------------

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     int rem;
//     int ans = 0;
//     int i = 0;
//     cout<<"Let's converting into the Binary.."<<endl;
//     cin>>n;
//     while (n>0)
//     {
//         rem = n%2;
//         ans = rem*pow(10,i) + ans;
//         n = n/2;
//         i++;
//     }
//     cout<<ans;
// }

// Binary to Decimal
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Lets converting to the binary..."<<endl;
//     cin>>n;
//     int i =0;
//     int bit;
//     int ans = 0;
//     while (n!=0)
//     {
//         bit = n%10;
//         if (bit==1)
//         {
//             ans = ans + pow(2,i);
//         }
//         i++;
//         n=n/10;
        
//     }
//     cout<<"Binary conversion is.. "<<ans;
// }