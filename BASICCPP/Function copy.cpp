// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch ='a';
//     cout<<endl;
//     switch(ch)
//     {
//         case '1': cout<<"This is not correct answer";
//                     break;
//         case 'a': cout<<"This is right correct answer"; 
//         default : cout<<"It is default case "<<endl;
//     }
//     return 0;
// }


// //power a,b
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin >>a >>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans =ans*a;
//     }
//     cout<<"The power of number is "<<ans;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int power(int l,int m){
//     int ans=1;
//     for (int i =1;i<=m;i++)
//     {
//         ans=ans*l;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int answer =power(a,b);
//     cout<<"The answer is "<<answer;
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------

//Printing nCr
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     return fact ;
// }
// int answer(int n,int r)
// {
//     int numerator =factorial(n);
//     int denomiter=factorial(r)*factorial(n-r);
//     int ans=numerator/denomiter;
//     return ans;
// }
// int main()
// { 
//     int n,r;
//     int ans;
//     cin>>n>>r;
//     ans=answer(n,r);
//     cout<<ans;
//     return 0;
// }

//----------------------------------------isEven()______________________

// #include<iostream>
// using namespace std;
// bool isEven(int n){
//     if(n&1){
//         return 0;
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Enter The Number ";
//     cin>>n;
//     bool k =isEven(n);
//     if(k){
//         cout<<"This is Even";
//     }
//     else
//     {
//         cout<<"This is Not Even";
//     }
// }

//------------------------------------------Counting Programme-----------------------------------------------------
// #include<iostream>
// using namespace std;
// void printCounting(int n)
// {
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     printCounting(n);
//     return 0;
// }

//-------------------------------Prime Number Logic--------------------------
// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Inserting the number    "<<endl;
//     cin>>n;
//     bool k=isPrime(n);
//     if(k){
//         cout<<"This is prime number";
//     }
//     else{
//         cout<<"This is not prime number";
//     }
// }